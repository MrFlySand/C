/*第6题 （10.0分）        题号:1062        难度:中        第7章
-------------------------------------------------------
【程序填空】
---------------------------------------------------------

题目：找出一个大于给定整数m且紧随m的素数，并作为函数值返回。

-------------------------------------------------------*/
#include<conio.h>
#include<stdio.h>
int fun(int m)
{
  int i,k;
/***********SPACE***********/
  for(i=m+1;;i++)
  {
    for(k=2;k<i;k++)
/***********SPACE***********/
      if(i%k==0)
        break;
/***********SPACE***********/
    if(k>=i)
/***********SPACE***********/
      return(i);
  }
}
main()
{
  int n;
  printf("\nPlease enter n:");
  scanf("%d",&n);
/***********SPACE***********/
  printf("%d\n",fun(n));
}



