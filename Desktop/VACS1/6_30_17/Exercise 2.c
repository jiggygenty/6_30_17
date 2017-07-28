#include<stdio.h>

void main()
{
    FILE *fp;
    char singleLine[150];
    char str;

    printf("The content of the fle test.txt is :\n");
    fp=fopen("test.txt","r");

    str = fgetc(fp);

    while (str != EOF)
    {
        printf("%c",str);
        str = fgetc(fp);
    }
    fclose(fp);

}
