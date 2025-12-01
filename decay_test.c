#include <stdio.h>

//bu fonksiyon dizinin boyutunu ölçmeye çalışıcak
void ajan_fonksiyon(int gelen_dizi[])
{
    // burada dizi artık çürüdü ve pointer oldu
    printf("Fonksiyonun icinde bouyt (Byte): %d\n", (int)sizeof(gelen_dizi));
}

int main()
{
  //5 elemanlı bir dizi yani her int 4 byte ise toplam 20 byte olmalı
   int gizli_veriler[5]= {1, 2, 3, 4, 5};

   printf("---Gerçek Boyut---\n");
   //Main içinde dizi hala "dizi"dir.
   printf("Main icinde boyut (Byte): %d\n", (int)sizeof(gizli_veriler));

   printf("--- Fonksiyona Gonderiliyor ---\n");
    ajan_fonksiyon(gizli_veriler);

    return 0;

}