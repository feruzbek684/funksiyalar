#include <stdio.h>
void orta_arif(float q, float w) {
    float orta = 0;
    for (int i = q; i <= w; i++)
    {
        orta = orta + i;
    }
    orta = orta / (w - q);
    printf("sum ==> %.2f", orta);
}
int main () {
    float a = 4, b = 13;
    orta_arif(a, b);

    return 0;
}
