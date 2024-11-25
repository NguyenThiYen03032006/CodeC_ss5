#include <stdio.h>
int main(void){
    for(int i=1; i<=10; i++){
        for(int number=1; number<=10; number++){
            int answer= i*number;
            printf(" %d * %d = %d \n", i, number, answer);
        }
        printf("\n");
    }
    return 0;
}

