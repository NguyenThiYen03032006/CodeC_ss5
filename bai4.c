#include <stdio.h>
int main(void){
    int number, answer;
    printf("moi ban nhap vao so nguyen duong tu 1 den 10: ");
    scanf("%d", &number);
    while(1>number || number>10){
        printf("moi ban nhap vao so nguyen duong tu 1 den 10 ");
        scanf("%d", &number);
    }
    for(int i=1; i<=10; i++){
        answer= number*i;
        printf(" %d * %d = %d \n", number, i, answer);
    }
    return 0;
}
