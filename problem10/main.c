/*
    The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
    Find the sum of all the primes below two million.
*/

#include <stdio.h>

int main(int argc, char* argv[]) {
    int target = 2000000;
    unsigned long sum = 0;
    int prime = 0;
    int max = 0;

    for(int i = 2; i < target; ++i) {
        // Check if i is a prime number.
        if(i > 2 && !(i & 1)) {
            continue;
        }

        prime = 1;
        max = i * .5;
        for(int j = 2; j < max; ++j) {
            if(i % j == 0) {
                prime = 0;
                break;
            }
        }

        if(prime) {
            sum += i;
        }
    }

    printf("Sum of all primes below %d is: %lu\n", target, sum);

    return 0;
}
