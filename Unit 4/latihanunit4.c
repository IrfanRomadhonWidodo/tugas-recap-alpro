#include<stdio.h>

int keliling_persegi(int sisi) {
	return 4*sisi;
}

int luas_persegi(int sisi) {
	return sisi*sisi;
}

int volume_kubus(int sisi) {
	return sisi*sisi*sisi;
}
int main(){
	int sisi;
	
	scanf("%d", &sisi);
	printf("keliling perseginya = %d\n", keliling_persegi(sisi));
	printf("luas perseginya = %d\n", luas_persegi(sisi));
	printf("volume kubusnya = %d\n", volume_kubus(sisi));	
}