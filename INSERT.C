#include<stdio.h>
#include<conio.h>
void main()
{
  int size,a[5],i,value,pos;
  clrscr();
  printf("ENTER YOUR ARRAY SIZE==>");
  scanf("%d",&size);
  printf("ENTER YOUR %d VALUE==>",size);
  for(i=0;i<size;i++)
  {
   scanf("%d",&a[i]);
  }
  printf("enter your extra value\n ");
  scanf("%d",&value);

  printf("ENTER YOUR POS==");
  scanf("%d",&pos);
  for(i=size-1;i>=pos;i--)
  {
   a[i+1]=a[i];
  }
  a[pos]=value;
  size++;
  for(i=0;i<size;i++)
  {
    printf("%d\n",a[i]);
  }
  getch();
}
