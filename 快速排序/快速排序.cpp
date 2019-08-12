// 快速排序.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdio.h> 
void qksort (int *r, int L, int P)//将r[L]至r[P]进行排序 
{int i=L,j=P,x; 
x=r[L]; 
do 
{ while ((r[j]>=x)&&(j>i)) 
j--; //从表尾一端开始比较 
if (i<j) 
{ r[i]=r[j]; i++; 
while ((r[i]<=x)&&(i<j)) 
i++; //再从表的始端起进行比较 
if (i<j) 
{ r[j]=r[i]; j--; } 
} 
} while (i!=j); 
r[i]=x; i++; j--; //一趟快排结束，将x移至正确位置 
if (L<j) qksort(r,L,j); //反复排序前一部分 
if (i<P) qksort(r,i,P); //反复排序后一部分 
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

