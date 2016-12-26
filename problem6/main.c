/*
    The sum of the squares of the first ten natural numbers is,
    1^2 + 2^2 + ... + 10^2 = 385
    The square of the sum of the first ten natural numbers is,
    (1 + 2 + ... + 10)^2 = 55^2 = 3025
    Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.
    Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]) {
    double sum_of_the_squres = 0;
    for(int i = 1; i <= 100; ++i) {
        sum_of_the_squres += pow(i, 2);
    }

    int sum = 0;
    double square_of_the_sum = 0;
    for(int i = 1; i <= 100; ++i) {
        sum += i;
    }

    square_of_the_sum = pow(sum, 2);
    
    printf("%f", square_of_the_sum - sum_of_the_squres);

    return 0;
}
