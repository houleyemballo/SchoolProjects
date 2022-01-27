/*
Program name: Second Degree Polynomial Calculator
Author:Jennifer Cobb
Date:6/3/19
Inputs: Values for a,b,c,xi(initial bound),xf(final bound),and delta x, signified by cx
Outputs: Table of values for f(x), derivative of f(x), and the integral of f(x),
as x increments through the given bound (xi-xf).
Description:Program will create a table of data of the independent variable x versus
vs f(x), f'(x) and F(x).
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


void projectDescription(int i);
void fOfX(double *a, double *b, double *c);

void allCalc(double *a,double *b,double *c,double x,double *xi, double *Area, double *derivVal,double *fOfXVal);



int main(){
int i;
double x=0;
double a,b,c,xi,xf,cx;
double Area;
double derivVal;
double fOfXVal;

projectDescription(i);

printf("Please enter a value for a: ");
scanf("%lf",&a);
printf("%.2lf\n\n",a);

printf("Please enter a value for b: ");
scanf("%lf",&b);
printf("%.2lf\n\n",b);

printf("Please enter a value for c: ");
scanf("%lf",&c);
printf("%.2lf\n\n",c);

printf("Please enter a value for xi: ");
scanf("%lf",&xi);
printf("%.2lf\n\n",xi);

printf("Please enter a value for xf: ");
scanf("%lf",&xf);
printf("%.2lf\n\n",xf);

printf("Please enter a value for cx: ");
scanf("%lf",&cx);
printf("%.2lf\n\n",cx);

fOfX(&a,&b,&c);


for(x=xi;x<=xf;x=x+cx){
    allCalc(&a,&b,&c,x,&xi,&Area,&derivVal,&fOfXVal);
    printf("%.3f\t%.3f\t%.3f\t%.3f\n",x,fOfXVal,derivVal,Area);

}








}

void projectDescription(int i){
printf("Second Degree Polynomial Calculator\n\nUse this program to compute a table of values for the function, its integral \nand its derivative for a second degree polynomial.\n\nThis program is to be used to enter a, b, and c as their respective polynomial coefficients.\nProceed to enter the interval of calculation(xi,xf)\nFinally, enter the value by which to increment(cx).\n\n\n");

}

 void fOfX(double *a, double *b, double *c){

   printf("f(x) = %gx^2 + %gx + %g\n",*a,*b,*c);
   printf("  x\tf(x)\tf'(x)\tA\n");
   printf("-------------------------------\n");
}

void allCalc(double *a,double *b,double *c,double x,double *xi, double *Area, double *derivVal,double *fOfXVal){

double Fx=0;
double Fxi=0;


*fOfXVal=(((*a)*(pow(x,2)))+((*b)*(x))+(*c));

*derivVal=2*(*a)*(x)+(*b);


Fx=(((*a)/3)*(pow(x,3)))+(((*b)/2)*(pow(x,2)))+((*c)*(x));
Fxi=(((*a)/3)*(pow(*xi,3)))+(((*b)/2)*(pow(*xi,2)))+((*c)*(*xi));

*Area=(Fx-Fxi);


}