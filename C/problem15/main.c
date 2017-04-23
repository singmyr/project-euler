/*
    Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.
	How many such routes are there through a 20×20 grid?
*/

#include <stdio.h>
#include <stdint.h>

int64_t dive(int x, int y, int m) {
	int64_t sum = 0x0LL;
	
	sum += x < m - 1 ? dive(x + 1, y, m) : 0x1LL;
	sum += y < m - 1 ? dive(x, y + 1, m) : 0x1LL;

	return sum;
}

int main(int argc, char* argv[]) {
    printf("Result: %llu\n", dive(0, 0, 17));

    return 0;
}
