#include <stdio.h>

float phi = 3.141592653589793238462643383279502884197;

int main(){
    printf("%f\n", phi);
    printf("%.1f\n", phi);
    printf("%.2f\n", phi);
    printf("%.3f\n", phi);
    printf("%.4f\n", phi);
    printf("%.5f", phi);
    return 0;
}// titik menginterpretasikan jumlah angka/huruf yang ingin dioutputkan,
// dalam kasus tipe data float, titik digunakan untuk menampilkan jumlah angka dibelakang
// koma yang diiinginkan. berlaku juga untuk tipe data string