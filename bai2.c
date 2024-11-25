#include <stdio.h>
int main(void){
    int number;
    printf("Nhap vao 1 so nguyen ");
    scanf("%d", &number);
    if (number%2==0){
        printf("la so chan\n");
    }else{
        printf("la so le\n");
    }
    return 0;
}
