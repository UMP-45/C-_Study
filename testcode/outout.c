#include<stdio.h>                                                                           /*���һԪ���η���*/
#include<math.h>                                                                           
void main()                                                                                  /*������*/
{
	float a,b,c,disc,x1,x2,p,q;
	printf("������a,b,c,�ö��ŷ��룬����aΪ������ϵ����bΪһ����ϵ����cΪ������\n");         /*�������*/
	scanf("%f,%f,%f",&a,&b,&c);                                                              /*���뺯��*/
	printf("����");
	if(fabs(a)<=1e-6)
		printf("����һ��һԪ���η���\n");
	else
	{
		disc=b*b-4*a*c;
		if(fabs(disc)<=1e-6)
			printf("��������ͬʵ����:%8.4f\n",-b/(2*a));
		else
			if(disc>1e-6)
			{
				x1=(-b+sqrt(disc))/(2*a);
				x2=(-b-sqrt(disc))/(2*a);
				printf("����������ʵ����:%8.4f and %8.4f\n",x1,x2);
			}
			else
			{
				p=-b/(2*a);
				q=sqrt(-disc)/(2*a);
				printf("��������ͬ������:\n");
				printf("%8.4f+%8.4fi\n",p,q);
				printf("%8.4f-%8.4fi\n",p,q);
			}
	}
}



