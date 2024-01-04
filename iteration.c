#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define e 0.001
#define f(x) x*x*x+x*x-1
#define g(x) 1/sqrt(x+1)

int main()
{
    float a0,a1  ;
    int i = 1,k=10 ;
    scanf("%f",&a0);
    do
    {
        a1 = g(a0);
        printf("value of x%d for  iteration is %f\n",i,a1);
        a0 = a1;
        i++ ;
    // }while(i<k);
    }while(fabs(f(a0))>e) ;

    return  0 ;
}