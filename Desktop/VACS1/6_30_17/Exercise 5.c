#include<stdio.h>
#define RSIZ 10
#define CSIZ 128
void main()
{
    FILE *fptr;
    int i=0, tot=0;
    FILE *fp;
    char line[RSIZ][CSIZ];
    fp=fopen("test.txt","r");
    while (fgets(line[i],CSIZ,fp))
           {
           line[i][strlen(line[i])-1]='\0';
           i++;
           }
    printf("The number of lines in the file test.txt is: ");
    printf("%d\n",i-1);
    fclose(fp);
}
