#include "palindrome.h"

/**
 * is_palindrome - checks to see if unsigned int is a palindrome
 * @n: interger to be checked
 * Return: 1 if true, 0 if false
 */

int is_palindrome(unsigned long n) {
    unsigned long copy = n;
    unsigned long rev = 0;

/* use copy to grab each digit one at a time*/
    while (copy != 0) {
        /* last digit of copy become next digit of rev*/
        rev = rev * 10 + (copy % 10);
        /* remove last digit of copy*/
        copy = copy / 10;
    };

    if (rev == n) {
        return 1;
    }
    return 0;
}
