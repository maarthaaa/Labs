//Написати програму, яка перевіряє чи ділиться на три, введене з кдавіатури ціле число.

#include <stdio.h>
#include <stdlib.h>
int main(){
     int num;
     printf("Enter a num: ");
     scanf("%d", &num);

     if (num%3 ==0){
        printf("This num can be divided by 3\n");
     }
     else{
        printf("This num can't be divided by 3\n");
     }
}