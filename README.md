
![3](https://github.com/user-attachments/assets/8b86f070-cc09-4ef9-a341-5becaa188583)
![2](https://github.com/user-attachments/assets/467d0fd1-9f59-4034-ba0b-5aef7060a005)
![9](https://github.com/user-attachments/assets/7e497519-8801-4bd9-9e84-14bde8dbe9d2)
![8](https://github.com/user-attachments/assets/041c6492-a754-46d0-9731-84d009371b7c)
![5](https://github.com/user-attachments/assets/3e0ed71f-93a7-4dfb-b15c-d35a9a771fed)
![4](https://github.com/user-attachments/assets/b970d11c-ec3f-4d33-a1da-7ea453337ac2)

* Keyboard Maintainer: [Goldendragon63]
* Hardware Supported: The PCBs, controllers supported
* Hardware Availability:Links to where you can find this hardware

Make example for this keyboard (after setting up your build environment):

    make planck/rev4:default

Flashing example for this keyboard:

    make planck/rev4:default:flash

See the [build environment setup](getting_started_build_tools) and the [make instructions](getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available

## BOM
* Seeed XIAO RP2040
* 10 MX-Style switches
* 10 Blank DSA Keycaps
* 10 Diode_THT:D_DO-35_SOD27_P7.62mm_Horizontal
* 5 LED_SMD:LED_WS2812B_PLCC4_5.0x5.0mm_P3.2mm
* 1 0.91 inch OLED display with pin order GND-VCC-SCL-SDA
* 1 3D-printed case (two seperate parts)
* 4 Screws M3
