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
	int vitri; 
	printf("vi tri can xoa  ") ;
	scanf("%d",&vitri) ;
	for(int i=vitri;i<n-1;++i){
		a[i]=a[i+1]; 
	}  
	n--; 
	for(int i=0;i<n;i++){
		printf("%d ",a[i]); 
	} 
	return 0; 
} 
