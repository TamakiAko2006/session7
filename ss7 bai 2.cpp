#include<stdio.h>

int main(){
	int a[5];
	
	for(int i=0;i<5;i++){
		printf("moi ban nhap gia tri cua mang \n");
		scanf("%d",&a[i]);
	}
	for(int i=0;i<5;i++){
		printf("%d = %d\n",i,a[i]);
	}
	return 0;
}
