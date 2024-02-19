//Вивести ім’я у зворотньому порядку і всі малі букви замінити на великі.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int i;
    char name[]="Atlas";
    printf("%s\n",name);
    int len = strlen(name);
    for (i = 0; i<len;i++){
        if (name[i] >= 'a' && name[i] <= 'z') {
            name[i] = name[i] - 'a' + 'A';
    }
    }
   
    for(i = len-1;i>=0;i--){
        printf("%c",name[i]);
   
    }
    }
    
  

