#include<stdio.h>
#include<conio.h>
void main()
{
 int r,c,j,i,a[3][3];
 clrscr();
 printf("Enter Your Row & column size=");
 scanf("%d%d",&r,&c);
 for(i=0;i<r;i++)
 {
   for(j=0;j<c;j++)
   {
    scanf("%d",&a[i][j]);
   }
  }
 for(i=0;i<r;i++)
 {
   for(j=0;j<c;j++)
   {
    printf("%d",a[i][j]);
   }
   printf("\n");
 }

 getch();
}