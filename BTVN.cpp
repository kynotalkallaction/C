#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void NhapMang(float *arr, int n){
	for (int i= 0; i<n; i++){
		printf("Nhap vao  a[%d]: ", i);
		scanf("%f",(arr+i));
	}
}

float AmDauTien(float *arr, int n)
{
   for (int i=0; i<n; i++)
      if (arr[i]<0) 
	  return arr[i];
}


int DemPhanTuAm (float *arr, int n) {
	int	dem = 0;
	for ( int i = 0 ; i < n ; i++){
	if(arr[i] <-10 )
		dem++;	
	}
	printf("\nSo phan tu am be hon -10 trong mang la: %d",dem);
}

float TinhTong_TrungBinh(float *arr, int n){
	float k, s=0;
	for (int i=0; i<n;i+=2){
		s=s+arr[i];
	}
	printf("\nTong cac phan tu o vi tri chan : %.0f", s);
	k=s/(n/2);
	printf("\nTrung binh = %f", (float)k);
}

int main(){
	int n;
	/*De cap phat vung nho cho con tro , ta dùng cac ham sau trong thu vien stlib.h.
	- malloc : (ten con tro) = (kieu con tro *) malloc ( sizeof (kieu con tro ) );
	- calloc : (ten con tro) = (kieu con tro *) malloc ( n, sizeof (kieu con tro ) );
	chú thích: -trong do, sizeof(kieu con tro) la kich thuoc cua kieu 
				- n la so lan cua sizeof(kieu con tro) duoc cap
*/

    float *p=(float *) malloc (10*sizeof(float));
	printf("Nhap n: ");
	scanf("%d",&n);
	NhapMang(p,n);
	
	/* So Am Dau Tien */
	float s = AmDauTien(p,n);
	if (s!=0) printf("So am dau tien la: %.0f",s);
    else printf("Ko co so am");
    
    /* Dem Phan Tu Am < -10 */
    int dem=DemPhanTuAm(p,n);
     /*Tinh Tong*/
    TinhTong_TrungBinh(p,n);
    /*Tinh Trung Binh*/
   
}
