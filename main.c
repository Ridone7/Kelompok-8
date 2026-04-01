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

void Mencari_Diskon(){
    int hargaAwal, hargaAkhir, diskon;

    printf("Masukkan harga awal: ");
    scanf("%d", &hargaAwal);

    printf("Masukkan presentase diskon: ");
    scanf("%d", &diskon);

    hargaAkhir = hargaAwal-(hargaAwal*diskon/100);

    printf("Harga Akhir: %d", hargaAkhir);
    return 0;
}
