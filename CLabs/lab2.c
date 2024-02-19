//Знайти середнє арифметичне п’яти цілих чисел.
#include <stdio.h>
#include <stdlib.h>


int main() {
    int number1 = 3;
    int number2=4; 
    int number3=6; 
    int number4=8; 
    int number5=10;
    int sumOfNums = number1+number2+number3+number4+number5;
    float average = sumOfNums/5;
    printf("The average of nums:%d,%d,%d,%d,%d is %fl\n", number1, number2,  number3, number4, number5, average);
}