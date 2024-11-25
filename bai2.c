#include <stdio.h>
int main(void){
    int i;
    printf("moi ban nhap vao 1 so nguyen ");
    scanf("%d", &i);
    while( i!= 3){
        printf("moi ban nhap vao 1 so nguyen ");
        scanf("%d", &i);
    }
    return 0;
}
