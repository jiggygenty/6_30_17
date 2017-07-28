#include <stdio.h>
#include <string.h>

#define MAX 256

void main()
{
    int lno, ctr = 1;
    char ch;
    FILE *fptr1,*fptr2;

        char fname[MAX]="test.txt";
    char str[MAX], temp[] = "temp.txt";

    fptr1= fopen ("test.txt","r");
    fptr2=fopen(temp,"w");

    printf("Input the number of the line you want to remove: ");
    scanf("%d",&lno);
        lno++;

    while(!feof(fptr1))
    {
        strcpy(str,"\0");
        fgets(str,MAX,fptr1);

        if (!feof(fptr1))
        {
            ctr++;
            if (ctr != lno)
            {
                fprintf(fptr2,"%s",str);
            }
        }
    }
    fclose(fptr1);
    fclose(fptr2);
    remove("test.txt");
    rename(temp,fname);



    fptr1=fopen(fname,"r");
    ch=fgetc(fptr1);

    while(ch!=EOF)
    {
        printf("%c",ch);
        ch=fgetc(fptr1);
    }
    fclose(fptr1);


}
