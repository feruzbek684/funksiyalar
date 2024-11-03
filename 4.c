#include <stdio.h>

void ikki_son(int son, int son1, int son2 ) {
    if (son >= son1 && son >= son2)
    {
        printf("katta son %d", son);
    }else if (son1 >= son && son1 >= son2){
        printf("katta son %d", son1);
    }else if (son2 >= son && son2 >= son1){
        printf("katta son %d", son2);
    }
    
}
int main () {
    int a, b, c;
    printf("3 ta son : ");
    scanf("%d%d%d", &a, &b, &c);
    ikki_son(a, b, c);

    return 0;

}