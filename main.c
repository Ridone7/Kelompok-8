#include <stdio.h>

// fungsi 4
void Kalkulator_Sisa_Uang_Jajan_Harian() {
    float uSaku, pengeluaran, sisaU;

    printf("Masukkan uang saku: ");
    scanf("%f", &uSaku);

    printf("Masukkan pengeluaran: ");
    scanf("%f", &pengeluaran);

    sisaU = uSaku - pengeluaran;

    printf("Sisa uang saku = %.2f\n", sisaU);
}

int main() {
    int pilihan;

    printf("=================================\n");
    printf("ASISTEN KEUANGAN MAHASISWA\n");
    printf("=================================\n");

    printf("Pilih menu:\n");
    printf("1. Kalkulator diskon belanja\n");
    printf("2. Kalkulator split bill\n");
    printf("3. Kalkulator bunga tabungan\n");
    printf("4. Kalkulator sisa uang jajan harian\n");

    printf("Masukkan pilihan: ");
    scanf("%d", &pilihan);

    switch(pilihan) {
        case 4:
            Kalkulator_Sisa_Uang_Jajan_Harian();
            break;
        default:
            printf("Menu belum tersedia.\n");
    }

    return 0;
}