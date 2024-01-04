#include<stdio.h>
#include<math.h>
int main()
{
    double actVal ;
    int b ;
    printf("Enter the number ");
    scanf("%lf",&actVal) ;
    printf("Enter the digits till you wat to truncate point after decimal ") ;
    scanf("%d",&b) ;
    long long int a  =  actVal*pow(10,b) ;
    double relVal = (double)a/pow(10,b) ;
    printf(" value after truncation %lf \n",relVal);
    double absError = fabs(actVal-relVal);
    printf("absolute error %lf\n",absError) ;
    double relError = fabs(absError/actVal) ;
    printf("relative error %lf\n",relError) ;
    double perError =  relError*100 ;
    printf("Percentage error %lf\n",perError) ;
   
   printf("***********************************For round off condition***********************\n") ;
   a = actVal*pow(10,b+1) ;
   int c = a%10 ;
    a= a/10;
   if(c>5) a++ ;
   relVal = (double)a/pow(10,b) ;
   printf(" value after roundoff %lf \n",relVal);
    absError = fabs(actVal-relVal);
    printf("absolute error %lf\n",absError) ;
    relError = fabs(absError/actVal) ;
    printf("relative error %lf\n",relError) ;
    perError =  relError*100 ;
    printf("Percentage error %lf\n",perError) ;



}