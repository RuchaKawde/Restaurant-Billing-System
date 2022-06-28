#include <stdio.h>
#include <stdlib.h>
int sum=0;
void menu()
{
   printf(":::::MENU::::::\n");
   printf("1.Dosa    40/-\n2.Samosa  30/-\n3.Tea     10/-\n0.Exit\n");
   printf ("Enter your choice:-");
}
int main()
{
   int i=1,a,b,f,g,r,h,m;
   int c=0,d=0,e=0,j,p,t,z;
   printf("                   ::::::::::::::::WELCOME TO HOTEL MANAGEMENT SYSTEM::::::::::::::::::\n");
   while(i)
   {
    menu();
    scanf("%d",&a);
    switch(a)
     {
     case 1:
     printf("1. Dosa-40/-\n");
     printf("How many plates:-");
     scanf("%d",&b);
     c=p+(b*40);
     printf("Anything else you want?\n");
     break;
     case 2:
     printf("2. Samosa-30/-\n");
     printf("How many plates:-");
     scanf("%d",&f);
     d=t+(f*30);
     printf("Anything else you want?\n");
     break;
     case 3:
     printf("3. Tea-10/-\n");
     printf("How many cups:-");
     scanf("%d",&g);
     e=z+(g*10);
     printf("Anything else you want?\n");
     break;
     case 0:
     i=0;
     printf("EXIT\n");
    sum=c+d+e;
 printf("Your bill is:%d\n",sum);
     break;
     }
     p=c; t=d;z=e;
     printf("OK Nice Choice\n");
     }
  printf("Received Cash:");
 scanf("%d",&r);
 h=r-sum;
 printf("Return Cash:%d\n",h);

m=(h/2000);
if(m!=0)
printf("%d note of 2000\n",m);
h=h-(m*2000);
m=h/500;
if(m!=0)
printf("%d note of 500\n",m);
h=h-(m*500);
m=h/200;
if(m!=0)
printf("%d note of 200\n",m);
h=h-(m*200);
m=h/100;
if(m!=0)
printf("%d note of 100\n",m);
h=h-(m*100);
m=h/50;
if(m!=0)
printf("%d note of 50\n",m);
h=h-(m*50);
m=h/20;
if(m!=0)
printf("%d note of 20\n",m);
h=h-(m*20);
m=h/10;
if(m!=0)
printf("%d note of 10\n",m);
h=h-(m*10);
m=h/5;
if(m!=0)
printf("%d note of 5\n",m);
h=h-(m*5);
m=h/2;
if(m!=0)
printf("%d note of 2\n",m);
h=h-(m*2);
m=h/1;
if(m!=0)
printf("%d note of 1\n",m);
}

