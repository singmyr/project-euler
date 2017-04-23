/*
    A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
    a^2 + b^2 = c^2
    For example, 3^2 + 4^2 = 9 + 16 = 2^5 = 5^2.
    There exists exactly one Pythagorean triplet for which a + b + c = 1000.
    Find the product abc.
*/

#include <stdio.h>
#include <math.h>

int find_triplet_product(int sum);

int main(int argc, char* argv[]) {
    int product = find_triplet_product(1000);

    printf("Product: %d\n", product);

    return 0;
}

int find_triplet_product(int sum) {
    float x, y, z;

    for(int a = 1; a < sum; ++a) {
        x = pow(a, 2);
        for(int b = a + 1; b < sum; ++b) {
            y = pow(b, 2);
            for(int c = b + 1; c < sum; ++c) {
                z = pow(c, 2);
                if(x + y == z) {
                    if(a + b + c == sum) {
                        return a * b * c;
                    }
                }
            }
        }
    }

    return -1;
}
