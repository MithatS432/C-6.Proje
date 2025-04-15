#include <stdio.h>

int main() {
    unsigned int x = 6;
    unsigned int y = 3;

    printf("x & y = %u\n", x & y);
    printf("x | y = %u\n", x | y);
    printf("x ^ y = %u\n", x ^ y);
    printf("~x = %u\n", ~x);
    printf("x << 1 = %u\n", x << 1);
    printf("x >> 1 = %u\n\n", x >> 1);

    int z = 10;
    z += 5; // z = z + 5
    printf("z += 5 --> %d\n", z);

    z *= 2; // z = z * 2
    printf("z *= 2 --> %d\n", z);

    z -= 4; // z = z - 4
    printf("z -= 4 --> %d\n", z);

    z /= 2; // z = z / 2
    printf("z /= 2 --> %d\n\n", z);

    const char* durum = (z > 0) ? "Pozitif" : "Negatif";
    printf("Sonuç: %s\n", durum);

    return 0;
}
