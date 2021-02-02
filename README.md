# Introduction
[![Build Status](https://travis-ci.org/dannyp11/han-gps.svg?branch=master)](https://travis-ci.org/dannyp11/han-gps)

[Presentation Slides](https://drive.google.com/file/d/0B5QKnYKLy6kWUWltWnhmTmNBMTQ/view?usp=sharing)

Hillary & Norgay GPS device is a portable device that supports tracking nearest 
devices and provides functionality that alerts other devices in its range if it figures out that other deivces are too far or user presses panic button.
The project is inspired from the lack of cellphone signal dependency in smartphone in the wilderness & the high price of already existing GPS devices.

Current prototype uses ATMega328p uController, Software Serial GPS, I2C 4x20 LCD, I2C Compass, Serial XBee module, Photocell ambiance light sensor, Buttons, etc.

# Hardware
- ATMega328p
- Xbee with adapter
- I2C 4x20 LCD screen
- I2c Magnetometer GY-85
- Photocell ambient light sensor
- 4x Buttons
- 8x LEDs
- 3 to 8 shift register
- RS232 debugger

# Software
- ChibiOS as RTOS (Note: Provided a custom software serial implementaion that is good for B9600 full duplex and 4800 Rx/Tx only)
- UI thread
- Xbee Parser thread
- Intensive calulation thread
- AVR gcc

# Authors
- Dat Pham - datpham@usc.edu
- Kevin Bastoul - bastoul@usc.edu
- Rongcui Dong - rongcuid@outlook.com

# How to build
Use a Unix-like system, have gnumake, avr-gcc and avrdude installed. Windows might need some love,
but command line would probably work.

Depending on the board, modify `BOARD_CHOSEN` in `src/Makefile`.
    $ cd main/
    $ make
    $ make program # Flash the device

# Question?
Please email one of the authors for bug fixing & improvement request
