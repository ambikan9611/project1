#include<stdio.h>
int main()
{
  int x,y;
  printf("enter the value x&y");
  scanf("%d%d",&x,&y);
  if((x>=0)&&(y>=0))
  {
    printf("lies the first qurt");
  }
   if((x<=0)&&(y>=0))
  {
    printf("lies the second qurt");
  }
  if((x<=0)&&(y<=0))
  {
    printf("lies in third qurt");
  }
  if((x>=0)&&(y<=0))
  {
    printf("lies the fourth qurt");

  }
   else if((x==0)&&(y==0))
  {
     printf("lies the  origin");
  }
}
