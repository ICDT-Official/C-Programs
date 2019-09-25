#include<stdio.h>
#include<conio.h>


float median(int *arr,int len)
{
 int start_index=0;
 int end_index=len-1;
 float res=-1;
 float median_order;
 if((len%2)!=0)
 {
   median_order=((len+1)/2);
  res=(float)quick_select(arr,start_index,end_index,median_order);
 }
 else
 {
  int median_order1=len/2;
  float a=(float)quick_select(arr,start_index,end_index,median_order1);
  int median_order2=((len/2)+1);
  float b=(float)quick_select(arr,start_index,end_index,median_order2);
  median_order=((a+b)/2);
 }
 return median_order;
}

int quick_select(int *arr,int start_index,int end_index,int order)
{
	return arr[order-1];
}





void main()
{
	int arr[10],n,i;
	float m;
	clrscr();
	printf("Enter the no. of numbers: ");
	scanf("%d",&n);
	puts("Enter the values: ");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	m=median(arr,n);
	printf("%f",m);
	getch();
}
