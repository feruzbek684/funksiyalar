#include <stdio.h>

void funksiya(float x, float c) {
    float orta;
    orta = (x + c) / 2;
    printf("orta arifmetigi ==> %.2f", orta);
}

int main () {
    float a, b;
    printf("sonni kirting: ");
    scanf("%f", &a);
    printf("sonni kirting: ");
    scanf("%f", &b);
    funksiya(a, b);

    return 0;

}