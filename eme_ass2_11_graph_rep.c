// c program to solve general wave equation in xy plane
#include<stdio.h>
double wave_function_y(double x,double t,double phase);//wave function will generate the value of the particular wave at a particular position,time,phase angle
double main(){
    double x,t,phase;
    printf("enter the value of x-cordinate,time,phase angle to calculate the value of wave position:\n");
    scanf("%lf%lf%lf",&x,&t,&phase);//user input for wave function arguments
    return wave_function_y(x,t,phase);
}
double wave_function_y(double x,double t,double phase){
    double y=0;
    printf("t=         ");
    for(int j=0;j<=t;j++){
        printf(" %6.2d ",j);// prints time value at horizontal axis
    }
    printf("\n");
    for(int i=0;i<=x;i++){  // position of different particle at different x cordinte and time
        printf("x=  %6.2d  ",i); // x cordinate values
        for(int k=0;k<=t;k++){ //y at particular x and time varies(x cordinate is fixed for a particle)
            y=(i*k)+phase;//y is the position of the particle at(x,t)
            printf(" %6.2lf ",y);
        }
        printf("\n");
    }
}