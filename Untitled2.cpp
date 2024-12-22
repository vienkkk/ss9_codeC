#include <stdio.h>

int main(){
	int a[100];
	int n;
	printf("Nhap so phan tu");
	scanf("%d",&n); 
	for(int i=0;i<n;i++){
		printf("vi tri %d ",i);
		scanf("%d",&a[i]); 
	} 
	int sua,vitri; 
	printf("Sua phan tu  ");
	scanf("%d",&sua);
	printf("vi tri ") ;
	scanf("%d",&vitri) ;
	for(int i=n;i>=vitri;i--){
		a[i]=a[i-1]; 
	}  
	a[vitri]=sua ;
	for(int i=0;i<n;i++){
		printf("%d ",a[i]); 
	} 
	return 0; 
} 
