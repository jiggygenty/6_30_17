#include<stdio.h>
#define CSIZ 128
#define RSIZ 10
void main()
{
    int i=0, tot=0;
    FILE *fp;
    char line[RSIZ][CSIZ];
    fp=fopen("test.txt","r");
    while (fgets(line[i],CSIZ,fp))
           {
           line[i][strlen(line[i])-1]='\0';
           i++;
           }
           tot=i;
    printf("The content of the file test.txt is:\n");
    for(i=0;i<tot;i++)
    {
        printf("%s\n",line[i]);
    }
    fclose(fp);
}
