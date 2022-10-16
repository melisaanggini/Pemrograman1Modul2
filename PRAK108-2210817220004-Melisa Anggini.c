#include <stdio.h>

int main()
{
    float kel,tempuh,phi,jari2;
    phi = 3.14;
    kel = 5;
    tempuh = 14;
    jari2 = (tempuh/kel)*0.5/phi;
    printf("Diketahui :\nPak Dengklek mengelilingi taman = 5 Putaran\n");
    printf("Jarak tempuh Pak Dengklek = 14 Kilometer\n");
    
    printf("\nJawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n",jari2);
}
