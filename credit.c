# CS50 Problem Set 1 — Credit

This is my solution for **CS50’s Credit problem** (Pset1).  
It implements **Luhn’s Algorithm** to validate credit card numbers and determine their brand.

---

## 💻 Problem Description
Prompt the user for a credit card number and use **Luhn’s Algorithm** to check validity.  
If valid, print the card type (AMEX, MASTERCARD, VISA). Otherwise, print `INVALID`.

---

## 📝 Code
```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long number;
    do
    {
        number = get_long("Number: ");
    }
    while (number <= 0);

    int sum = 0;
    long temp = number;
    int pos = 0;

    while (temp > 0)
    {
        int digit = temp % 10;

        if (pos % 2 == 1)
        {
            int dbl = digit * 2;
            sum += (dbl / 10) + (dbl % 10);
        }
        else
        {
            sum += digit;
        }

        temp /= 10;
        pos++;
    }

    bool valid = (sum % 10 == 0);

    int len = 0;
    temp = number;
    while (temp > 0)
    {
        temp /= 10;
        len++;
    }

    long start = number;
    while (start >= 100)
    {
        start /= 10;
    }
    int first_two = (int) start;
    int first = first_two / 10;

    if (valid && len == 15 && (first_two == 34 || first_two == 37))
    {
        printf("AMEX\n");
    }
    else if (valid && len == 16 && (first_two >= 51 && first_two <= 55))
    {
        printf("MASTERCARD\n");
    }
    else if (valid && (len == 13 || len == 16) && first == 4)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}





Sample Terminal Results



$ ./credit
Number: 378282246310005
AMEX

$ ./credit
Number: 5105105105105100
MASTERCARD

$ ./credit
Number: 4111111111111111
VISA

$ ./credit
Number: 1234567890
INVALID
