// Написати програму, яка вводить масив записів про відеокамери
//  (модель, тип: цифрова/аналогова, ціна, наявність
// цифрового збільшення, кратність цифрового збільшення,
// кратність оптичного збільшення).
// Програма повинна знайти і вивести на екран дані про
// відеокамери, які не мають цифрового збільшення впорядковані
// по зростанню за ціною.

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
struct models
{
    char model[50];
    char digOrAn[20];
    bool digZoom;
    int price; // in $
    int zoomDig;
    int zoomOpt;
};
// for sorting out all models by a price
int comparator(const void *a, const void *b)
{
    struct models *ia = (struct models *)a;
    struct models *ib = (struct models *)b;
    if (ia->price > ib->price)
        return -1;
    else if (ia->price < ib->price)
        return 1;
    else
        return 0;
}

int main()
{
    const int numCam = 5;
    struct models *model = (struct models *)malloc(numCam * sizeof(struct models));

    model[0] = (struct models){"Sony HDR-CX405", "Digital", true, 300, 60, 30};
    model[1] = (struct models){"Sony PXW-X70", "Digital", false, 2000, 0, 12};
    model[2] = (struct models){"Canon XA11", "Digital", false, 1300, 0, 20};
    model[3] = (struct models){"Panasonic AG-UX90", "Digital", false, 1800, 0, 15};
    model[4] = (struct models){" Canon VIXIA HF G21", "Digital", true, 800, 40, 20};

    // for sorting models
    qsort(model, numCam, sizeof(struct models), comparator);
    for (int i = 0; i < numCam; i++)
    {
        continue;
    }

    printf("Cameras without digital zoom and sorted from the highest to lowest price: \n");
    for (int i = 0; i < numCam; i++)
    {
        // condition for the presence of digital zoom
        if (!model[i].digZoom)
        {
            printf("%s\n", model[i].model);
        }
    }
}