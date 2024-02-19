//Написати програму, яка запитує в користувача величини сторін прямокутника і обчислює його площу та довжину діагоналі.

#include <stdio.h>
#include <stdlib.h>
#include <math.h> //for sqrt

int main() {
    int number1; int number2;
    printf("Enter side a ");
    scanf ("%d", &number1);
    printf("Enter side b ");
    scanf ("%d", &number2);
    printf( "Area of rectangle %d\n", number1*number2);
    printf("Diagonal of rectangle: %lf\n", sqrt (number1*number1 + number2*number2));
}