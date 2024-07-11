/******************************************************************************


purpose: comparison of 3 nos
date: 18th Sep 2021
author: shirley
*******************************************************************************/
#include <stdio.h>

int main()
{

  int val1,val2,val3,max;

  printf("Enter value1: ");
  scanf("%d", &val1);

  printf("Enter value2: ");
  scanf("%d", &val2);

  printf("Enter value3: ");
  scanf("%d", &val3);


if ( (val1 >= val2) & (val1 >= val3))      // True & True = True, Else All False 
max = val1;

else if ( (val2 >= val1) & (val2 >= val3)) // False Or False = False, Else All True
max = val2;

else                                       // False+•False = False, True+•True = False
max = val3; 

printf("The largest value is: %d", max);



return 0;





}