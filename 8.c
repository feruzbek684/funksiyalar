#include <stdio.h>
void juft_sonlar(int b) {
    int yigindi = 0;
    for (int i = 1; i <= b; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
        yigindi = yigindi + i;
        
    }
    printf("%d ", yigindi);
}

int main () {
    int a = 235;

    juft_sonlar(a);
}