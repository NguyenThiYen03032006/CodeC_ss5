#include <stdio.h>
int main(void){
    int number1, number2, calculator, sum, difference, product;
    float quotient;
    do{
        printf("moi ban nhap vao so thu nhat: ");
        scanf("%d", &number1);
        printf("moi ban nhap vao so thu hai: ");
        scanf("%d", &number2);
        printf("CALCULATOR\n 1. Tong 2 so\n 2. Hieu 2 so\n 3. Tich 2 so\n 4. Thuong 2 so\n 5. Thoat\n");
        printf("lua chon cua ban: ");
        scanf("%d", &calculator);
        sum= number1 + number2;
        difference= number1 - number2;
        product= number1 * number2;
        quotient= (float)number1 / number2;
        if(calculator==1){
            printf("%d + %d = %d\n", number1, number2, sum);
        }
        if(calculator==2){
            printf("%d - %d = %d\n", number1, number2, difference);
        }
        if(calculator==3){
            printf("%d * %d = %d\n", number1, number2, product);
        }
        if(calculator==4){
            printf("%d / %d = %.2f\n", number1, number2, quotient);
        }
        printf("\n");
    }while(calculator!=5);
    
    
    return 0;
}
