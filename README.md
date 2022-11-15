### Lab3 Button and Switch

### Specifications
You are required to build an application of a traffic light in a cross road which includes
some features as described below:

- The application has 12 LEDs including 4 red LEDs, 4 amber LEDs, 4 green LEDs.
- The application has 4 seven segment LEDs to display time with 2 for each road. The
2 seven segment LEDs will show time for each color LED corresponding to each
road.
- The application has three buttons which are used
    - Select mode (4 mode)
    - Modify the time for each color led on the fly
    - Set the chosen value
- The application has at least 4 modes which is controlled by the first button. Mode
1 is a normal mode, while modes 2 3 4 are modification modes. You can press the
first button to change the mode. Modes will change from 1 to 4 and back to 1 again.

**Mode 1: normal mode**
The traffic light application is running normally.

**Mode 2: Modify time duration for the red LEDs:** This mode allows you to change
the time duration of the red LED in the main road. The expected behaviours of this
mode include:
- All single red LEDs are blinking in 2 Hz.
- Use two seven-segment LEDs to display the value.
- Use the other two seven-segment LEDs to display the mode.
- The second button is used to increase the time duration value for the red LEDs.
- The value of time duration is in a range of 1 - 99.
- The third button is used to set the value.

**Mode 3 - Modify time duration for the amber LEDs:**
Similar for the red LEDs described above with the amber LEDs.

**Mode 4 - Modify time duration for the green LEDs:**
Similar for the red LEDs described above with the green LEDs.

### Realistic