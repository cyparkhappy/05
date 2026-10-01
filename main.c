#include <stdio.h>

int main(void){
    int a;
    int answer=59;
    int count=0;

    do {
        printf("Guess a number : ");
        scanf("%d", &a);

        count++;

        if(a>answer)
            printf("high!\n");
        else if (a<answer)
            printf("low!\n");
        else
            printf("Congratulation! trials: %d", count);
    }
    while(a != answer);

    return 0;
}
