#include<stdio.h>                                                        /*�α�278ҳ10.3*/
void main()                                                              /*������*/
{
	void input(int * );                                                  /*�Ժ����Ķ���*/
	void max_min(int * );
	void output(int * );
	int a[10];	input(a);	max_min(a);	output(a);
}
void input(int a[])                                                     /*����ʮ�����ĺ���*/
{
	int i;
	printf("������ʮ�������м��ÿո����\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
}
void max_min(int a[])                      
{
	int * max, * min, * p,t;
	max=min=a;
	for(p=a+1;p<a+10;p++)
		if( * p> * max)max=p;                                          /*�������ĵ�ַ��max*/
		else if( * p< * min)min=p;                                     /*��С���ĵ�ַ��min*/
		t=a[0];a[0]= * min; * min=t;                                   /*����С�����һ�����ֽ���*/
		t=a[9];a[9]= * max; * max=t;                                    /*������������һ�����ֽ���*/
}
void output(int a[])                                                   /*�������*/
{
	int * p;
	printf("�µ�����˳��\n");
	for(p=a;p<a+10;p++)
		printf("%d ", * p);
	printf("\n");
}
