/*Bai tap Mang
1: Nhập mảng
2: In mảng
3: Giai thừa
4: Chuỗi
5: Tính tiền điện */
#include<stdio.h>
#include<conio.h>
#include<string.h>
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

long giaithua (int n)
{	int i;
    long giaithua = 1;
    printf("\n Nhap n: ");
    scanf("%d", &n);
    for( i = 1; i <= n; ++i)
    {
        giaithua=giaithua*i;
    }
    printf("\n Giai thua la:  %ld\n", giaithua);
       
}
int chuoi(char chuoi[200]){
	int i=0,dodai;
	printf("Nhap vao chuoi bat ky :");
	scanf("%s",chuoi); //khong doc ki tu trang
	printf("Chuoi da nhap la : %s",chuoi);

	dodai= strlen(chuoi);
	printf("\nSo ki tu cua chuoi: %d", dodai);
	
}

double TienDien(int csm,int csc){
	float tien,socu,somoi;
	printf("Nhap chi so moi : \n");
	scanf("%f",& somoi);
	printf("Nhap chi so cu :\n");
	scanf("%f",& socu);
	if (somoi > socu){
		int tieuthu=somoi-socu;
		if ( tieuthu< 50)
		{ 
		tien=tieuthu*1500;
		printf("tien dien la : %f",tien);
		}
		else if (tieuthu>=50 && tieuthu<100)
		{ 
		tien=50*1500+(tieuthu-50)*2000;
		printf("tien dien la : %f",tien);
		}
		else {
			tien=50*1500+100*2000+(tieuthu-150)*3000;
			printf("tien dien la : %f",tien);
		}
		}
	else 
	printf(" Co the ban da sai ! Vui long kiem tra lai \n + goi y : So moi < So cu --> Error");
	
}
int main(){
	int mang[100];
	char c [200];
	int csm,csc;
	int n;//so phan tu muon nhap vao mang
	printf("Nhap n= ");
	scanf("%d",&n);
	NhapMang(mang,n);
	InMang(mang,n);
	chuoi(c);
	giaithua(n);
	TienDien(csm,csc);
	return 0;
}
