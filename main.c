#include <stdio.h>
#include <stdlib.h>

/// CREATED BY
/// HANIF YULI ABDILLAH P | A11.2017.10105 | UNIVERSITAS DIAN NUSWANTORO
/// instgram : @hanifabdlh

int main()
{

///OPENING
    int open;

    for(open=0 ; open<=10001 ; open++)
    {
        printf("00101100101101000101110");
    }
    system("cls");
    printf("FILE (RUMUS_konversisuhu) DITEMUKAN ! \n\n");
    system("pause");
    system("cls");

    puts("");
    printf("SELAMAT DATANG DI PROGRAM KONVERSI SUHU MATA KULIAH FISIKA 1 UNIVERSITAS DIAN NUSWANTORO !!!\n");
    puts("");
    printf("            *********  ***  *********  ***   ***   ***   *******        **** \n");
    printf("            *********  ***  *********  ***   ***  ***   *********      ***** \n");
    printf("            ***        ***  ***        ***   *** ***    ***   ***        *** \n");
    printf("            *********  ***  *********  ***   ******     ***   ***        *** \n");
    printf("            *********  ***  *********  ***   ******     *********        *** \n");
    printf("            ***        ***        ***  ***   *** ***    *********        *** \n");
    printf("            ***        ***  *********  ***   ***  ***   ***   ***        *** \n");
    printf("            ***        ***  *********  ***   ***   ***  ***   ***       *****\n");
    puts("");
    printf("SELAMAT DATANG DI PROGRAM KONVERSI SUHU MATA KULIAH FISIKA 1 UNIVERSITAS DIAN NUSWANTORO !!!\n");
    puts("");
    system("pause");
    system("cls");
    goto pilihan;

///PROGRAM
    int pilih;
    float cel, rea, fah, kel;
    char ulangi;

    pilihan:
    printf("Pilih Data Yang Akan Anda Masukan :");
    printf("\n1. Celcius \n2. Reamur \n3. Fahrenheit \n4. Kelvin\n\n");
    printf("Pilih : ");scanf("%i", &pilih);
    if(pilih==1)
    {
        goto celcius;
    }
    else if(pilih==2)
    {
        goto reamur;
    }
    else if(pilih==3)
    {
        goto fahrenheit;
    }
    else if(pilih==4)
    {
        goto kelvin;
    }
    else
    {
        printf("Tidak Ada Dalam Pilihan, Coba Ulangi Lagi !!!\n\n");
        system("pause");
        system("cls");
        goto pilihan;
    }


///Rumus Konversi dan Output
    ///Celcius
    celcius:
    printf("\nMasukan Suhu Dalam Celcius : ");scanf("%f", &cel);
    rea=cel*0.8;
    printf("\nSuhu Dalam Reamur       : %.2f", rea);
    fah=cel*1.8+32;
    printf("\nSuhu Dalam Fahrenheit   : %.2f", fah);
    kel=cel+273;
    printf("\nSuhu Dalam Kelvin       : %.2f\n\n", kel);
    system("pause");
    goto ulang;

    ///Reamur
    reamur:
    printf("\nMasukan Suhu Dalam Reamur : ");scanf("%f", &rea);
    cel=rea*1.25;
    printf("\nSuhu Dalam Celcius      : %.2f", cel);
    fah=rea*2.25+32;
    printf("\nSuhu Dalam Fahrenheit   : %.2f", fah);
    kel=cel+273;
    printf("\nSuhu Dalam Kelvin       : %.2f\n\n", kel);
    system("pause");
    goto ulang;

    ///Fahrenheit
    fahrenheit:
    printf("\nMasukan Suhu Dalam Fahrenheit : ");scanf("%f", &fah);
    cel=(fah-32)*0.555555556;
    printf("\nSuhu Dalam Celcius      : %.2f", cel);
    rea=(fah-32)*0.444444444;
    printf("\nSuhu Dalam Reamur       : %.2f", rea);
    kel=cel+273;
    printf("\nSuhu Dalam Kelvin       : %.2f\n\n", kel);
    system("pause");
    goto ulang;

    ///Kelvin
    kelvin:
    printf("\nMasukan Suhu Dalam Kelvin : ");scanf("%f", &kel);
    cel=kel-273;
    printf("\nSuhu Dalam Celcius      : %.2f", cel);
    rea=cel*0.8;
    printf("\nSuhu Dalam Reamur       : %.2f", rea);
    fah=cel*1.8+32;
    printf("\nSuhu Dalam Fahrenheit   : %.2f\n\n", fah);
    system("pause");
    goto ulang;


///Apakah Ingin Input Lagi
    ulang:
    fflush(stdin);
    printf("\n\nApakah Anda Ingin Input Lagi ? (y/n)  ");scanf("%c", &ulangi);
    if(ulangi=='y')
    {
        system("cls");
        goto pilihan;
    }
    else if(ulangi=='n')
    {
        system("cls");
        printf("Terima Kasih Telah Menggunakan Program Kami, Sampai Jumpa !!!");
        puts("");
        printf("@hanifabdlh");
        puts("");
    }
    else
    {
        printf("Pilihan Anda Tidak Valid");
    }

    return 0;
}
