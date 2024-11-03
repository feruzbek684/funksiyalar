#include <stdio.h>
void faktorial(int a) {
    int k = 1;
    while (a >= 2)
    {
        k = k * a * (a - 1);
        a = a - 2;
    }
    printf("%d", k);
}
int main () {
    int son;
    printf("sonni kiritng: ");
    scanf("%d", &son);
    faktorial(son);

    return 0;
    

}