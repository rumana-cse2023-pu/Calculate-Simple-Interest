
#include<stdio.h>
int main(){

float principle, time, rate, SI;
// Input principle, Rate and Time.

printf("Enter Principle (Amount): ");
scanf("%f", &principle);

printf("Enter Time: ");
scanf("%f", &time);

printf("Enter Rate: ");
scanf("%f", &rate);

SI = (principle + time + rate)/100;

printf("Simple Interest(SI) is = %f", SI);








return 0;
}
