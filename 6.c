#include <stdio.h>
void tubson(int a) {
    int son = 1; 
    if (a <= 1) {
        printf("Tub son emas\n");
        return;
    }
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            son = 0; break;
        }
    }
    if (son) {
        printf("Tub son");
    } else {
        printf("Tub son emas");
    }
}
int main() {
    int a;
    printf("Sonni kiriting: ");
    scanf("%d", &a);
    tubson(a);
    return 0;
}