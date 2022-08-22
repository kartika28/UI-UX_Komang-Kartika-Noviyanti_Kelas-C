#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "kepribadian.h"

int cekTahun(int tahun)
{
    int jmlHari;
    if (tahun % 400 == 0)
    {
        jmlHari = 366;
    }
    else if (tahun % 100 == 0)
    {
        jmlHari = 365;
    }
    else if (tahun % 4 == 0)
    {
        jmlHari = 366;
    }
    else
    {
        jmlHari = 365;
    }
    return jmlHari;
}

int cekBulan(int bulan, int tahun)
{
    int bln[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (cekTahun(tahun) == 366)
    {
        bln[1] = 29;
    }
    return bln[bulan - 1];
}

void Saptawara(int jumlahHari)
{
    switch (jumlahHari % 7)
    {
    case 0:
        printf("REDITE ");
        break;
    case 1:
        printf("SOMA ");
        break;
    case 2:
        printf("AGGARA ");
        break;
    case 3:
        printf("BUDA ");
        break;
    case 4:
        printf("WRASPATI ");
        break;
    case 5:
        printf("SUKRA ");
        break;
    case 6:
        printf("SANISCARA ");
        break;
    }
}