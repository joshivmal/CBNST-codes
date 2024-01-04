// #include<stdio.h>
// int main()
// {
//     int i,j,k,n;
//     float A[20][20],c,x[10],sum=0.0;
//     printf("\nEnter the order of matrix: ");
//     scanf("%d",&n);
//     printf("\nEnter the elements of augmented matrix row-wise:\n\n");
//     for(i=1; i<=n; i++)
//     {
//         for(j=1; j<=(n+1); j++)
//         {
//             printf("A[%d][%d] : ", i,j);
//             scanf("%f",&A[i][j]);
//         }
//     }
//     // this loop is used for upper triangular matrix
//     for(i=1; i<=n; i++) 
//     {
//         for(j=1; j<=n; j++)
//         {
//             if(i<j)
//             {
//                 c=A[j][i]/A[i][i];
//                 // printf("for A[%d][%d] c is  %0.2f\n",j,i,c);
//                 for(k=1; k<=n+1; k++)
//                 {
//                     A[j][k]=A[j][k]-c*A[i][k];
//                     // printf("%0.2f ",A[j][k]);
//                 }
//                 printf("\n");
//             }
//         }
//     }
//     x[n]=A[n][n+1]/A[n][n];
  
//     for(i=n-1; i>=1; i--)
//     {
//         sum=0;
//         for(j=i+1; j<=n; j++)
//         {
//             sum=sum+A[i][j]*x[j];
//         }
//         x[i]=(A[i][n+1]-sum)/A[i][i];
//     }



    
//     printf("\nThe solution is: \n");
//     for(i=1; i<=n; i++)
//     {
//         printf("\nx%d=%f\t",i,x[i]); 
//     }
//     return(0);
// }


//C Program to Implement Gauss Jordan Method
#include<stdio.h>
     
int n;
//Converts the Augmented matrix to Diagonal form
void convertToDiagonal(float a[][n+1],int n)
{
    int i,j,x,y,k;
    float ratio;
    for( i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
         if(j!=i)
         {
             ratio=a[j][i]/a[i][i];
             for(k=0;k<n+1;k++)
                a[j][k]=a[j][k] -( ratio * a[i][k]);
             
             printf("\n");
             
         } 
      }
     }
}


//prints the Value of Unknowns
void printUnknowns(float a[][n+1],int n)
{  
   int i;
   printf("Values of unknowns are:\n");
   for(i=0;i<n;i++)
      printf("Value of Variable %d=%f\n",i,a[i][n]/a[i][i]);
   
}
int main()
{
    int i,j,k,x,y;
    float ratio;
    printf("Enter no of Unknowns\n");
    scanf("%d",&n);
    float a[n][n+1];
    printf("Enter the Augmented Matrix\n");
    for(int i=0;i<n;i++)
    {
     for(int j=0;j<n+1;j++)
        scanf("%f",&a[i][j]);
    }
    convertToDiagonal(a,n);
    printUnknowns(a,n); 
    return 0;
}