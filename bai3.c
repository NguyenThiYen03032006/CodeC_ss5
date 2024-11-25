#include <stdio.h>
int main(void){
    int number;
    int sum=0;
    printf("moi ban nhap vao so nguyen duong ");
    scanf("%d", &number);
    while(number<1){
        printf("moi ban nhap vao so nguyen duong ");
        scanf("%d", &number);
    }
    for(int i=1; i<= number;i++){
        sum+=i;
    }
    printf("%d\n", sum);
    return 0;
}
