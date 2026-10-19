#include <stdio.h>
int main (){
int angkaA, angkaB;
    scanf("%d %d", &angkaA, &angkaB);
    int total = angkaA+angkaB;
if (angkaA<angkaB){
    for (int i = angkaA; i <= angkaB; i++){
        int angka_pasangan=total-i;
        printf("%d %d", i, angka_pasangan);
        if (i<angkaB){
            printf(" - ");
        }
    }
}
else{
    for (int i = angkaA; i >= angkaB; i--){
        int angka_pasangan=total-i;
        printf("%d %d", i, angka_pasangan);
        if (i>angkaB){
            printf(" - ");
        }
    }
}
printf("\n");
return 0;
}