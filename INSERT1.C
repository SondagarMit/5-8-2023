#include<stdio.h>
#include<conio.h>
void main()
{
  int size,a[10],i,value,pos;
  clrscr();
  printf("Enter Your Array Value: ");
  scanf("%d",&size);
  printf("Enter your %d Value: ",size);

   for (i=0;i<size;i++)
   {
    scanf("%d",&a[i]);
   }

   printf("Enter Your Extra Value: ");
   scanf("%d",&value);
   printf("Enter Your positon: ");
   scanf("%d",&pos);

     for (i=size-1;i>=pos;i--)
     {
       a[i+1]=a[i];

     }
       a[pos]= value;
       size++;

       for (i=0;i<size;i++)
       {

	 printf("%d",a[i]);

       }
  getch();
}