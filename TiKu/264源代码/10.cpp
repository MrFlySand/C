/*第10题 （10.0分）        题号:1076        难度:中        第7章
-------------------------------------------------------
【程序填空】
---------------------------------------------------------

题目：功能：求0-7这8个数字所能组成的奇数个数。

-------------------------------------------------------*/
#include <stdio.h>
main()
{
/***********SPACE***********/

long sum=4,s=4;
  int j;
/***********SPACE***********/
  for(j=2;j<=8;j++)
  {
    if(j<=2)
/***********SPACE***********/
      s*=7;
    else
/***********SPACE***********/
      s*=8;

/***********SPACE***********/

    sum+=s;
  }
  printf("\nsum=%ld",sum);
}

