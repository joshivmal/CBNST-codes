// #include<stdio.h>
// #include<stdlib.h>
// #include<conio.h>
// #include<math.h>
// #define f(x) x*x*x-2*x-5
// #define i 12 
// #define e 0.001


// int main()
// {
//     float fa, fb, fc;
//     float a,b,c;
//     int k=1 ;
//     printf("Enter the value of a and b  ");
//     scanf("%f %f",&a,&b) ;
 
//     do{
//         fa = f(a) ;
//         fb = f(b) ;
//         c = (a+b)/2 ;
//         fc = f(c) ;

//         if(fc < 0) a = c ;
//         else b = c ;

//         printf("%dst iteration value is  %f and function value is %f \n",k,c,fc) ;
//         k++ ;

//     // }while(fabs(c)>e);
//     }while(k!=i) ;


//     return 0 ;
// }


// // bisection implementation
#include <stdio.h>
#include <math.h>
# define e 0.001
# define f(x) x*x*x-2*x-5


int main() {
    float x0,x1,x2;
    float f0,f1,f2;
    int i=0;
    
    printf("Enter the values of x0 & x1 ");
    scanf("%f %f",&x0,&x1);
    do{
        f0=f(x0);
        f1=f(x1);
        x2=(x0+x1)/2;
        f2=f(x2);
        if(f0*f2<0)
        {
            x1=x2;
        }
        else{
            x0=x2;
        }
        i++;
        printf("no of iterations %d  ", i);
        printf("root %f",x2);
        printf("value of function is %f \n",f2);
        // if(i==1000) break ;
    }while(fabs(f2) > e);

    return 0;
}