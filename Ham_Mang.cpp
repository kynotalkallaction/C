/*Ham mang*/
#include<stdio.h>
#include<conio.h>
void  NhapMang(int arr[100],int n){
	int i;
	for ( i = 0; i < n; ++i){
		printf("a[%d] = ",i);
		scanf("%d",& arr[i]);		
	}
}
void InMang(int arr[100],int n){
	printf("Mang ban vua nhap :\n");
	for (int i = 0; i < n; ++i)
	printf(" a[%d]= %d\n",i,arr[i]);
}

int TongCacSoChan(int arr[100],int n ){
	int tong = 0;
	for(int i = 0; i<n; ++i){
		if(arr[i]%2==0)
		tong+=arr[i];
			}
			printf("Tong la : %d",tong);
}
int TimMax(int arr[100],int n){
	int max=arr[0];
	for(int i = 0; i<n; ++i)
		if (max < arr[i] ) max = arr[i];
	{
		printf("Gia tri max= %d",max);
	}
	
	}
int main(){
	int mang[100];
	int n;//so phan tu muon nhap vao mang
	printf("Nhap n= ");
	scanf("%d",&n);
	NhapMang(mang,n);
	InMang(mang,n);
	TongCacSoChan(mang,n);
	TimMax(mang,n);
	return 0;
}
