#include <stdio.h>

int main(void){
    int a;
    int b;
    char operator;

    printf("enter the calculation : ");
    scanf("%d %c %d", &a, &operator, &b);

    switch(operator)
    {
        case '+':
            printf("%d %c %d = %d\n", a, operator, b, a+b);
            break;

        case '-':
            printf("%d %c %d = %d\n", a, operator, b, a-b);
            break;

        case '*':
            printf("%d %c %d = %d\n", a, operator, b, a*b);
            break;

        case '/':
            printf("%d %c %d = %f\n", a, operator, b, (float)a/b);
            break;
    }

    return 0;
}
