#include <stdio.h>
int main(void){
    int choice, number1=0, number2=0, number3=0, sum, min, max;
    int validate=0;
    float average;
    again:
    printf("MENU\n1. Nhap 3 so\n2. Tong 3 so\n3. Trung binh cong 3 so\n4. So nho nhat\n5. So lon nhat\n6. Thoat\n");
    next:
    printf("Nhap lua chon cua ban: ");
    scanf("%d", &choice);
    int i= choice;
   // do{
        while(i<7){
            switch(choice){
                case 1:
                    printf("moi ban nhap so thu nhat: ");
                    scanf("%d", &number1);
                    printf("moi ban nhap so thu hai: ");
                    scanf("%d", &number2);
                    printf("moi ban nhap so thu ba: ");
                    scanf("%d", &number3);
                    validate=1;
                    goto next;
                    break;
                case 2:
                    if(validate!=1){
                        printf("ban chua nhap so\n");
                        goto again;
                    }
                    sum= number1 + number2 + number3;
                    printf("tong 3 so la: %d\n", sum);
                    goto next;
                    break;
                case 3:
                    if(validate!=1){
                        printf("ban chua nhap so\n");
                        goto again;
                    }
                    average=( number1 + number2 + number3)/3;
                    printf("trung binh cong 3 so la: %.2f\n", average);
                    goto next;
                    break;
                case 4:
                    if(validate!=1){
                        printf("ban chua nhap so\n");
                        goto again;
                    }
                    min= number1;
                    if(min>number2){
                        min= number2;
                        if(min>number3){
                            min=number3;
                        }
                    }else if(min>number3){
                        min= number3;
                    }
                    printf("so nho nhat la: %d\n", min);
                    goto next;
                    break;
                case 5:
                    if(validate!=1){
                        printf("ban chua nhap so\n");
                        goto again;
                    }
                    max=number1;
                    if(max<number2){
                        max= number2;
                        if(max<number3){
                            max=number3;
                        }
                    }else if(max<number3){
                        max= number3;
                    }
                    printf("so lon nhat la: %d\n", max);
                    goto next;
                    break;
               default:
                    break;
            }
        }
  //  }while( choice!=6);
    
    return 0;
}
