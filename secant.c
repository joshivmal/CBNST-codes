#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) x*x*x-5*x+1

int main()
{
    int i=1,k=10 ;
    float a,b,c ;
    float fa,fb,fc ;
    printf("Enter the values of a and b -> ");
    scanf("%f %f",&a,&b) ;
    do
    { 
        fa = f(a) ;
        fb = f(b) ; 
        c = ((a*fb)-(b*fa))/(fb-fa) ;
        fc = f(c) ; 

        printf("value for %dst iteration is %f and and function value is %f \n",i++,c,fc);
        fa = fb ;
        fb = fc ;
        a = b ;
        b = c ;

    }while(i<k) ;

    return 0 ;
}