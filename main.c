#include <stdio.h>

// nizarAnggota2
void splitBill() {
    float totalTagihan;
    int jumlahOrang;
    float bayarPerOrang;

    printf("=== Kalkulator Split Bill ===\n");
    
    printf("Masukkan total tagihan: ");
    scanf("%f", &totalTagihan);

    printf("Masukkan jumlah orang: ");
    scanf("%d", &jumlahOrang);

    if (jumlahOrang <= 0) {
        printf("Jumlah orang harus lebih dari 0!\n");
        return;
    }

    bayarPerOrang = totalTagihan / jumlahOrang;

    printf("Setiap orang harus membayar: Rp %.2f\n", bayarPerOrang);
}

int main() {
    splitBill();
    return 0;
}