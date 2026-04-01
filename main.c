#include <stdio.h>

int main() {
    printf("=================================\n");
    printf("ASISTEN KEUANGAN MAHASISWA\n");
    printf("=================================\n");

   printf("pilih menu: \n");

    printf("1. Kalkulator diskon belanja\n");
    printf("2. Kalkulator split bill\n");
    printf("3. Kalkulator kalkulator bunga tabungan\n");
    printf("4. Kalkulator kalkulator sisa uang jajan harian\n");
    return 0;
}
#include <stdio.h>

int main() {
    int pilihan;
    float saldoAwal, bungaBulanan, totalUang, jumlahBunga;

    printf("=================================\n");
    printf("ASISTEN KEUANGAN MAHASISWA\n");
    printf("=================================\n");

    printf("Pilih menu:\n");
    printf("1. Kalkulator diskon belanja\n");
    printf("2. Kalkulator split bill\n");
    printf("3. Kalkulator bunga tabungan\n");
    printf("4. Kalkulator sisa uang jajan harian\n");

    printf("\nMasukkan pilihan: ");
    scanf("%d", &pilihan);

    switch(pilihan) {
        case 1:
            printf("\nMenu Kalkulator Diskon Belanja belum tersedia.\n");
            break;

        case 2:
            printf("\nMenu Kalkulator Split Bill belum tersedia.\n");
            break;

        case 3:
            printf("\n=== Kalkulator Bunga Tabungan ===\n");

            printf("Masukkan saldo awal: ");
            scanf("%f", &saldoAwal);

            printf("Masukkan persentase bunga bulanan: ");
            scanf("%f", &bungaBulanan);

            jumlahBunga = saldoAwal * bungaBulanan / 100;
            totalUang = saldoAwal + jumlahBunga;

            printf("\nJumlah bunga: Rp %.2f\n", jumlahBunga);
            printf("Total uang setelah ditambah bunga: Rp %.2f\n", totalUang);
            break;

        case 4:
            printf("\nMenu Kalkulator Sisa Uang Jajan Harian belum tersedia.\n");
            break;

        default:
            printf("\nPilihan tidak valid.\n");
    }

    return 0;
}