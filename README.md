# Automatic-fan-speed-controller
Automatic fan speed controller using Arduino and LM35 temperature sensor, simulated in PICSimLab


A simulation-based embedded project that automatically controls fan speed based on ambient temperature using an LM35 temperature sensor and Arduino Uno.The system reads temperature in real time and adjusts fan speed across three levels — Low, Medium, and High — while displaying the current temperature and fan status on a 16x2 LCD display.LED indicators show the current speed level visually.

Components Used
- Arduino Uno
- LM35 Temperature Sensor
- DC Motor (Fan)
- LCD Display (HD44780 16x2)
- LEDs (Green, Yellow, Red)

Pin Connections
- LM35 Output  - A0
- Green LED    - Pin 6
- Yellow LED   - Pin 7
- Red LED      - Pin 8
- Motor PWM    - Pin 9
- Motor Dir    - Pin 10
- LCD RS       - Pin 12
- LCD EN       - Pin 11
- LCD D4-D7    - Pins 5,4,3,2

Tools Used
- Arduino IDE
- PICSimLab Simulator