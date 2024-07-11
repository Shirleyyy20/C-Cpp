#include <stdio.h>
int main()
{
    

    float discount,bscit,bms,bmm;
    double coffee,regNescafe,regExpresso,regLatte,medExpresso,medLatte,medNescafe,bill;
    char name(stream,yesno,yes,no);

    bscit=0.025;
    bms=0.02;
    bmm=0.0125;
    yes=1;
    no=2
    regNescafe=10;
    regExpresso=15;
    regLatte=20;
    medExpresso=17;
    medLatte=22;
    medNescafe=12;
    
    printf("  Good News to you All!\nDiscounts on overall canteen bill for the followings streams:\n• 2.5/100 discount for FYBScIT \n• 2/100 discount for FYBMS \n• 1.25/100 discount for FYBMM");
    printf("\n•The Rates of Coffee cups is as under:-\n Nescafe Regular 10 \n Expresso Regular 15 \n Latte  Regular 20\n Expresso Medium 17 \n Latte Medium 22 \n Nescafe Medium 12");
    
    printf("\nWhich Coffee would you like to order?");
    scanf("%lf",&coffee);

    printf("\nDo you have an ID card?");
    scanf("%s",&yesno);

    if (1)
    {
        printf("\nWhich stream?");
        scanf("%s",stream);
        if (stream==bscit)
        {  
            printf("Your discount is %lf",bscit);
            (bill=coffee,bscit);
            
        }
        else if (stream==bms)
        {
            printf("Your discount is %lf",bms);
            (bill=coffee,bms);
        }
        else
        {
            printf("Your discount is %lf",bmm);
            (bill=coffee,bmm);
        }
        bill=coffee-discount;
        printf("The Total bill is %f",bill);
    }
    else
    {
        printf("\nNo Discount,Sorry!");
        printf("Your bill is %d",&Coffee);
    }
    
    
    return 0;
}
#include <stdio.h>

int main()
{
    char stream;//(A=0.025,B=0.025,C=0.0125,D=0);
    float A,B,C,D,Total_bill;
    int coffee,n,a,b,c,d,e,f;
    
   printf("  Good News to you All!\nDiscounts on overall canteen bill for the followings streams:\n•A 0.025 discount for FYBScIT \n•B 0.02 discount for FYBMS \n•C 0.0125 discount for FYBMM \n•D  0 discount for others");
   printf("\n  NOTE:Discounts are given for Valid ID holders only!!");
   printf("\nWhich stream do you belong to?");
   scanf("%c",&stream);
   
  
   if(stream=='A')
   A=0.025;
   {
       printf("You get a 0.025 discount on your total bill");
       
   }
   if(stream=='B')
   B=0.02;
   {
       printf("You get a 0.02 discount on your total bill ");
       
   }
   if(stream=='C')
   C=0.0125;
   {
       printf("You get a 0.0125 discount on your total bill";
      
   }
   else
   D=0;
   {
       printf("You dont get a discount on your total bill,Sorry!");
       
   }
   ("\nRates of Coffee cups is as under:-\na-Nescafe Regular 10 \nb-Expresso Regular 15 \nc-Latte  Regular 20\nd-Expresso Medium 17 \ne-Latte Medium 22 \nf-Nescafe Medium 12");
   printf("\nEnter the beverage you would like to order(a,b,c,d,e,f):");
   scanf("%d",&coffee);
   printf("Enter the number of beverages you want:\n");
   scanf("%d",&n);
   if coffee==a==10
   {
       printf("Price is %n*%d",n,a);
   }
   else if coffee==b==15
   {
       printf("Price is %n*%d",n,b);
   }
   else if coffee==c==20
   {
       printf("Price is %n*%d",n,c);
   }
   else if coffee==d==17
   {
       printf("Price is %n17",n,d);
   }
   else if coffee=e
   {
       printf("Price is %n*22",e);
   }
   else coffee=f
   {
       printf("Price is %n*12",f);
   }
    return 0;
}