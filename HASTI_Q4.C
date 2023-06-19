#include<stdio.h>
#include<conio.h>

void main(){
int p,r,t,total;
clrscr();
printf("Enter the value of p: ");
scanf("%d",&p);
printf("Enter the value of r: ");
scanf("%d",&r);
printf("Enter the value of t: ");
scanf("%d",&t);
total=p*r*t/100;
printf("total of %d",total);
getch();
}

