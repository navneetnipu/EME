#include<stdio.h>
#include<math.h>
int main(){
    // c rprogram to convert  cartesian coordinate to polar cordinate
    double x,y,theta,r; // x,y,theta,r variable declaration as double
    double polar(double x,double y);// polar function declaration
    double cartesian(double r,double theta);//cartesian function declaration
    int choice;
    
    printf("enter your choice: 1 to conver into polar,2 to convert into cartesian");//choice scan by user
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("enter the value of x and y cordinate\n");//receiving x and y cordinate from user
             printf("x:");
             scanf("%lf",&x);
             printf("\n");
             printf("y:");
            scanf("%lf",&y);
            printf("\n");
            polar(x,y);//call of polar function
            break;
        case 2:
            printf("r:");
            scanf("%lf",&r);
            printf("\n");
            printf("theta:");
            scanf("%lf",&theta);
            printf("\n");
            cartesian(r,theta);//call of cartesian function
            break;
        default:
            printf("enter valid choice");
            
    }
    return 0;
}
// polar function definition
double polar(double x,double y){
    double theta,r;
    theta=atan(y/x);
    r=sqrt(y*y+x*x);
    printf("theta is:%lf\nr is %lf\n",theta,r);
}
// cartesian function definition
double cartesian(double r,double theta){
    double x,y;
    x=r*cos(theta);
    y=r*sin(theta);
    printf("x cortdinate is :%lf\ny cordinate is :%lf\n",x,y);
}