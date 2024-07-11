//Algorithm 
//Step 1: Take the order for Small-8,Medium-10 or large-12 Pizza
//Step 1.2:small_vol = 50.24, med_vol = 78.5,lar_vol = 113.04 
//Step 2: Bucky measures the diameter of the base and its height of dough
//Step 3: bucky enters diameter, height, into the program, of the base just rolled out D <- diameter of pizza base rolled out
//Step 4: the program calculates the radius R <- (D/2)
//Step 5: the volume of the pizza = pi x R x R x h (pi=3.14)
//Step 6: The volume of the base just rolled is now compared with the Const volume,if (rolled volume < constant volume) the pizza is rejected and go to step 2
//Step 7: Else the pizza proceeds with toppings into the oven


#include <stdio.h>

int main()
{  
   int pizza,H,R;
   double pi;
   float Volume;
   double roll_h,roll_rad,roll_dia,roll_vol;
   //constant values
   pi=3.14;
   H=1;
   //pizzasize=8,10,12;
   //Small_vol=50.24;  (3.14*4*4*1)
   //Medium_vol=78.5; (3.14*5*5*1)
   //large_vol=113.04; (3.14*6*6*1)

    
    printf("Available Pizza sizes are: \nSmall-8inches \nMedium-10inches \nLarge-12inches \n");
    printf("\nEnter the Pizza size:");
    scanf("%d",&pizza);
    R=pizza/2;
    printf("The radius is %d",R);
    Volume=pi*R*R*H;
    printf("\nHence the volume should be %f\n",Volume);
    
    printf("\nEnter the diameter of the rolled base(inches):");
    scanf("%lf",&roll_dia);
    
    printf("Enter the height of the rolled base(inches):");
    scanf("%lf",&roll_h);
    
    roll_rad=roll_dia/2;
    printf("The radius is %f",roll_rad);
    
    roll_vol=pi*roll_rad*roll_rad*roll_h;
    printf("\n Your Rolled out Base Volume is %f",roll_vol);
    
if(roll_vol<Volume)
{ 
   printf("\n    Sorry Try again!");
   
}
else
{   printf("\n Proceed with the toppings & Bake it");
}
    return 0;
}