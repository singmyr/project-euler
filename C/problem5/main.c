/*
    2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
    What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <stdio.h>

int main(int argc, char* argv[]) {
    int found = 0;
    int target = 20;
    int i = 0;
    
    while(!found) {
        found = 1;
        for(i = 1; i <= 20; ++i) {
            if(target % i > 0) {
                found = 0;
                break;
            }
        }

        if(!found) {
            // Increment target.
            ++target;
        }
    }

    printf("Solution: %d\n", target);

    return 0;
}
