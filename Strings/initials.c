#include<stdio.h>
#include<string.h>
#include<ctype.h>
void initials(char nam[], char ini[])
{
    int j=0;
    if(nam[0] != ' ')
        ini[j++] = toupper(nam[0]);
    for(int i=0; nam[i]!= '\0'; i++)
    {
        if(nam[i]== ' '&& nam[i+1] != '\0'&& nam[i+1] !=' ')
            ini[j++] = toupper(nam[i+1]);
    }
    ini[j] = '\0';
}
void main()
{
    char nam[50], ini[10];
    printf("\nEnter the name: ");
    fgets(nam, sizeof(nam), stdin);
    nam[strcspn(nam, "\n")] = '\0';
    initials(nam, ini);
    printf("\nInitials: %s",ini);
}