#include <stdio.h>
int main (){
int angka1, angka2;
    scanf("%d %d", &angka1, &angka2);
    int total = 0;
    for (int i = 1; i <= angka1; i++){
        int baris = 0;
            for (int j = i; j >= 1; j--){
                printf ("(%d * %d)", j, angka2);
                    baris += j * angka2;
                        if (j>1){
                            printf(" + ");
                        }
                    }
                printf(" = %d\n", baris);
                total+=baris;
            }
    printf("%d\n", total);
return 0;   
}