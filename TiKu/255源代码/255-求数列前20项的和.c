/*第6题 （10.0分）        题号:981        难度:中        第7章
-------------------------------------------------------
【程序填空】
---------------------------------------------------------

题目：一个数列是：3/5,5/7,7/9,9/11,...求这个数列前20项的和。

-------------------------------------------------------*/
#include<stdio.h>
main()
{int i;
  /***********SPACE***********/
float a=3.0,b=5.0,s=0.0;
  /***********SPACE***********/
for(i=0;i<20;i++)
{
  /***********SPACE***********/
s=s+a/b;
  /***********SPACE***********/
a=a+2;
  /***********SPACE***********/
b=b+2;
}
printf("s=%7.2f\n",s);
}

