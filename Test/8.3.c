#include <stdio.h>
void main( )
{
  int f1(int);                      
	  int n;
  printf("������һ��������");      
  scanf("%d",&n);                  
  if(f1(n))                       
	  printf("%d��һ������:\n",n);
  else
     printf("%d����һ������:\n",n);
}
int f1(int n)               
{
	int i,m=1;
    	for (i=2;i<n/2 && m==1;i++)    
			if(n%i==0)
				m=0;
				return(m);          
}

 