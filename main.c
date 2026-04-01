#include <stdio.h>

int main() {
    float saldoAwal, bungaBulanan, totalUang, jumlahBunga;

    // Input saldo awal
    printf("Masukkan saldo awal: ");
    scanf("%f", &saldoAwal);

    // Input persentase bunga bulanan
    printf("Masukkan persentase bunga bulanan: ");
    scanf("%f", &bungaBulanan);

    // Menghitung jumlah bunga
    jumlahBunga = saldoAwal * bungaBulanan / 100;

    // Menghitung total uang setelah ditambah bunga
    totalUang = saldoAwal + jumlahBunga;

    // Output hasil
    printf("\nJumlah bunga: Rp %.2f\n", jumlahBunga);
    printf("Total uang setelah ditambah bunga: Rp %.2f\n", totalUang);

    return 0;
}
