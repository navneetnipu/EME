#include<stdio.h>
#define X 5
#define T 5
float fun(int x)
{
    return x*x*(5-x);
 
}
int main()
{
    float u[X+1][T+1],square_of_c, ut, ue;
    int i,j;
    printf("\n Enter the square of c: ");
    scanf("%f",&square_of_c);
    printf(" Enter the value of u[0][t]:");
    scanf("%f",&ut);
    printf(" Enter the value of u[%d][t]:",X);
    scanf("%f",&ue);
    for(j=0;j<=T;j++)
    {
        u[0][j]=ut;// values of wave at x=0 cordinate and time is varying
        u[X][j]=ue;//values of wave at x=X and time is varying
    }
    // values of wave at different x cordinate with variation of time other than x=0 and x=X
    for(i=1;i<=X-1;i++)
    u[i][1]=u[i][0]=fun(i);
    for(j=1;j<=T-1;j++)
    for(i=1;i<=X-1;i++)
    u[i][j+1]=u[i-1][j]+u[i+1][j]-u[i][j-1];// analytic method to find solution of second order differential equation
    printf(" The values of u[i][j] are: \n");//printing values of wave at different x cordinate with variation of time
    printf("x=  ");
    for(j=0;j<=X;j++){
        printf("%7.1d",j);
    }
    printf("\n");
    for(j=0;j<=X;j++)
      printf("________");
    printf("\n");
    for(j=0;j<=T;j++)
    {
        printf("t= %d |",j);
        for(i=0;i<=X;i++){
            printf("%6.1f",u[i][j]);
            printf("|");
        }
        printf("\n");
 
    }
 return 0;
}
