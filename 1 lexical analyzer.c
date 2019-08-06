#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
int iskeyword(char buffer[])
{
    char keywords[32][10]={"int","return","char","if","else","void","while","for","float","break","long","const"};
    int i,j=0;
    for(i=0;i<12;i++)
        if(strcmp(keywords[i],buffer)==0)
        {
            flag=1;
            break;
        }
        return flag;
}
int main()
{
    char ch,buffer[15],operators[]="+-*/%=";
    int i,j=0;
    FILE *fp;
    fp=fopen("input.txt","r");
    if(fp==NULL)
    {
        printf("error");
    }
    while(ch=fgetc(fp)!=EOF)
    {
        for(i=0;i<6;i++)
        {
            if(ch==operator[i])
                printf("%c is operator \n",ch);

        }
        if(isalnum(ch))
        {
            buffer[j++]=ch;
        }
        else if (ch=' ' || ch=='\n') && (j!=0)
        {
            buffer[j]='\0';
            j=0;

        }
        if(iskeyword(buffer)==1)
        {
            printf("%s is keyword",buffer);
        }
        else
        {
            printf("%s is identifier\n",buffer);
            
        }
    }
    close(fp);
    return 0;
}