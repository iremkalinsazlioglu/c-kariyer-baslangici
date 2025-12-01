#include <stdio.h>
int main()
{
//radaraımızdan gelen 3 ardışık veri(mesafe bilgisi gibi)
int radar_data[3] = {100, 250, 500};

//dizinin başlangıç adresini bir pointer'a atıyoruz
//DİKKAT!: dizilerin ismi zaten başlangıç adresidir, '&' koymaya gerek yoktur!
int*ptr = radar_data;

printf("---Radar Taramasi Basliyor---\n");

//1. veri
printf("1. Hedef mesafesi; %d\n",*ptr);

//2. veriye gidebilmek için  Pointerı bir adım ileri taşıyoruz
//Bilgisayar int 4 byte olduğu için ototmatik olarak 4 adım atlar
ptr++;
printf("2. Hedef mesafesi: %d\n", *ptr);

//3. veriye gitmek
ptr++;
printf("3. Hedef mesafesi: %d\n", *ptr);

return 0;

}