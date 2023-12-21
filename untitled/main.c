#include <stdio.h>

void matrisboyutu(int *satir, int *sutun) {
    printf("Matrisin satir sayisini girin: ");
    scanf("%d", satir);

    printf("Matrisin sutun sayisini girin: ");
    scanf("%d", sutun);
}

void matrisigir(int satir, int sutun, int matris[satir][sutun]) {
    printf("  Matris elemanlarini girin:\n");

    for (int i = 0; i < satir; i++) {
        for (int j = 0; j < sutun; j++) {
            printf("Matris[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matris[i][j]);
        }
    }
}


void matristoplamı(int satir, int sutun, int matris1[satir][sutun], int matris2[satir][sutun], int sonuc[satir][sutun]) {
    for (int i = 0; i < satir; ++i) {
        for (int j = 0; j < sutun; ++j) {
            sonuc[i][j] = matris1[i][j] + matris2[i][j];
        }
    }
}


void matrisiyazdir(int satir, int sutun, int matris[][sutun]) {
    printf("Matris:\n");

    for (int i = 0; i < satir; ++i) {
        for (int j = 0; j < sutun; ++j) {
            printf("%d\t", matris[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int satir, sutun;
    matrisboyutu(&satir, &sutun);

    int matris1[satir][sutun];
    matrisigir(satir, sutun, matris1);
    matrisboyutu(&satir, &sutun);

    int matris2[satir][sutun];
    matrisigir(satir, sutun, matris2);

    int sonuc[satir][sutun];
    matristoplamı(satir, sutun, matris1, matris2, sonuc);
    printf("\nMatris Toplam:\n");
    matrisiyazdir(satir, sutun, sonuc);

    return 0;
}


