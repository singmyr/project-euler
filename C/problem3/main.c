/*
    The prime factors of 13195 are 5, 7, 13 and 29.
    What is the largest prime factor of the number 600851475143?
*/

#include <stdio.h>

int main(int argc, char* argv[]) {
    unsigned long target = 600851475143;
    int prime = 0;

	unsigned long product = 1;
    for(int i = 2; i < (target * .5); ++i) {
        // Check if i is a prime number.
        if(!(i & 1)) {
            continue;
        }

        prime = 1;
        for(int j = 2; j < (i * .5); ++j) {
            if(i % j == 0) {
                prime = 0;
                break;
            }
        }

        if(prime && target % i == 0) {
			printf("Prime factor: %d\n", i);
			
			product *= i;
			if(product == target) {
				break;
			}
        }
    }

    return 0;
}
