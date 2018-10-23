/*Mang*/
#include<stdio.h>
int main(){
	int a[50];
	int n; //so phan tu muon nhap vao mang
	printf("Nhap n= ");
	scanf("%d",&n);
	//Nhap gia tri cac phan tu cua mang
	for (int i = 0; i < n; ++i){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
		
	}
	printf("Mang ban vua nhap :\n");
	for (int i = 0; i < n; ++i)
	printf(" a[%d]= %d\n",i,a[i]);
	int tong = 0;
	for(int i = 0; i<n; ++i){
		if(a[i]%2==0)
		tong+=a[i];
			}
			printf("Tong la : %d",tong);
			
	int min,max;
	min = max = a[0];
	for(int i =1; i < n ;++i){
		if (min>a[i]) 
		{	
			min=a[i];
			printf("Gia tri min =%d  ",min);
		}
			
//		if (max<a[i]) 
//		{
//			max=a[i];
//			printf("Gia tri max = %d ",max);
		
//	}
}

	return 0;
}
