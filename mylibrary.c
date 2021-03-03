#include<stdio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"headf.h"

void printResult(int arr[])
{
    int i,j;
    for(i=0; i<TOTAL_CHARS; ++i) {
        if(arr[i] > 0) {
            printf("%c -> ",(char)i);
        for(j = 0; j < arr[i]; j++) {
            putchar("*");
         }
            putchar("\n");
            arr[i] = 0;
        }
    }
}

void createHistogram(char input[],int arr[])
{
    char c;
    int count = 0;
    while(input[count] != 0) {
        c = (char) input[count];
        arr[c] = arr[c] + 1;
        count++;
    }
}

void initInput(char input[])
{
   scanf("%[^\n]%*c",input);
   if(NULL == input) {
       printf("Invalid input!!!");
   }
}

void initArrWithZeroValues(int arr[], int lengthOfString)
{
    for(int i=0; i < lengthOfString; ++i){
        arr[i] = 0;
    }
}

void readFromFile(FILE *fp,char file_name[],char input[])
{   
    char ch;
    int number;
    scanf("%[^\n]%*c",file_name);
    fp = fopen(file_name, "r");
    if (fp == NULL) {
      printf("Null input!!!");
      return 0;
    }
    number = 0;
    while((ch = fgetc(fp)) != EOF) {
      input[number] = ch;
      number++;
    }
    fclose(fp);
}

void writeResultInFile(FILE *fPtrW, int arr[])
{
  int i,j;
  for(i=0; i<TOTAL_CHARS; ++i) {
        if(arr[i] > 0) {
        fprintf (fPtrW, "%c -> ",(char)i);

        for(j = 0; j < arr[i]; j++) {
            fputs("*", fPtrW);
         }
            fputs( "\n",fPtrW);
            arr[i] = 0;
        }
    }
}

void createOutputFile(char file_name[],const char extension[])
{
   strncat(file_name, extension, sizeof(extension) / sizeof(char));
}
