#include <stdio.h>

void swap(int *a, int *b){
    int x=100, y=150;
    x = *a;
    y = *b;

    int temp = *a;
    *a = *b;
    *b = temp;

}
