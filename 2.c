#include <stdio.h>

void funksiya(int x, int q){
    for (int i = q; i <= x; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
        
    }
}
int main () {
    int a, b;
    printf("sonni kirting: ");
    scanf("%d", &b);
    printf("sonni kirting: ");
    scanf("%d", &a);
    funksiya(a, b);

    return 0;


}