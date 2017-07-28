#include<stdio.h>
#define RSIZ 10
#define CSIZ 128

void main()
{
    FILE *fptr1,*fptr2;
    int i=0, tot=0, remove;
    char newline[150];
    char line[RSIZ][CSIZ];

    printf("Input the content of the newline: ");
    gets(newline);
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
    printf("Input the line you want to remove: ");
    scanf("%d",&remove);

    strcpy( line[remove-1] ,newline);


        printf("The content of the file test.txt is:\n");
    for(i=0;i<tot;i++)
    {
        printf("%s\n",line[i]);
    }
}
