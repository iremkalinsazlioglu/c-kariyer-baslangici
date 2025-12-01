#include <stdio.h>

int main() {
    // 1. Bir değişken oluşturuyoruz (RAM'de yer ayrılıyor)
    int score = 10;
    
    // 2. Bu değişkenin ADRESİNİ bir pointer'a kaydediyoruz
    // & işareti "Adresi ver" demektir.
    int* ptr = &score;

    printf("Baslangic Degeri: %d\n", score);

    // 3. Pointer kullanarak o adrese gidip değeri değiştiriyoruz
    // * işareti "Adrese git" demektir.
    *ptr = 20;

    printf("--- Sihir Gerceklesiyor ---\n");
    printf("Yeni Deger (Score): %d\n", score); // Biz score'a dokunmadık ama değişti!
    printf("RAM Adresi: %p\n", ptr); // Bu sayı, verinin ev adresidir.

    return 0;
}