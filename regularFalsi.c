#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) x*x*x-2*x-5
#define e 0.001

int main()
{
    int k=1000 ,i=1;
    float a,b,c ;
    float fa,fb,fc ;

    printf("Enter the value of the a and b -> ") ;
    scanf("%f %f ",&a,&b);

    do{
        fa = f(a) ;
        fb = f(b) ;

        c = ((a*fb)-(b*fa))/(fb-fa) ;
        fc = f(c) ;

        if(fc < 0)
        {
              a = c ;
              fa = fc ;
        }
        else
        {
             b = c ;
             fb = fc ; 
        }

        printf("%d iteration root value is %f and function values is %f\n ",i,c,fc) ;
        i++ ;

    // }while(i!=k) ;
    }while(fabs(fc)>e);

    return 0 ;
}