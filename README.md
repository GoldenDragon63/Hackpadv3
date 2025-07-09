
![3](https://github.com/user-attachments/assets/cd9d58b9-b64c-4588-95bc-42f56d2f17e6)
![2](https://github.com/user-attachments/assets/d9297690-e7db-4bcc-ab02-a3161082888f)
![Fixed Case](https://github.com/user-attachments/assets/80999da5-53d2-4566-b234-c843d463150e)
![9](https://github.com/user-attachments/assets/7f830ef5-5e1b-4abc-9117-3f34554a25e6)
![8](https://github.com/user-attachments/assets/815c5b06-7189-4572-b442-7cff7cf85839)
![6](https://github.com/user-attachments/assets/1ed37a33-99e2-458a-bef4-aeb2625f9e9c)
![4](https://github.com/user-attachments/assets/d53b4727-e0bb-4078-9ed9-28c2337298ba)


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
