#include<stdio.h>
     #include<conio.h>
     int main()
     {
      long int  a,b,c=1,i;
     clrscr();
     printf("\nEnter the number to find factorial");
     scanf("%ld",&a);
     if(a<0)
     {
     printf("\nNo value");
     }
     else
     {
     for(i=1;i<=a;++i)
     {
     c*=i;
     }
     printf(" the value is %ld",c);
     getch();
     }
     return 0;
     }


