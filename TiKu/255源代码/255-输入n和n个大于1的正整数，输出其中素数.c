/*第1题 （10.0分）        题号:976        难度:中        第7章
-------------------------------------------------------
【程序填空】
---------------------------------------------------------

题目：以下程序输入n和n个大于1的正整数，输出其中素数。
      如输入：5  19  93  11  37  15    则输出：19  11  37
      例示说明：先输入n为5，再输入5个正整数，输出5个整数中的素数

-------------------------------------------------------*/
#include <stdio.h>
void main()
{
        int  n, a, i, j, ct;
        /***********SPACE***********/
        scanf( "%d",&n);
        /***********SPACE***********/
        for ( i=0;i<n; i++ )
        {
                /***********SPACE***********/
                 ct=0;
                scanf( "%d", &a );
                for( j=2; j<a; j++ )
                        /***********SPACE***********/
                        if (a%i==0)
                                ct++;
                /***********SPACE***********/
                if ( ct==0 )
                        printf( "%d  ", a );
        }
        printf( "\n" );
}

