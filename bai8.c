#include <stdio.h>
int main(void){
    int number1, number2, bcnn, numberA, numberB;
    printf("moi ban nhap vao so nguyen duong thu nhat: ");
    scanf("%d", &number1);
    printf("moi ban nhap vao so nguyen duong thu hai: ");
    scanf("%d", &number2);
    numberA=number1;
    numberB=number2;
    do{
        if(number1>number2){
            number1=number1-number2;
        }
        if(number2>number1){
            number2=number2-number1;
        }
    }while(number1!=number2);
    bcnn= (numberA * numberB) / number1;
    printf("boi chung nho nhat cua 2 so la: %d\n", bcnn);
    return 0;
}

