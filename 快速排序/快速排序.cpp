// ��������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<stdio.h> 
void qksort (int *r, int L, int P)//��r[L]��r[P]�������� 
{int i=L,j=P,x; 
x=r[L]; 
do 
{ while ((r[j]>=x)&&(j>i)) 
j--; //�ӱ�βһ�˿�ʼ�Ƚ� 
if (i<j) 
{ r[i]=r[j]; i++; 
while ((r[i]<=x)&&(i<j)) 
i++; //�ٴӱ��ʼ������бȽ� 
if (i<j) 
{ r[j]=r[i]; j--; } 
} 
} while (i!=j); 
r[i]=x; i++; j--; //һ�˿��Ž�������x������ȷλ�� 
if (L<j) qksort(r,L,j); //��������ǰһ���� 
if (i<P) qksort(r,i,P); //���������һ���� 
}//qksort 
void main() 
{ 
int i; 
int a[10]={29,54,31,38,85,79,60,43,76,97}; 
qksort(a,0,9); 
for(i=0;i<10;i++) 
printf("%d\n",a[i]); 
scanf("%d", &a);
}

