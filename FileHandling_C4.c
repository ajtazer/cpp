#include<stdio.h>
#include<string.h>
int main()
{
    FILE *filePointer;
    char readable[100];
    filePointer=fopen("GfgTest.c","r");
    if(filePointer==NULL)
        printf("GfgTest.c file failed to open");
    else
    {
        printf("The file is now opened.\n");
        while(fgets(readable,100,filePointer)!=NULL)
        {
            printf("%s",readable);
        }
        fclose(filePointer);
        printf("\nData successfully read from file GfgTest.c\n");
        printf("The file is now closed.");
    }
    return 0;
}