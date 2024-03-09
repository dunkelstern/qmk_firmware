# ducky_one_3_rp2040

Because of bad firmware from the vendor (missclicks, bouncing, etc.) I decided to throw out the original
chipset (a Nuvoton) and replace it with a RP2040 aka Raspberry Pi Pico.

* Keyboard Maintainer: [Johannes Schriewer](https://github.com/dunkelstern)
* Hardware Supported: RP2040
* Hardware Availability: just get a Raspberry Pi Pico

Make example for this keyboard (after setting up your build environment):

    make dunkelstern/ducky_one_3_rp2040:default

Or use the QMK CLI-tool:

    qmk compile --keyboard dunkelstern/ducky_one_3_rp2040 --keymap default
    qmk flash

The flash command will wait for a RP2040 drive to appear, to make that happen, flick the DIP Switch
position 4 to on and connect the Keyboard.

After flashing turn off the DIP switch again to boot in Keyboard mode. In the future you can enter
Firmware update mode by pressing FN+ESC.

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

Modifications to the ducky board:

1. Completely remove the Nuvoton chip
2. Remove R64 and R65 which connected the chip to USB
3. Remove D119 (DIP Switch Position 4), we're using this one for BOOTSEL
4. Remove USB port and LED from the Raspberry Pi Pico board
5. Connect Raspi Pico to USB:
   - TP2 goes to top pad of R65
   - TP3 goes to top pad of R64 (make sure wires at TP2 and TP3 are of the same length)
   - TP1 goes to the programming header J3 pin 1 (GND)
   - VBUS goes to the left pad of the big fuse/resistor R135 (left pad, this is +5V)
   - TP6 goes to D119 top pad (BOOTSEL)
   - TP5 goes to LED1 + (Num Lock)
6. Connect the top row of the DIP switch (they are all connected together) to GND (eg. U8 pin 4)
7. Check if you can connect to the RP Pico via USB now
8. Replace R128 to R131 with 1.5 kOhm 0805 resistors, the ones on the board are around 20 Ohms,
   we use them as current limiting resistors for the LEDs here
9. Shorten out Pins 13-16 of U7 and connect them to GND (Pin 1)
10. Stick the Raspberry Pi Pico board with foam tape to the PCB, select a spot left of the Nuvoton chip
    at the same height to fit it into the keyboard housing afterwards.
11. Connect LEDs:
    - TP5 to LED1 + (Num Lock)
    - GPIO0 to LED2 + (CAPS Lock)
    - GPIO1 to LED3 + (Scroll Lock)

12. Hand-wire to connect the keyboard matrix:

For the rows you have to use the right terminal of any of the listed key switches.

Row, GPIO, Switch on board
0    2     SCROLL Lock
1    3     Insert
2    4     Delete
3    5     Enter
4    6     Up
5    7     Left
6    8     NUM Lock
7    9     Calculator

For the columns always go with the top pad of the diode (the one without the line)
for the switch in the list.

Column, GPIO, Switch on board
0       10    SCROLL Lock
1       11	  Insert
2       12	  Numpad 3
3       13	  Numpad 2
4       14	  Numpad 1
5       15	  Numpad +
6       16	  Numpad 6
7       17	  Numpad 5
8       18	  Numpad 4
9       19	  Numpad 9
10      20	  Numpad 8
11      21	  Numpad 7
12      22	  Volume +
13      26	  Volume -
14      27	  Mute
15      28	  Calculator
