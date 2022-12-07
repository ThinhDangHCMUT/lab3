#include "scheduler.h"
#include "led.h"
#include "button.h"

sTasks SCH_tasks_G[SCH_MAX_TASKS];
uint8_t current_index_task = 0;
uint8_t flag_task_completed[SCH_MAX_TASKS];

void task_do_nothing(){
	return;
}

void SCH_Init(){
	clearLED();
	clearLight();
	current_index_task = 0;
	for(int i = 0; i<current_index_task ;i++){
		flag_task_completed[i] = 0;
	}
}
//same as job add a timer(delay, period)
void SCH_Add_Task ( void (*pFunction)() , uint32_t DELAY, uint32_t PERIOD){
	if(current_index_task < SCH_MAX_TASKS){
		SCH_tasks_G[current_index_task].pTask = pFunction;
		SCH_tasks_G[current_index_task].Delay = DELAY;
		SCH_tasks_G[current_index_task].Period =  PERIOD;
		SCH_tasks_G[current_index_task].RunMe = 0;
		current_index_task+=1;
	}else{
		// if this happen then remove current index and replace it by new task.
		current_index_task-=1;
		SCH_Delete_Task(current_index_task);
		SCH_tasks_G[current_index_task].pTask = pFunction;
		SCH_tasks_G[current_index_task].Delay = DELAY;
		SCH_tasks_G[current_index_task].Period = PERIOD;
		SCH_tasks_G[current_index_task].RunMe = 0;
	}
}

void SCH_Delete_Task(uint32_t task_ID){
	//Move the position of tasks in the array to the left.
	if(task_ID < current_index_task){
		for(int i = 0; i < current_index_task-1; i+=1){
			SCH_tasks_G[i].pTask = SCH_tasks_G[i+1].pTask;
			SCH_tasks_G[i].Delay = SCH_tasks_G[i+1].Delay;
			SCH_tasks_G[i].Period = SCH_tasks_G[i+1].Period;
			SCH_tasks_G[i].RunMe = SCH_tasks_G[i+1].RunMe;
		}
	}
	//Set all properties of the task in the current position to 0
		SCH_tasks_G[current_index_task].pTask = task_do_nothing;
		SCH_tasks_G[current_index_task].Delay = 0;
		SCH_tasks_G[current_index_task].Period =  0;
		SCH_tasks_G[current_index_task].RunMe = 0;
		current_index_task-=1;
}

//a task will be executed by delay for the first time and then by period
void SCH_Update(void) {
	for (int i = 0; i < current_index_task; i+=1 ) {
			if (SCH_tasks_G[i].Delay > 0) {
				SCH_tasks_G[i].Delay -= 1;      //timer_counter for delay
			}
			if(SCH_tasks_G[i].Delay == 0){
				// periodic
				SCH_tasks_G[i].Delay = SCH_tasks_G[i].Period;  //After delay running it will run in a cycle
				SCH_tasks_G[i].RunMe += 1;
				flag_task_completed[i] = 1;
			}
	}
}

void SCH_Dispatch_Tasks(void) {
	for (int i = 0; i < current_index_task; ++i) {
		if (SCH_tasks_G[i].RunMe > 0) {
			SCH_tasks_G[i].RunMe -= 1;
			(*SCH_tasks_G[i].pTask)();

//          one-shot task
//			if(flag_task_completed[i]){
//					flag_task_completed[i] = 0;
//					SCH_Delete_Task(i);
//				}
		}
	}
}

