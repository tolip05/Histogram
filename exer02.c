#include<stdio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"headf.h"
#define TOTAL_CHARS   128
#define NAME_LENGHT    25
#define INPUT_LENGHT 1000

int main(void) {
    char file_name[NAME_LENGHT];
    FILE *fp;
    int arr[TOTAL_CHARS];
    char input[INPUT_LENGHT];
    initArrWithZeroValues(arr,sizeof(arr) / sizeof(int));
    readFromFile(fp,file_name,input);

    if(NULL == input) {
      printf("Invalid input!!!");
      return 0;
    }

    createHistogram(input, arr);
    printResult(arr);
    return 0;
}

