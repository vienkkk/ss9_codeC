#include <stdio.h>

int main() {
	while(1) {
		int b,vitri; 
		printf("MENU\n");
		printf("1.Nhap vao mang\n");
		printf("2.Hien thi mang\n");
		printf("3.Them phan tu\n");
		printf("4.Sua phan tu\n");
		printf("5.Xoa phan tu \n") ;
		printf("6.Thoat\n") ;
		printf(" Lua chon cua ban:");
		scanf("%d",&b);
		switch(b) {
			case 1:
				int a[100];
				int n;
				printf("Nhap so phan tu");
				scanf("%d",&n);
				for(int i=0; i<n; i++) {
					printf("vi tri %d ",i);
					scanf("%d",&a[i]);
				}
				break; 
			case 2:
				for(int i=0; i<n; i++) {
					printf("%d ",a[i]);
				}
				printf("\n"); 
				break; 
			case 3:
				int them;
				printf("Them phan tu ");
				scanf("%d",&them);
				printf("vi tri ") ;
				scanf("%d",&vitri) ;
				for(int i=n; i>=vitri; i--) {
					a[i]=a[i-1];
				}
				n++;
				a[vitri]=them ;
				break; 
			case 4:
				int sua;
				printf("Sua phan tu  ");
				scanf("%d",&sua);
				printf("vi tri ") ;
				scanf("%d",&vitri) ;
				for(int i=n; i>=vitri; i--) {
					a[i]=a[i-1];
				}
				a[vitri]=sua ;
				break; 
			case 5:
				int vitri;
				printf("vi tri can xoa  ") ;
				scanf("%d",&vitri) ;
				for(int i=vitri; i<n-1; ++i) {
					a[i]=a[i+1];
				}
				n--;
				break; 
			case 6:
				return 0; 
				break;
			default:
				printf("lua chon khong hop le");
		}
	}
	return 0;
}
