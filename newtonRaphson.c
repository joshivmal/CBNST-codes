#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) x*x*x-3*x-5
#define g(x) 3*x*x-3
int main()
{
    int i=1,k=10 ;
    float x0,fa,ga,c ;
    printf("Enter the value of x0 ->"); 
    scanf("%f",&x0) ;

    do
    {
        fa = f(x0);
        ga = g(x0);
        float x1 = x0-(fa/ga) ;
        printf("value after %dst iteration is %f \n ",i,x1) ;
        x0 = x1 ;
        i++ ;
    }while(i<k) ;

    return 0 ;
}