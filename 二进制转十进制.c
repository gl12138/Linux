/*
  Name: ����һ��������������Ҫ�������Ӧ��ʮ������ 
  Author: cyzhou
  Description: �ó�������������ÿ�δ��ҵ����ȡ�����������ĸ�λ���� 
  Date: 08-10-04 13:25
  Copyright: 
*/

#include<stdio.h>
#include<math.h>


main()
{
	long int num;/*����Ķ���������*/ 
	long int n;	/*��ǰ����Ķ��������֣����������ȡ���������ĸ�λ����*/
	int sum;	/*ʮ������ֵ*/
	int x;		/*��ǰ��ȡ������*/
  	int p; 		/*��ǰ��ȡ�����ֶ�Ӧ�Ļ��������ҵ�������iλ��Ӧ�Ļ�����2��i-1�η�*/
  	
   	printf("input the decimal num=?\n");
   	scanf("%ld",&num);
	
	/*initialize varible*/
	n=num;
  	p=1;/*�������𣬵�ǰҪ������Ƕ����������ĵ�һλ����Ӧ�Ļ�����2�Ĵη�*/
   	sum=0;
  	
 	/*process*/ 	
   	while (n>0){
    	x=n%10; //ȡ���λ 
    	if (x==1)
    		sum = sum + p;
    		
    	n=n/10;
    	p=p*2;
	}
	
	/*output*/
	printf("��������%ld �൱��ʮ������ %d\n",num,sum);  
   
   	system("pause");
   	return 0;

}  


