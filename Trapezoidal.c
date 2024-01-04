#include <stdio.h>
#include <math.h>
double f(double x)
{
return 1 / (1 + x * x);
}
int main()
{
double lower, upper;
double n;
printf("Enter lower limit: ");
scanf("%lf", &lower);
printf("\nEnter upper limit: ");
scanf("%lf", &upper);
printf("\nEnter number of intervals:");
scanf("%lf", &n);
double h = (upper - lower) / n;
double result = f(lower) + f(upper);
double x;
for (int i = 1; i <= n - 1; i++)
{
x = lower + i * h;
result += 2 * f(x);
}
result = result * h / 2;
printf("\nValue of integration is = %lf", result);
return 0;
}
