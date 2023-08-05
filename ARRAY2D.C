#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,a[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
  clrscr();


  for (i=0;i<3;i++)
  {
    for (j=0;j<3;j++)
  {
      printf("%d",a[i][j]);

     }
      printf("\n");

   }

     printf("\n");

    printf("%d",a[2][0]);
  printf("%d",a[0][2]);


  getch();



}