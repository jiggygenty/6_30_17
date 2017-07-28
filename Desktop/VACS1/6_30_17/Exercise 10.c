#include<stdio.h>
#define RSIZ 10
#define CSIZ 128

void main()
{
    FILE *fptr;
    int i=0, tot=0, remove,nlinesadd;
    char line[RSIZ][CSIZ];
    char str[150];
    FILE *fp;

    printf("Input the number of lines to be added: ");
    scanf("%d",&nlinesadd);

    fp=fopen("test.txt","w+");
//    for (i=0;i<nlinesadd+1;i++)
//    {
//        fgets(str,sizeof str,stdin);
//        fputs(str, fptr);
//    }

    while (fgets(line[i],CSIZ,fp))
        {
           line[i][strlen(line[i])-1]='\0';
           i++;
        }

//    fclose(fptr);

    tot=i;

    printf("The content of the file test.txt is:\n");
    for(i=0;i<tot;i++)
    {
        printf("%s\n",line[i]);
    }
}
