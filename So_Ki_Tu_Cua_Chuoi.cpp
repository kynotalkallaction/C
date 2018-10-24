#include<stdio.h>
#include<conio.h>
#include<string.h>
int chuoi(char chuoi[200]){
	
	int i=0, dodai;
	printf("Nhap vao chuoi bat ky :");
	//scanf("%s",chuoi); //khong doc ki tu trang
	gets(chuoi); //doc ca dong
	dodai = strlen(chuoi);	
	printf("Chuoi da nhap la : ",chuoi);
	puts(chuoi);
	printf("So ki tu cua chuoi: %d", dodai);
}

int main(){
	char Ch[100];
	chuoi(Ch);
}
