#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char name[15];
    int num,c;
    
    printf("Enter Your Name:");
    fgets(name,15,stdin);
    printf("Enter one of the following:\n 1)Uppercase \n 2)Lowercase\n");
    scanf("%d",&num);
    
    if (num==1)
    {
        for(c=0; c<strlen(name); ++c)
          putchar(toupper(name[c]));
          //printf("Your name in Uppercase is %s",&name);
        
    }
    else if (num==2)
    {
        for(c=0; c<15; ++c)
          putchar(tolower(name[c]));
        
    }
    else
    {
        printf("Invalid!");
    }
   
    return 0;
}