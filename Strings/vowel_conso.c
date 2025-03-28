#include<stdio.h>
#include<string.h>
#include<ctype.h>
void count(char str[])
{
    int vow=0,con=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        char c= tolower(str[i]);
        if(c>='a' && c<='z')
        {
            if(c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u')
                vow++;
            else
                con++;
        }
    }
    printf("The number of vowels are : %d\nThe number of consonents are: %d",vow,con);
}
void main()
{
    char str[100];
    printf("\nEnter the String: ");
    gets(str);
    fflush(stdin);
    int len = strlen(str);
    if(len>0 && str[len-1]=='\n')
        str[len-1]='\0';
    count(str);
}