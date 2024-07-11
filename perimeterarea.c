#include <stdio.h>

int main()
{
    printf("Name - Shirley Dsouza\n");
    printf("Date of Birth - 20/05/2003\n");
    printf("Mobile no. - 9172595973\n\n\n");
    

    printf("####\n");
    printf("##  ##\n");
    printf("## ##\n");
    printf("####\n");
    printf("##  ##\n");
    printf("##   ##\n\n");

    printf("######\n");
    printf("##   \n");
    printf("##   \n");
    printf("##   \n");
    printf("##   \n");
    printf("######\n\n\n");
    

    int height='x';
    int width='y';
    printf("Enter the Height(x):");
    scanf("%d",&height);
    printf("Enter the Width(y):");
    scanf("%d",&width);
    int perimeter=2*(height+width);
    printf("Perimeter = 2*(x+y)\n");
    printf("Hence, Perimeter of the Rectangle is %d inches.\n",perimeter);
    int area=height*width;
    printf("Area = x*y\n");
    printf("Hence, Area of the Rectangle is %d square inches.",area);

    return 0;
}