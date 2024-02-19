//Написати програму, яка методом обміну («бульбашки») впорядковує по спаданню одновимірний масив


#include <stdio.h>

void bubbleSort(int array[], int size) {

  for (int j = 0; j < size - 1; j++) {
    for (int i = 0; i < size - j - 1; i++) {
      if (array[i] < array[i + 1]) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
  int data[] = {-3, 5, 7, 10,-100};
  int size = sizeof(data) / sizeof(data[0]);

  bubbleSort(data, size);
  
  printf("Sorted Array:\n");
  printArray(data, size);
}

