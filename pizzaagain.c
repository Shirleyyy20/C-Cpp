#include <stdio.h>

int main()
{
    char choice=' ';
    int number;
    float price,total;
    
    printf("   Welcome To Joeys Pizza!  \n");
    printf("_____________________________\n");
    printf("Our Menu is as follows;\n");
    printf(" A) Paneer Pizza\n");
    printf(" B) Chicken Pizza\n");
    printf(" C) Fries Pizza\n");
    
    printf("Please enter your choice: ");
    scanf("%c",&choice);
    
    if (choice='A');
    {
    printf("Enter Quantity:");
    scanf("%d",&number);
    total= 350*number;
    printf("Your total amount is Rs.%f Thank You,Order again!\n",total);
    }
    else if (choice='B');
    {
    printf("Enter Quantity:");
    scanf("%d",&number);
    total= 500*number;
     printf("Your total amount is Rs.%f Thank You,Order again!\n",total);
    }
     else (choice='C');
    {
    printf("Enter Quantity:");
    scanf("%d",&number);
    total= 250*number;
    printf("Your total amount is Rs.%f Thank You,Order again!\n",total);
    }
   
    return 0;
}