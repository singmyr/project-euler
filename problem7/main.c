/*
    By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
    What is the 10 001st prime number?
*/

#include <stdio.h>

int main(int argc, char* argv[]) {
    int target = 10001;
    int prime = 0;
    int found = 0;
    int i = 2;

    do {
        // Check if i is a prime number.
        if(i > 2 && !(i & 1)) {
            continue;
        }

        prime = 1;
        for(int j = 2; j < (i * .5); ++j) {
            if(i % j == 0) {
                prime = 0;
                break;
            }
        }

        if(prime) {
            ++found;
        }
    } while(found < target && ++i);

    printf("Prime number %d is: %d\n", target, i);

    return 0;
}
