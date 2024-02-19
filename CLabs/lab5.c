//Написати функцію, яка обчислює вартість телефонної розмови з 
//урахуванням знижки: якщо тривалість розмови не перевищує 
//10 хвилин, то тариф – 1,2 грн., якщо тривалість розмови 
//перевищує 10 хвилин, то то тариф – 1,0 грн. 
//Аргументом функції є тривалість розмови.

#include <stdio.h>
#include <stdlib.h>

void Call(int durationOfCall){
    if (durationOfCall <=10){
        float price = durationOfCall*1.2;
        printf("Ur price of call: %f\n uah", price);
    }else {
       float price = durationOfCall*1;
        printf("Ur price of call: %f\n uah", price);
        
    }
    
}
int main(){
    int min;
    printf("How many minutes will u talk on ur phone?  ");
    scanf("%d", &min);
    Call(min);
}
