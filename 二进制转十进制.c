/*
  Name: 输入一个二进制整数，要求输出对应的十进制数 
  Author: cyzhou
  Description: 用除法和求余运算每次从右到左获取二进制整数的各位数字 
  Date: 08-10-04 13:25
  Copyright: 
*/

#include<stdio.h>
#include<math.h>


main()
{
	long int num;/*输入的二进制数字*/ 
	long int n;	/*当前处理的二进制数字，自右向左获取二进制数的各位数字*/
	int sum;	/*十进制数值*/
	int x;		/*当前获取的数字*/
  	int p; 		/*当前获取的数字对应的基数。从右到左数第i位对应的基数是2的i-1次方*/
  	
   	printf("input the decimal num=?\n");
   	scanf("%ld",&num);
	
	/*initialize varible*/
	n=num;
  	p=1;/*从右数起，当前要处理的是二进制整数的第一位，对应的基数是2的次方*/
   	sum=0;
  	
 	/*process*/ 	
   	while (n>0){
    	x=n%10; //取最低位 
    	if (x==1)
    		sum = sum + p;
    		
    	n=n/10;
    	p=p*2;
	}
	
	/*output*/
	printf("二进制数%ld 相当于十进制数 %d\n",num,sum);  
   
   	system("pause");
   	return 0;

}  


