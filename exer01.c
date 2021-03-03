#include<stdio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"headf.h"
#define TOTAL_CHARS   128
#define NAME_LENGHT    25
#define INPUT_LENGHT 1000

int main(void)
{
    int arr[TOTAL_CHARS];
    char input[INPUT_LENGHT];
    initArrWithZeroValues(arr, sizeof(arr) / sizeof(int));
    initInput(input);
    createHistogram(input, arr);
    printResult(arr);
    return 0;
}

