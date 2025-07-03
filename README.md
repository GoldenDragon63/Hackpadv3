
![2](https://github.com/user-attachments/assets/397f4123-312a-4918-86d8-e15f2e2eb0df)
![1](https://github.com/user-attachments/assets/3d9dc2cc-cb3d-4ef2-84cd-3cb094d7831a)
![4](https://github.com/user-attachments/assets/a20e0f4f-0ed4-47de-a128-0b52b09b0e4d)
![3](https://github.com/user-attachments/assets/43a69946-521b-4e07-a848-7c58de4a4520)
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
