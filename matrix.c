/*matrix addition subtraction and multiplication*/
#include<stdio.h>
void read(int x[][2]);
void print(int x[][2]);
void add(int x[][2], int y[][2], int z[][2]);
void subtract(int x[][2], int y[][2], int z[][2]);
void multiply(int x[][2], int y[][2], int z[][2]);


int main()
{
    int matrix1[2][2];
    int matrix2[2][2];
    int matrix3[2][2];
    
    {
    printf("Please enter the values of the array:\n");
    read(matrix1);
    print(matrix1);

    printf("Please enter the values of the array:\n");
    read(matrix2);
    print(matrix2);
   
    add(matrix1,matrix2,matrix3);
    print(matrix3);
    
    subtract(matrix1,matrix2,matrix3);
    print(matrix3);
    
    multiply(matrix1,matrix2,matrix3);
    print(matrix3);
    
    }
    return 0;
}


void read(int x[2][2])
{
  for(int a=0;a<2;a++)
   {
        for(int b=0;b<2;b++)
        {
            scanf("%d",&x[a][b]);
        }
   }
}

void print(int x[2][2])
{
  for(int a=0;a<2;a++)
   {
        for(int b=0;b<2;b++)
        {
            printf("\t x[%d][%d]=%d",a,b,x[a][b]);
        }
        printf("\n");
    }
}

void add(int x[][2], int y[][2], int z[][2])
{
   printf("\n Add \n");
   for(int a=0; a<2; a++)
   {
        for(int b=0; b<2; b++)
        {
             z[a][b] = x[a][b] + y[a][b];
        }
   }
   printf("\nAddition completed\n");

}

void subtract(int x[][2], int y[][2], int z[][2])
{
   printf("\n Subtract \n");
   for(int a=0; a<2; a++)
   {
        for(int b=0; b<2; b++)
        {
             z[a][b] = x[a][b] - y[a][b];
        }
   }
   printf("\nSubtraction completed\n");

}

void multiply(int x[][2], int y[][2],int z[][2])
{
   printf("\n Multiply \n");
   for(int a=0; a<2; a++)
   {
        for(int b=0; b<2; b++)
        {
             z[a][b] = x[a][b] * y[a][b];
        }
   }
   printf("\nMultiplication completed\n");

}