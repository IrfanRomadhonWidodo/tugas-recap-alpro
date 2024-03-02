#include <stdio.h>

int main() {
    int jml_transaksi, nominal, total_pengeluaran=0;
    scanf("%d", &jml_transaksi);

    if (jml_transaksi <= 0) {
        printf("Tidak ada transaksi hari ini\n");
    }

    for (int i = 0; i < jml_transaksi; i++) {
        scanf("%d", &nominal);
        total_pengeluaran += nominal;
    }

    printf("%d\n", total_pengeluaran);

    return 0;
}


