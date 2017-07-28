#include<stdio.h>

void main()
{
    FILE *fp;
    int n,i;
    char str[]="test line ";
    char str1;
    printf("Input the number of lines to be written:");
    scanf("%d",&n);
    fp=fopen("test.txt","w");
    for (i=0;i<n;i++)
    {
        fprintf(fp,"test line %d\n",i+1);

    }
    fclose(fp);

    fp=fopen("test.txt","r");
    printf("The content of the file test.txt is:\n");
    str1= fgetc(fp);
    while (str1!=EOF)
    {
        printf("%c",str1);
        str1=fgetc(fp);
    }
    fclose(fp);

}
