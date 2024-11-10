#include<stdio.h>
#include<conio.h>

void main()
{
   int num = 10;
   //int *ptr = &num;
   int *ptr;
   clrscr();
   ptr = &num;
   printf("%u\n",num);
   printf("%u\n",&num);
   printf("%u\n",ptr);
   printf("%u\n",&ptr);
   printf("%u\n",*ptr);
   printf("%u",*&num);
   getch();
}