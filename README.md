# Credit Card Validator

This repository contains a C++ program that validates credit card numbers using the **Luhn Algorithm**. The program verifies if the given credit card number is valid by checking its checksum.

```

## How It Works

The program follows these steps to validate a credit card number:

1. **User Input**:
   - Prompts the user to enter a credit card number.
   - Accepts only numeric input. The user can type `exit` at any time to quit the program.

2. **Input Validation**:
   - Ensures that the input contains only numeric digits.
   - Validates the length of the input (credit card numbers must have between 12 and 19 digits).

3. **Luhn Algorithm**:
   - Starting from the rightmost digit:
     - Double every second digit.
     - If the doubled value results in two digits (e.g., `12`), add those digits together to form a single-digit value (e.g., `1 + 2 = 3`).
   - Add all the resulting digits, including the undoubled ones, to compute the **checksum**.
   - If the total checksum is a multiple of 10, the credit card number is valid.

4. **Output**:
   - Prints whether the entered credit card number is **Valid** or **Invalid**.

```

## Example Usage

When you run the program, the interaction might look like this:

This program uses the Luhn Algorithm to validate a credit card number. You can enter 'exit' anytime to quit.

Please enter a credit card number to validate: 4532015112830366 Credit Card Number: 4532015112830366 is Valid!

Please enter a credit card number to validate: 1234567812345670 Credit Card Number: 1234567812345670 is Invalid!

Please enter a credit card number to validate: exit

```

## How to Compile and Run

1. Make sure you have a C++ compiler installed (e.g., GCC, Clang, or MSVC).
2. Clone this repository:
   ```bash
   git clone https://github.com/yourusername/credit-card-validator.git
   cd credit-card-validator
3. Compile the program:
   g++ -o validator credit_card_validator.cpp
4. Run the program:
   ./validator

```

## File Structure

.
├── CreditCardValidator.cpp   # Source folder for the repository
├── README.md                   # Documentation for the project

```

## License
This repository is licensed under the [MIT License](LICENSE). Feel free to use and modify the code as needed for your projects.

## Author
Benjamin Caron - https://github.com/bcaron518

## Contributing
If you'd like to contribute to this repository or improve the code example, please feel free to open an issue or submit a pull request. Your contributions are welcome.
