/*第10题 （10.0分）        题号:995        难度:中        第1章
-------------------------------------------------------
【程序填空】
---------------------------------------------------------

题目：请输入一个大于100的正整数a，将a的百位、十位和个位依
      次放在b的个位、十位和百位上。

      例如：输入"321"，输出"结果是：123"。

-------------------------------------------------------*/
#include <conio.h>
#include <stdio.h>

main ()
{
/***********SPACE***********/
        int a,b;
        printf ("请输入一个大于100的正整数:");
/***********SPACE***********/
        scanf ("%d", &a);
        b=(a%10)*100 + ((a/10)%10)*10 + (a/100)%10;
/***********SPACE***********/
        printf ("结果是: %d\n", b); 
}


