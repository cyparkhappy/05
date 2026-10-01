#include <stdio.h>

int main(void){
    int a;
    printf("input a number : ");
    scanf("%d", &a);

    int i;
    int sum=0;
    for(i=1 ; i<=a ; i++)
    sum+=i;
    printf("The result is %d", sum);

    return 0;
}

