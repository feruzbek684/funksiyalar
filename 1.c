#include <stdio.h>

void funksiya(int x){
    for (int i = 1; i <= x; i++)
    {
        printf("%d ", i);
    }
}
int main () {
    int a;
    printf("sonni kirting: ");
    scanf("%d", &a);
    funksiya(a);

    return 0;

}