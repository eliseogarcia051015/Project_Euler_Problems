/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two
2-digit numbers is 9009 =  91 x 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int n) {
    int original = n;
    int reversed = 0;

    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }

    return original == reversed;
}

int main() {
    int maxPalindrome = 0;

    for (int i = 10; i <= 99; i++) {
        for (int j = i; j <= 99; j++) {  // avoid duplicate pairs
            int product = i * j;

            if (product > maxPalindrome && isPalindrome(product)) {
                maxPalindrome = product;
            }
        }
    }

    printf("Largest palindrome: %d\n", maxPalindrome);
    return 0;
}