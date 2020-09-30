#include<stdio.h>
void main()
{
 float m,n;
 float num;
 n=0.0001;   // This is taken small so that we can calculate upto decimal places also
 printf("ENTER A NUMBER : ");
 scanf("%f",&num);

 for(m=0;m<num;m=m+n)
 {
  if((m*m)>num)
  {
   m=m-n;         // This if() is used to calculate the final value as soon as the square of the number exceeds
   break;      //  the number then we deduct the value exceeded and stop the procedure using break; this is our final value which is stored in m;
  }              
 }
 printf("%.2f",m);
}
