void input()
{
    int i;
    int inputTahun = 0;
    int inputBulan = 0;
    int inputTanggal = 0;
    int totalHari = 0;
    int error = 0;
    char seperator[2];

    printf("\n\t Tanggal lahir (dd-mm-yyyy) 				: ");
    scanf("%d%c%d%c%d", &inputTanggal, &seperator[0], &inputBulan, &seperator[1], &inputTahun);

    if (inputTahun < 1900)
    {
        error = 1;
    }
    if (inputBulan == 0 || inputBulan > 12)
    {
        error = 1;
    }
    if (inputTanggal == 0 || inputTanggal > cekBulan(inputBulan, inputTahun))
    {
        error = 1;
    }
    if (seperator[0] != '-')
    {
        error = 1;
    }
    if (seperator[1] != '-')
    {
        error = 1;
    }
    if (error == 0)
    {
        for (i = 1900; i < inputTahun; i++)
        {
            totalHari += cekTahun(i);
        }
        for (i = 1; i < inputBulan; i++)
        {
            totalHari += cekBulan(i, inputTahun);
        }
        totalHari += inputTanggal;

        printf("\n=======================================================================================================================================================================\n");
        printf("\nTanggal %d-%d-%d jatuh pada hari : ", inputTanggal, inputBulan, inputTahun);
        Saptawara(totalHari);
        Pancawara(totalHari);
        Wuku(inputTanggal, inputBulan, inputTahun);
        printf("\n");
    }
    else
    {
        printf("\nHanya bisa mengecek tanggal dari tahun 1995 sampai 2010 sehingga format input tanggal yang anda masukkan salah!\n");
    }
}

void kepribadian()
{
    int pilihan;
    printf("\n\n1. REDITE PAHING    6. SUKRA PAING     11. BUDA PAHING      16. SOMA PAHING     21. SANISCARA PAHING     26. WRASPATI PAHING     31. ANGGARA PAHING\n");
    printf("2. SOMA PON         7. SANISCARA PON   12. WRASPATI PON     17. ANGGARA PON     22. REDITE PON           27. SUKRA PON           32. BUDA PON\n");
    printf("3. ANGGARA WAGE     8. REDITE WAGE     13. SUKRA WAGE       18. BUDA WAGE       23. SOMA WAGE            28. SANISCARA WAGE      33. WRASPATI WAGE\n");
    printf("4. BUDA KLIWON      9. SOMA KLIWON     14. SANISCARA KLIWON 19. WRASPATI KLIWON 24. ANGGARA KLIWON       29. REDITE KLIWON       34. SUKRA KLIWON\n");
    printf("5. WRASPATI UMANIS  10. ANGGARA UMANIS 15. REDITE UMANIS    20. SUKRA UMANIS    25. BUDA UMANIS          30. SOMA UMANIS         35. SANISCARA UMANIS\n\n");
    printf("Mohon pilih kembali hari kelahiran anda :D\n");
    printf("\nPilihan: ");
    scanf("%d", &pilihan);
    printf("\nKepribadian anda: ");
    switch (pilihan)
    {
    case 1:
        reditePahing();
        break;
    case 2:
        somaPon();
        break;
    case 3:
        anggaraWage();
        break;
    case 4:
        budaKliwon();
        break;
    case 5:
        wraspatiUmanis();
        break;
    case 6:
        sukraPahing();
        break;
    case 7:
        saniscaraPon();
        break;
    case 8:
        rediteWage();
        break;
    case 9:
        somaKliwon();
        break;
    case 10:
        anggaraUmanis();
        break;
    case 11:
        budaPahing();
        break;
    case 12:
        wraspatiPon();
        break;
    case 13:
        sukraWage();
        break;
    case 14:
        saniscaraKliwon();
        break;
    case 15:
        rediteUmanis();
        break;
    case 16:
        somaPahing();
        break;
    case 17:
        anggaraPon();
        break;
    case 18:
        budaWage();
        break;
    case 19:
        wraspatiKliwon();
        break;
    case 20:
        sukraUmanis();
        break;
    case 21:
        saniscaraPahing();
        break;
    case 22:
        reditePon();
        break;
    case 23:
        somaWage();
        break;
    case 24:
        anggaraKliwon();
        break;
    case 25:
        budaUmanis();
        break;
    case 26:
        wraspatiPahing();
        break;
    case 27:
        sukraPon();
        break;
    case 28:
        saniscaraWage();
        break;
    case 29:
        rediteKliwon();
        break;
    case 30:
        somaUmanis();
        break;
    case 31:
        anggaraPahing();
        break;
    case 32:
        budaPon();
        break;
    case 33:
        wraspatiWage();
        break;
    case 34:
        sukraKliwon();
        break;
    case 35:
        saniscaraUmanis();
        break;
    default:
        printf("Maaf, pilihan yang anda masukkan tidak ada");
    }
}

int main()
{
    char nama[30], alamat[30], tmpt[30], status[30];
    int pil, ulang;
    do
    {
        system("cls");
        printf("\n==============================================================::::PROGRAM MENGETAHUI KEPRIBADIAN SESEORANG:::===========================================================\n");
        printf("\n Pilihan Menu Program : \n");
        printf("\n\t 1. Input Data\n");
        printf("\n\t 2. Lihat Kepribadian\n");
        printf("\n\t 3. Keluar\n");
        printf("\n\n Masukan Pilihan Anda : ");
        scanf("%d", &pil);
        fflush(stdin);
        printf("\n========================================================================================================================================================================\n");
        switch (pil)
        {
        case 1:
            printf("\n\n Masukkan Data Diri : \n");
            printf("\n\t Nama 							: ");
            gets(nama);
            fflush(stdin);
            printf("\n\t Alamat 						: ");
            gets(alamat);
            fflush(stdin);
            printf("\n\t Tempat lahir 						: ");
            gets(tmpt);
            fflush(stdin);
            printf("\n\t Status (Kawin/Belum)					: ");
            gets(status);
            fflush(stdin);
            input();
            break;
        case 2:
            printf("\n\t Nama 							: %s\n", nama);
            printf("\n\t Alamat 						: %s\n", alamat);
            printf("\n\t Tempat lahir 						: %s\n", tmpt);
            printf("\n\t Status (Kawin/Belum)					: %s\n", status);
            kepribadian();
            break;
        case 3:
            printf("\n\t\t\t\t\t\t\t\t Terima kasih telah menggunakan program ini\n");
            exit(0);
            break;
        default:
            printf("\n\t\t\t\t\t\t\t\t Pilihan yang Anda inputkan tidak tersedia");
            printf("\n\t\t\t\t\t\t\t\t  Silahkan inputkan kembali pilihan Anda");
            break;
        }
        printf("\n=======================================================================================================================================================================\n");
        printf("\n\n Apakah Anda ingin kembali ke Menu Awal ? \n");
        printf("\n\t 1.Ya\n");
        printf("\n\t 2.Tidak\n");
        printf("\n Masukkan pilihan anda : ");
        scanf("%i", &ulang);
    } while (ulang == 1);
}