# Three LED Pomodoro Timer
This is a Pomodoro timer built with three LEDs and a speaker.   

## Parts list
- 3x LEDs (different colors optional)
- 3x 330 Ohm Resistors 
- 1x Piezoelectric Speaker 
- 9x Male to Male Breadboard Jumper Wires
- 1x Breadboard
- Arduino Uno

I used an Arduino Uno for this project, but this should be doable on any arduino.

## Assembling the Timer
![20220821_123900](https://user-images.githubusercontent.com/109832903/185802093-951206b3-d45c-4525-8f42-0b2dddc407f2.jpg)
![20220821_123828](https://user-images.githubusercontent.com/109832903/185802096-82076457-7743-4c0f-987c-5c8c5df5a73a.jpg)
![20220821_123819](https://user-images.githubusercontent.com/109832903/185802100-abfcbcea-5331-4f88-9f1f-1c299b92831a.jpg)

- Pin 13: The green LED lights up when it's time to work.
- Pin 7: The white LED blinks three times when it's time to start or stop your break. The speaker is also connected to this pin.
- Pin 5: The yellow LED lights up when it's time for a break.

Both the speaker and the LED's negative terminals are connected to 330 ohm resistors, which are then all connected to ground. 

You can modify line 18 (25 minutes) and line 27 (5 minutes) for custom times. The `delay();` function uses miliseconds as its parameters. 
