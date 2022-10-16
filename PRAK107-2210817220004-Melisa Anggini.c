#include <stdio.h>

int main()
{
    int a, b, c, keliling, harga, hargapagar;
    a = 4;
    b = 5;
    c = 7;
    keliling = a+b+c;
    harga = 85000;
    hargapagar = keliling * harga;

    printf("Diketahui: \nPanjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n",a, b, c);
    printf("Keliling Tanah Pak Dengklek Adalah %d\n", keliling);
    printf("Harga tanah Per Meter adalah %d\n", harga);
    printf("Jawaban : \nBiaya yang diperlukan Pak Dengklek adalah : Rp%d\n", hargapagar);
}
