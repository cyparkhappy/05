#include <stdio.h>

int main(void){
    int num;
    printf("정수 하나를 입력하시오 : ");
    scanf("%d", &num);

    if(num>0)
        printf("양수입니다.");
    else if (num<0)
        printf("음수입니다.");
    else 
        printf("0입니다.");

    return 0;
}