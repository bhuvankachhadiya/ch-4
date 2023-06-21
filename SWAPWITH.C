#include<stdio.h>
#include<conio.h>
main()
{
 int a,b,c;
 printf("ENTER VALUE OF A=");
 scanf("%d",&a);
 printf("ENTER VALUE OF B=");
 scanf("%d",&b);
 c=a;
 a=b;
 b=c;
 printf("swapping value of A=%d\n",a);
 printf("swapping value of B=%d",b);
 getch();
 }