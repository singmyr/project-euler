/*
    A palindromic number reads the same both ways.
    The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
    Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
    int tar = 0;
    char buf[7];
    int len = 0;
    int palindrome = 1;
    int highest = 0;

    for(int i = 100; i <= 999; ++i) {
        for(int j = 100; j <= 999; ++j) {
            tar = i * j;

            // Check if the next target is lower than the highest palindrome found.
            // If so, skip it, it won't matter if it's a palindrome or not.
            if(tar < highest) {
                continue;
            }

            snprintf(buf, 7, "%d", tar);

            len = 0;
            len = strlen(buf);
            palindrome = 1;
            for(int k = 0; k < len * .5; ++k) {
                if(buf[k] != buf[len - k - 1]) {
                    palindrome = 0;
                    break;
                }
            }

            if(palindrome && tar > highest) {
                highest = tar;
            }
        }
    }

    printf("Highest palindrome: %d\n", highest);

    return 0;
}
