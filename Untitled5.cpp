#include <stdio.h>
#include<math.h>
int isPrime(int num) {
	if (num <= 1) {
		return 0;
	}
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int a[100];
	int n,b;
	int tong=0;
	int max=a[0];
	int min=a[0];
	int tongso=0;
	int number,sum;
	int them,vitri;
	while(1) {
		printf("MENU");
		printf("\n1.Nhap so ph?n tu can nhap va gia tri cac phan tu");
		printf("\n2.In ra mang");
		printf("\n3.In ra cac phan tu chan va tong");
		printf("\n4.in ra gia tri lon nhat va be nhat");
		printf("\n5.in ra so nguyen to va tong");
		printf("\n6.Nhap vao mot so va thong ke co bao nhieu phan tu do");
		printf("\n7.Them vao phan tu vao vi tri chi dinh");
		printf("\n8.thoat");
		printf("\nlua chon cua ban");
		scanf("%d",&b);
		switch(b) {
			case 1:
				printf("Nhap so phan tu");
				scanf("%d",&n);
				for(int i=0; i<n; i++) {
					printf("vi tri %d ",i+1);
					scanf("%d",&a[i]);
				}
				break;
			case 2:
				for(int i=0; i<n; i++) {
					printf("%d ",a[i]);
				}
				break;
			case 3:

				for(int i=0; i<n; i++) {
					if(a[i]%2==0) {
						printf("%d ",a[i]);
						tong+=a[i];
					}
				}
				printf("\ntong so chan %d",tong);
				break;
			case 4:
				max=a[0];
				for(int i=0; i<n; i++) {
					if(max<a[i])
						max=a[i];
				}
				printf("\nso lon nhat %d",max);
				for(int i=0; i<n; i++) {
					if(min>a[i])
						min=a[i];
				}
				printf("\nso be nhat %d\n",min);
				break;
			case 5:

				for (int i = 0; i < n; i++) {
					if (isPrime(a[i])) {
						printf("%d ", a[i]);
						tongso+=a[i];
					}
				}
				printf("%d",tongso);
				printf("\n");
				break;
			case 6:

				sum=0;
				printf("nhap vao mot so");
				scanf("%d",&number);
				for(int i=0; i<n; i++) {
					if(number==a[i]) {
						sum++;
					}
				}
				printf("%d\n",sum);
				break;
			case 7:

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
			case 8:
				return 0;
				break;
			default:
				printf("lua chon khong hop le");
		}
	}

	return 0;
}

