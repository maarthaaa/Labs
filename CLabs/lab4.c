//Написати програму, яка виводить таблицю значень функції y=x. 
//Діапазон зміни аргумента від -2 до 2 з кроком 0,2.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int startX = -2;
    int endX = 2;
    printf("  x    |    y\n");
    for (int x = startX; x <= endX; x++) {
        double y = x + 0.2;
        printf("%4d     %4.1f\n", x, y);
    }
    
}