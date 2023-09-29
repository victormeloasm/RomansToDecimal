# Roman Numeral Converter

The Roman Numeral Converter is a command-line program written in C that allows you to convert between Roman numerals and decimal numbers. It supports conversion for numbers within the range of 1 to 1,000,000.

## Table of Contents

- [Features](#features)
- [Requirements](#requirements)
- [Usage](#usage)
- [How It Works](#how-it-works)
- [Contributing](#contributing)
- [License](#license)

## Features

- Converts Roman numerals to decimal numbers.
- Converts decimal numbers to Roman numerals.
- Supports a wide range of Roman numerals and decimals.
- Handles invalid inputs and provides appropriate error messages.

## Requirements

To run the Roman Numeral Converter, you'll need:

- A C compiler (e.g., GCC)
- Standard C libraries

## Usage

1. Clone the repository to your local machine:

   ```bash
   git clone https://github.com/your-username/roman-numeral-converter.git
   ```

2. Navigate to the project directory:

   ```bash
   cd roman-numeral-converter
   ```

3. Compile the C program:

   ```bash
   gcc roman_converter.c -o roman_converter
   ```

4. Run the program:

   ```bash
   ./roman_converter
   ```

   This will start the Roman Numeral Converter.

5. Choose an option from the menu:
   - `1` for converting Roman numerals to decimals.
   - `2` for converting decimal numbers to Roman numerals.
   - `0` to exit the program.

6. Follow the on-screen prompts to input Roman numerals or decimal numbers for conversion.

## How It Works

The Roman Numeral Converter uses two main functions:

- `romanToDecimal`: Converts Roman numerals to decimal numbers using a loop that iterates through the Roman numeral string in reverse. It calculates the decimal value while considering subtractive notation (e.g., IV for 4) and handles invalid inputs.

- `decimalToRoman`: Converts decimal numbers to Roman numerals using a loop that iterates through predefined values and numerals. It repeatedly subtracts the largest possible Roman numeral value from the input decimal until it reaches zero, appending the corresponding numeral to the result string.

The program provides user-friendly menu options and error handling for invalid inputs.

## Contributing

Contributions to the Roman Numeral Converter project are welcome! If you'd like to contribute:

1. Fork the repository.
2. Create a new branch for your feature or bug fix.
3. Make your changes and commit them with descriptive messages.
4. Push your branch to your fork.
5. Submit a pull request to the main repository.

Please follow the [code of conduct](CODE_OF_CONDUCT.md) and ensure your code adheres to the project's coding style.

## License

This Roman Numeral Converter is open-source and available under the [MIT License](LICENSE.md).

---

Feel free to customize this `README.md` to suit your project's needs. You can add more sections, screenshots, or additional details as required.
