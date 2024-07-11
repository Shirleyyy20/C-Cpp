#include <stdio.h>
#include <string.h>
#include<math.h>
int binary_to_decimal (void);	//function prototype
int decimal_to_binary (void);	//function prototype
int octal_decimal(void);        //function prototype
int decimal_octal(void);       	//function prototype
int hexadecimal_decimal(void);  //function prototype
int decimal_hexadecimal(void);  //function prototype
int main ()
{
  int code;			//declaring the variable
  printf("Operation \t\t Code");
  printf("\nBinary      ------> Decimal       1");
  printf("\nDecimal     ------> Binary        2");
  printf("\nOctal       ------> Decimal       3");
  printf("\nDecimal     ------> Octal         4");
  printf("\nHexadecimal ------> Decimal       5");
  printf("\nDecimal     ------> Hexadecimal   6");
  printf("\nEnter the code of the operation:");
  scanf ("%d", &code);		//asking which operation is to be done
  if (code == 1)
    binary_to_decimal ();	//conversion of binary to decimal
  else if (code == 2)
    decimal_to_binary ();	//conversion of decimal to binary
  else if(code==3)
    octal_decimal();		//conversion of octal to decimal
  else if(code==4)
    decimal_octal();		//conversion of decimal to octal
  else if(code==5)
    hexadecimal_decimal();  //conversion of hexadecimal to decimal
  else if(code==6)
    decimal_hexadecimal();  //conversion of decimal to hexadecimal  
  else
    printf ("Invalid code !!");

  return 0;
} //end of main

int binary_to_decimal (void)
{
  int binary[20], decimal[20], digit;	//declaring the variable
  int i = 0;
  printf ("Enter the no. of digits of the binary no. :");	//input of the no. of digits
  scanf ("%d", &digit);
  while (i < digit)		//loop for binary input
    {
      printf ("Enter %d digit: ", i + 1);
      scanf ("%d", &binary[i]);
      i++;
    }
  for (i = 0; i < digit; i++)	//for restricting non binary inputs
    {
     	 if (binary[i] >= 2)
	    {
	        printf ("Invalid!!\n");
	        printf ("Please check, entered number is not binary");
	        return 0;
	    }
    }
printf ("The binary no. is:");
  for (i = 0; i < digit; i++)	//printing the binary no.
    {
      printf ("%d", binary[i]);
    }

  for (i = 0; i < digit; i++)	//calculating the decimal no.
    {
      decimal[i] = binary[i] * pow (2, digit - (i + 1));
    }
  int sum = 0;
  for (int j = 0; j < digit; j++)
    {
      sum = sum + decimal[j];
    }
  printf ("\nDecimal No.: %d", sum);
  return 0;
}

int decimal_to_binary (void)
{
  int decimal, binary[20], i;	//declaring the variable
  printf ("Enter the decimal no.: ");	//input of decimal no.
  scanf ("%d", &decimal);
  for (i = 0; decimal > 0; i++)	//calculating the binary no.
    {
      binary[i] = decimal % 2;
      decimal = decimal / 2;
    }
  int j = i - 1;
  printf ("The binary no. is: ");
  while (j >= 0)		//printing the binary no.
    {
      printf ("%d", binary[j]);
      j--;
    }
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
        decimal[i]=(octal[i]%10)*pow(8,digit-(i+1));
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

int hexadecimal_decimal(void)
{
    char hexadecimal[32] = { 0 };                                  //declaring the variable
    int decimal, i;
    int count;                                                 //for power index//
    int digit;                                                 //to store digit/

    printf("ENTER THE HEXADECIMAL NUMBER : ");
    scanf("%s",hexadecimal);

    count = 0;
    decimal = 0;
    for (i = (strlen(hexadecimal) - 1); i >= 0; i--) {              //
        switch (hexadecimal[i]) {
        case 'A':
            digit = 10;
            break;
        case 'B':
            digit = 11;
            break;
        case 'C':
            digit = 12;
            break;
        case 'D':
            digit = 13;
            break;
        case 'E':
            digit = 14;
            break;
        case 'F':
            digit = 15;
            break;
        default:
            digit = hexadecimal[i] - 0x30;
        }
        decimal = decimal + (digit)*pow((double)16, (double) count);
        count++;
    }

    printf("THE DECIMAL NUMBER IS : %d", decimal);
    return 0;
}
 

int decimal_hexadecimal(void)

{   int number, cnt, i;                                            //declaring the variable
    char hexadecimal[32];                                         //because it contains characters from A to F//

    printf("Enter decimal number: ");
    scanf("%d", &number);

    cnt = 0;                                                 //initialize index to zero//
    while (number > 0) {
        switch (number % 16) {
        case 10:
            hexadecimal[cnt] = 'A';
            break;
        case 11:
            hexadecimal[cnt] = 'B';
            break;
        case 12:
            hexadecimal[cnt] = 'C';
            break;
        case 13:
            hexadecimal[cnt] = 'D';
            break;
        case 14:
            hexadecimal[cnt] = 'E';
            break;
        case 15:
            hexadecimal[cnt] = 'F';
            break;
        default:
            hexadecimal[cnt] = (number % 16) + 0x30;                //converted into char value/
        }
        number = number / 16;
        cnt++;
    }
    printf("The Hexadecimal Number is : ");
    for (i = (cnt - 1); i >= 0; i--)                                //print value in reverse order/
        printf("%c", hexadecimal[i]);

    return 0;
}