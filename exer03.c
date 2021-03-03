#include<stdio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"headf.h"

#define TOTAL_CHARS   128
#define NAME_LENGHT    50
#define DATA_SIZE      25
#define EXT_SIZE        6
#define INPUT_LENGHT 1000

int main(void) {
    char ch, file_name[NAME_LENGHT];
    FILE *fPtrR = NULL;
    FILE *fPtrW = NULL;
    int arr[TOTAL_CHARS];
    char data[DATA_SIZE];
    char input[INPUT_LENGHT];
    static const char extension[] = "_hist";

    initArrWithZeroValues(arr,sizeof(arr) / sizeof(int));
    readFromFile(fPtrR,input,file_name);
    createHistogram(input, arr);
    
    if(NULL == input) {
       printf("Invalid input!!!");
       return 0;
    }

    createOutputFile(file_name,extension);
    fPtrW = fopen(file_name, "w");
    if(fPtrW == NULL) {
        /* File not created hence exit */
       printf("Unable to create file.\n");
       return 0;
    }
    writeResultInFile(fPtr, arr);
    fclose(fPtrW);
    return 0;
}


