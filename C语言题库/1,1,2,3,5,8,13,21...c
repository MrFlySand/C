/*第6题 （10.0分）        题号:961        难度:中        第7章
-------------------------------------------------------
【程序填空】
---------------------------------------------------------

斐波那契数列的前几项是：1,1,2,3,5,8,13,21...。编程输出该
数列，直到某项的值大于1000为止，每行输出10个。请将源程序
补充完整。

-------------------------------------------------------*/
#include <stdio.h>
main()
{
  int a=1,b=1,c,i;
  printf("%-6d%-6d",a,b);
  for(i=3;;i++)
  {
    c=a+b;   
   /***********SPACE***********/
     if(c>1000)  break;
   /***********SPACE***********/
     a=b;
   /***********SPACE***********/
     b=c;
   /***********SPACE***********/
     printf("%-6d",c);
     if(i%10==0)
   /***********SPACE***********/
     printf("\n");
   }
}
 

