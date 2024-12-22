#include <stdio.h>

int main(){
	int a[100];
	int n;
	printf("Nhap so phan tu");
	scanf("%d",&n); 
	for(int i=0;i<n;i++){
		printf("vi tri %d ",i+1);
		scanf("%d",&a[i]); 
	} 
	int them,vitri; 
	printf("Them phan tu ");
	scanf("%d",&them);
	printf("vi tri ") ;
	scanf("%d",&vitri) ;
	for(int i=n;i>=vitri;i--){
		a[i]=a[i-1]; 
	} 
	n++; 
	a[vitri]=them ;
	for(int i=0;i<n;i++){
		printf("%d ",a[i]); 
	} 
	return 0; 
} 
