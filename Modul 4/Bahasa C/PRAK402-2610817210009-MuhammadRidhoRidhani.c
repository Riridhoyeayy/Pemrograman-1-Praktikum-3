#include <stdio.h>
int main (){
int angka;
    scanf("%d", &angka);
for (int i=1; i<=angka; i+=2){
    printf("%d ", i);
}
printf("\n");
int awal=angka;
    if (awal % 2 != 0){
        awal=awal - 1;
    }
for (int i=awal; i>=2; i-=2){
    printf("%d ", i);
}
    return 0;
}