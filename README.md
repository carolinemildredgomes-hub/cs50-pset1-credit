# CS50 Credit

![C](https://img.shields.io/badge/language-C-blue)
![CS50](https://img.shields.io/badge/CS50-Harvard-red)

## Description

A C program that validates credit card numbers using Luhn’s algorithm. It also identifies the type of card (AMEX, MasterCard, or Visa) based on number patterns. Users enter a credit card number, and the program outputs the card type or indicates invalid numbers.

---

## How to Compile and Run

1. Download `credit.c` from this repository.  
2. Open a terminal and navigate to the folder containing `credit.c`.  
3. Compile the program:

```bash
gcc -o credit credit.c cs50.c


Run the program:

./credit

Enter a credit card number when prompted:
Number: 4003600000000014
The program outputs:

VISA


Example


Input: 378282246310005
Output: AMEX

Input: 5105105105105100
Output: MASTERCARD

Input: 1234567890123456
Output: INVALID










Key Notes / Learning Outcomes

Validates credit card numbers using Luhn’s algorithm.

Determines card type: AMEX, MasterCard, or Visa.

Handles numeric input as strings for flexibility.

Demonstrates loops, conditionals, modular arithmetic, and string handling.

Teaches pattern recognition, data validation, and algorithmic thinking in C.


