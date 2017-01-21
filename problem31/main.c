/*
    In England the currency is made up of pound, £, and pence, p, and there are eight coins in general circulation:
    1p, 2p, 5p, 10p, 20p, 50p, £1 (100p) and £2 (200p).
    It is possible to make £2 in the following way:
    1×£1 + 1×50p + 2×20p + 1×5p + 1×2p + 3×1p
    How many different ways can £2 be made using any number of coins?
*/

#include <stdio.h>

const int coins[] = {200, 100, 50, 20, 10, 5, 2, 1};

int getCombinations(int index, int sum);

int main(int argc, char* argv[]) {
    int target = 200;

    printf("Result: %d\n", getCombinations(0, target));

    return 0;
}

int getCombinations(int index, int sum) {
    if(sum <= 0) {
        return 0;
    }

    // Check if it's the last index.
    if(index == sizeof(coins)/sizeof(const int) - 1) {
        return 1;
    }

    int combinations = 0;

    int i = 0;
    int rest = 0;
    do {
        rest = sum - (i++ * coins[index]);
        combinations += getCombinations(index + 1, rest);
    } while(rest > 0);

    return rest == 0 ? combinations + 1 : combinations;
}
