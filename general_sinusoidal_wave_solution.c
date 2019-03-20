// c program to solve general sinusoidal wave equation in xy plane
#include<stdio.h>
#include<math.h>
double wave_function_y(double x,double t,double phase,double A,double T,double wave_length);//wave function will generate the value of the particular wave at a particular position,time,phase angle
double main(){
    double x,t,phase,A,T,wave_length;
    printf("enter the value of x-cordinate in meter,time in second,phase angle in radian,amplitude in meter,time period in seconds,wave lengthin meter to calculate the value of wave position:\n");
    scanf("%lf%lf%lf%lf%lf%lf",&x,&t,&phase,&A,&T,&wave_length);//user input for wave function arguments
    return wave_function_y(x,t,phase,A,T,wave_length);
}
double wave_function_y(double x,double t,double phase,double A,double T,double wave_length){
    double y=0,w,k;
    int l,i;
    w=2*3.14*(1/T);
    k=2*3.14*(1/wave_length);
    printf("t=         ");
    for(int j=0;j<=t;j++){
        printf(" %6.2d ",j);// prints time value at horizontal axis
    }
    printf("\n");
    for(int i=0;i<=x;i++){  // position of different particle at different x cordinte and time
        printf("x=  %6.2d  ",i); // x cordinate values
        for(int l=0;l<=t;l++){ //y at particular x and time varies(x cordinate is fixed for a particle)
            y=A*cos(w*l)*sin(k*i+phase);//y is the position of the particle at(x,t)
            printf(" %6.2lf ",y);//gives the position of particle wave at different time and x cordinate
        }
        printf("\n");
    }
}
