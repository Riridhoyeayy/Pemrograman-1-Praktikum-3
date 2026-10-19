#include <stdio.h>
int main (){
int pilihan;
float nilai_pertama, nilai_kedua;
do {
    printf("\n");
    printf("Pilih program\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Exit\n");
    printf("Masukkan Pilihan : ");
    scanf("%d", &pilihan);
    if (pilihan==5){
        break;
    } else if (pilihan <1 || pilihan >4){
        printf("Input anda salah, silahkan coba lagi\n");
            continue;
    }  
        printf("Masukkan nilai pertama : ");
            scanf("%f", &nilai_pertama);
        printf("Masukkan nilai kedua : ");
            scanf("%f", &nilai_kedua);
                float penjumlahan=nilai_pertama+nilai_kedua;
                float pengurangan=nilai_pertama-nilai_kedua;
                float perkalian=nilai_pertama*nilai_kedua;
                float pembagian=nilai_pertama/nilai_kedua;
        if (pilihan==1){
            printf("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f\n", nilai_pertama, nilai_kedua, penjumlahan);
        } else if (pilihan==2){
            printf("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n", nilai_pertama, nilai_kedua, pengurangan);
        } else if (pilihan==3){
            printf("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n", nilai_pertama, nilai_kedua, perkalian);
        } else if (pilihan==4){
            printf("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n", nilai_pertama, nilai_kedua, pembagian);
        } 
    } while (pilihan != 5);
    printf("Terimakasih, telah menggunakan kalkulator Muhammad Ridho Ridhani!");
return 0;
}