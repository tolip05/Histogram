#ifndef HEADF
#define HEADF

extern void initArrWithZeroValues(int arr[],int size);
extern void initInput(char input[]);
extern void createHistogram(char input[],int arr[]);
extern void printResult(int arr[]);
extern void readFromFile(FILE *fPtrR,char file_name[],char input[]);
extern void createOutputFile(char file_name[],char extension[]);
extern void writeResultInFile(FILE *fPtrW, int arr[]);

#endif
