#include <stdio.h>

#include <conio.h>

 main()
 
 {
    int sayi1, sayi2, i, j, asal, toplam = 0;

    printf("Birinci sayiyi gir: ");
    scanf("%d", &sayi1);

    printf("Ikinci sayiyi gir: ");
    scanf("%d", &sayi2);

    for (i = sayi1 + 1; i < sayi2; i++) {
        asal = 1;

        if (i <= 1) {
            asal = 0;
        } else {
            for (j = 2; j < i; j++) {
                if (i % j == 0) {
                    asal = 0;
                }
            }
        }

        if (asal == 1) {
            toplam = toplam + i;
        }
    }

    printf("Toplam = %d\n", toplam);

    getch();
}
