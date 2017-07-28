#include<stdio.h>

void main()
{
    FILE *fptr;
    char str1;
    int i,j;
    fptr=fopen("test.txt","r");
    printf("The content of the file test.txt is:\n");
    str1= fgetc(fptr);
    i=0;j=0;
    while (str1!=EOF)
    {
        printf("%c",str1);
        if (str1!=' '&&str1!='\n')
            i++;
        if (str1==' '||str1=='\n')
            j++;
        str1=fgetc(fptr);
    }

    printf("\nThe number of words in the file test.txt is %d\n",j);
    printf("The number of characters in the file test.txt is %d\n",i);
}
