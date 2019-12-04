#include<stdio.h>
#include<string.h>
int main()
{
    FILE *filePointer;
    filePointer=fopen("Raman.txt","w");
    fprintf(filePointer,"%s %s %s %s %s %s","Raman","Rawat","is","a","good","boy.");
    fclose(filePointer);
    printf("Mission Passed Respect++");
    return 0;
}