Arduino Uno Skeleton Project
============================

Skeleton for an Arduino Uno project

Overview
========

This has been tested on Ubuntu 12.04, the Arduino Uno R3 board, and the
version 1.0.3 of the Arduino IDE.

How to
======

1. Fetch the official Arduino IDE from arduino.cc:
	<http://arduino.cc/en/main/software>
	Untar the file to somewhere suitable (e.g. /home/user/arduino_ide)
2. Install the following packages

	`avr-libc avrdude binutils-avr gcc-avr`

	This won't be needed if you want to re-use the binaries shipped
	with the IDE, in that case you may have to set your PATH
	environment variable accordingly.
3. Checkout this repository:
	git clone git://github.com/deweerdt/arduino-uno-project.git
4. Edit the `Makefile` file to suit your environment
	There are two variables that you will need to edit:
	* `ARDUINO_HOME`: the path where you untarred the IDE in step
	1. (e.g. /home/user/arduino_ide)
	* `SERIAL`: the path where your arduino listens on. If you
	don't know which one, try plugging and unplugging the board,
	and check how the files in `/dev/` differ
5. Edit the main.c file to suit your needs
6. `make` and then `make push`

Notes
=====

* This has only been tested with the Arduino Uno board, and won't probably
work as-is with other boards.
* The Makefile supports three commands:
	* `all`: build and link the main binary
	* `push`: push the binary to the board
	* `clean`: remove the intermediary files
