/*第4题 （10.0分）        题号:979        难度:中        第7章
-------------------------------------------------------
【程序填空】
---------------------------------------------------------

功能：用下面的公式求pi的近似值。直到最后一项的绝对值小于
指定的数（参数num)为止。
pi/4=1-1/3+1/5-1/7+......
例如：程序支行后，输入0.0001,则程序输出3.1414

-------------------------------------------------------*/
#include<stdio.h>
  /***********SPACE***********/
float fun(float num){
	printf("%f\n",num);
	int n=1,sign=1;
	float sum=0.0,t=1.0;
	  /***********SPACE***********/
	while(t>num){
	  sum+=sign*t;
	  /***********SPACE***********/
	  sign=(-1)*sign;
	  n += 2;
	  /***********SPACE***********/
	  t=1.0/n;
	}
	return sum*4;
}
main()
{
float num=0.0001;
printf("pi=%.4f\n",fun(num));
}


