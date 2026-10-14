#include <stdio.h>
#include <math.h> // roundf() fonksiyonu icin eklendi

int main() 
{
    float urun_tutari, odenen_para;
    int kalan, toplam_adet;

    // 1. Girdilerin alinmasi
    printf("Urun tutarini giriniz (TL): ");
    scanf("%f", &urun_tutari);

    printf("Odenen parayi giriniz (TL): ");
    scanf("%f", &odenen_para);

    // 2. Kayan nokta hassasiyeti (float precision) cozumu
    kalan = (int)roundf((odenen_para - urun_tutari) * 100);

    printf("\n--- Para Ustu Raporu ---\n");
    printf("Hesaplanan Toplam Para Ustu: %d Kurus\n\n", kalan);

    // 3. Dongu ve kosul olmadan sirayla bolme ve mod alma
    int adet_200tl = kalan / 20000;
    kalan = kalan % 20000;

    int adet_100tl = kalan / 10000;
    kalan = kalan % 10000;

    int adet_50tl = kalan / 5000;
    kalan = kalan % 5000;

    int adet_20tl = kalan / 2000;
    kalan = kalan % 2000;

    int adet_10tl = kalan / 1000;
    kalan = kalan % 1000;

    int adet_5tl = kalan / 500;
    kalan = kalan % 500;

    int adet_1tl = kalan / 100;
    kalan = kalan % 100;

    int adet_50kr = kalan / 50;
    kalan = kalan % 50;

    int adet_25kr = kalan / 25;
    kalan = kalan % 25;

    int adet_10kr = kalan / 10;
    kalan = kalan % 10;

    int adet_5kr = kalan / 5;
    kalan = kalan % 5;

    int adet_1kr = kalan / 1;
    kalan = kalan % 1;

    // 4. Sonuclarin ekrana yazdirilmasi
    printf("%d adet 200 TL\n", adet_200tl);
    printf("%d adet 100 TL\n", adet_100tl);
    printf("%d adet 50 TL\n", adet_50tl);
    printf("%d adet 20 TL\n", adet_20tl);
    printf("%d adet 10 TL\n", adet_10tl);
    printf("%d adet 5 TL\n", adet_5tl);
    printf("%d adet 1 TL\n", adet_1tl);
    printf("%d adet 50 Kurus\n", adet_50kr);
    printf("%d adet 25 Kurus\n", adet_25kr);
    printf("%d adet 10 Kurus\n", adet_10kr);
    printf("%d adet 5 Kurus\n", adet_5kr);
    printf("%d adet 1 Kurus\n", adet_1kr);

    // 5. Toplam adet hesabi
    toplam_adet = adet_200tl + adet_100tl + adet_50tl + adet_20tl + adet_10tl + adet_5tl + 
                  adet_1tl + adet_50kr + adet_25kr + adet_10kr + adet_5kr + adet_1kr;

    printf("\nVerilen Toplam Kupur/Madeni Para Sayisi: %d adet\n", toplam_adet);

    return 0;
}