# HIS2000R TO-8 IR Emitter Control

## Project Overview

This Arduino project provides control for the **HIS2000R-A300-9** thermal infrared emitter, a high-performance IR source designed for gas detection and spectroscopy applications.

## Product Information

### HIS2000R-A300-9 Features
- **Type**: Thermal infrared emitter with sapphire window, hermetically sealed
- **Package**: Standard TO-8 package with soldered sapphire window
- **Technology**: NiCr filament-based thermal emitter
- **Temperature Range**: -25°C to +85°C
- **Operating Temperature**: 630°C (lower than conventional emitters for extended lifetime)
- **Wavelength Range**: Wide range for broad application support

### Key Advantages
- **High Radiant Power**: Up to 500% more detection signal compared to conventional emitters
- **High Efficiency**: Integrated gold-plated reflector directs radiation from filament back-side to front
- **Hermetic Housing**: SOLIDSEAL® packaging technology with soldered sapphire window
- **Long-term Stability**: Excellent stability of electrical and optical properties in harsh environments
- **Low Temperature Coefficient**: Very low temperature coefficient of electrical resistance for easy electrical control

## Hardware Requirements

- Arduino board (Uno, Nano, or compatible)
- HIS2000R-A300-9 IR emitter
- Power supply capable of driving the emitter
- Serial communication interface (USB or UART)

## Pin Configuration

| Arduino Pin | Function | Description |
|-------------|----------|-------------|
| Pin 9 | PWM Output | Controls IR emitter intensity (0-255) |
| GND | Ground | Common ground connection |
| VCC | Power | Supply voltage for Arduino |

## Software Features

### Serial Commands
The Arduino responds to the following serial commands:

- `ON` - Turn IR emitter to full power (255/255 PWM)
- `OFF` - Turn IR emitter off (0/255 PWM)
- `PWM_X` - Set PWM duty cycle where X is 0-100 (percentage)

### Example Usage
```
ON          // Full power
OFF         // Turn off
PWM_50      // 50% duty cycle
PWM_25      // 25% duty cycle
PWM_100     // Full power (same as ON)
```

## Installation

1. Connect the HIS2000R-A300-9 emitter to Arduino pin 9
2. Upload `IR_Lamp.ino` to your Arduino board
3. Open Serial Monitor at 9600 baud rate
4. Send commands to control the emitter

## Applications

This IR emitter is designed for:
- **Gas Detection**: High sensitivity for gas spectroscopy
- **Spectroscopy**: Wide wavelength range for various applications
- **Industrial Sensing**: Hermetic packaging for harsh environments
- **Research & Development**: Precise control for experimental setups

## Technical Specifications

### Emitter Specifications
- **Model**: HIS2000R-A300-9
- **Package**: TO-8 with sapphire window
- **Sealing**: Hermetically sealed with SOLIDSEAL® technology
- **Window Material**: Sapphire (CaF2, BaF2 also available)
- **Operating Temperature**: 630°C
- **Lifetime**: Extended due to lower operating temperature

### Arduino Interface
- **PWM Frequency**: ~490Hz (Arduino Uno default)
- **Resolution**: 8-bit (0-255 levels)
- **Serial Baud Rate**: 9600
- **Command Format**: Simple text commands

## Safety Considerations

- The IR emitter operates at high temperatures (630°C)
- Ensure proper heat dissipation and ventilation
- Do not touch the emitter during operation
- Use appropriate eye protection when working with IR sources
- Follow manufacturer's safety guidelines

## Author

**Apoorv Kulkarni**
- GitHub: [https://github.com/ak-apoorvkulkarni](https://github.com/ak-apoorvkulkarni)
- Website: [https://ak-apoorvkulkarni.github.io/](https://ak-apoorvkulkarni.github.io/)

## License

This project is provided as-is for educational and research purposes.

---

*This project utilizes the HIS2000R-A300-9 thermal infrared emitter from INFRASOLID, featuring innovative nanostructured radiating elements and advanced packaging technology for superior performance in gas detection and spectroscopy applications.* 