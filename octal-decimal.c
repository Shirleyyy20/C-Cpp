#include <stdio.h>
#include<math.h>
int octal_decimal(void);
int decimal_octal(void);
int main()
{   
    int code;
    printf("\nOctal ------> Decimal   3");
    printf("\nDecimal ------> Octal   4");
    printf("\nEnter the Code of the Operation: ");
    scanf("%d", &code);
    
    if(code==3)
        octal_decimal();
    else if(code==4)
        decimal_octal();
    else
        printf("Invalid code!!");

    return 0;
}

int octal_decimal(void)
{   int octal[20], decimal[20], digit;                          //declaring the variable
    int i=0;
    printf("Enter the no. of digits of the Octal number: ");      //input of the no. of digits
    scanf("%d",&digit);
    while(i<digit)                                              //loop for octal input
    {
        printf("Enter %d digit: ", i+1);
        scanf("%d",&octal[i]);
        i++;
    }
    for(i=0; i<digit; i++)                                      //for restricting non octal inputs
    {
        if (octal[i]>=8)
        {
            printf("Invalid!!\n");
            printf("Please check, entered number is not Octal");
            return 0;
        }
    } 
    printf("The Octal no. is: ");                            
    for(i=0; i<digit; i++)                                       //printing the octal no.
    {    
        printf("%d",octal[i]);    
    }
    for(i=0; i<digit; i++)                                      //calculating the decimal no.
    {   
        decimal[i]=decimal[i]+(octal[i]%10)*pow(8,digit-(i+1));
        octal[i]=octal[i]/10;
    }
    int sum=0;
    for (int j=0; j<digit; j++)
    {   
        sum=sum+decimal[j];   
    }
    printf("\nDecimal number is  %d",sum);
    return 0;
}
int decimal_octal(void)
{
    int decimal, octal[20], i;             //declaring the variable
    printf("Enter the Decimal number: ");           
    scanf("%d",&decimal);
    for(i=0; decimal>0;i++)
    {
        octal[i]=decimal%8;
        decimal =decimal/8;
    }
    int j=i-1;
    printf("The Octal number is  ");
    while(j>=0)
    {
        printf("%d", octal[j]);
        j--;
    }   
}