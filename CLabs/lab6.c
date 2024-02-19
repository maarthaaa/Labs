//Обчислити добуток від'ємних елементів двовимірного масиву і 
//визначити індекс мінімального елементу.

#include <stdio.h>
#include <stdlib.h>
#define maxSize 20
int main(){

  int arr[maxSize]; 
    int i, num;

    printf("Enter size of the array : ");
    scanf("%d", &num);
    printf("Enter elements in array : ");

    for(i=0; i<num; i++)
    {
        scanf("%d", &arr[i]);
    }
    int product =1;
    int smallest = arr[0];
    int index=0;
    for(i=0;i<num;i++){
        if(arr[i]<0){
         product *= arr[i];
        if (arr[i]<smallest){
            smallest = arr[i];
            index = i;
        }
        }
         
    }
    
    printf("The product of negative values: %d\n",product);
    printf("An index of the smallest value in th array %d\n",index);
}