void Pancawara(int jumlahHari)
{
    switch (jumlahHari % 5)
    {
    case 0:
        printf("UMANIS ");
        break;
    case 1:
        printf("PAHING ");
        break;
    case 2:
        printf("PON ");
        break;
    case 3:
        printf("WAGE ");
        break;
    case 4:
        printf("KLIWON ");
        break;
    default:
        printf("ERROR");
        break;
    }
}

void Wuku(float inputTanggal, float inputBulan, float inputTahun)
{
    float x, y, z, a, b;
    int c;
    x = (inputBulan - 1) * 4;
    y = inputTanggal / 7;
    if (y <= 0.499)
        floor(y);
    else
        ceil(y);
    z = x + y;
    {
        if (inputTahun == 1995)
            a = z + 20;
        else if (inputTahun == 1996)
            a = z + 13;
        else if (inputTahun == 1997)
            a = z + 5;
        else if (inputTahun == 1998)
            a = z + 27;
        else if (inputTahun == 1999)
            a = z + 19;
        else if (inputTahun == 2000)
            a = z + 11;
        else if (inputTahun == 2001)
            a = z + 4;
        else if (inputTahun == 2002)
            a = z + 26;
        else if (inputTahun == 2003)
            a = z + 18;
        else if (inputTahun == 2004)
            a = z + 10;
        else if (inputTahun == 2005)
            a = z + 2;
        else if (inputTahun == 2006)
            a = z + 24;
        else if (inputTahun == 2007)
            a = z + 17;
        else if (inputTahun == 2008)
            a = z + 9;
        else if (inputTahun == 2009)
            a = z + 1;
        else if (inputTahun == 2010)
            a = z + 23;
    }
    {
        if (a > 30 && a < 60)
            b = a - 30;
        else if (a > 60)
            b = (a - 60) + 1;
        else
            b = a;
    }
    {
        if (inputBulan == 1)
            c = b - 1;
        else if (inputBulan == 2)
            c = b;
        else if (inputBulan == 3)
            c = b;
        else if (inputBulan == 4)
            c = b;
        else if (inputBulan == 5)
            c = b;
        else if (inputBulan == 6)
            c = b + 1;
        else if (inputBulan == 7)
            c = b + 1;
        else if (inputBulan == 8)
            c = b + 1;
        else if (inputBulan == 9)
            c = b + 1;
        else if (inputBulan == 10)
            c = b + 2;
        else if (inputBulan == 11)
            c = b + 2;
        else if (inputBulan == 12)
            c = b + 2;
    }
    switch (c)
    {
    case 1:
        printf("SINTA");
        break;
    case 2:
        printf("LANDEP");
        break;
    case 3:
        printf("UKIR");
        break;
    case 4:
        printf("KULANTIR");
        break;
    case 5:
        printf("TOLU");
        break;
    case 6:
        printf("GUMBREG");
        break;
    case 7:
        printf("WARIGA");
        break;
    case 8:
        printf("WARIGADIAN");
        break;
    case 9:
        printf("JULUNGWANGI");
        break;
    case 10:
        printf("SUNGSANG");
        break;
    case 11:
        printf("DUNGULAN");
        break;
    case 12:
        printf("KUNINGAN");
        break;
    case 13:
        printf("LANGKIR");
        break;
    case 14:
        printf("MADANSIA");
        break;
    case 15:
        printf("PUJUT");
        break;
    case 16:
        printf("PAHANG");
        break;
    case 17:
        printf("KELURUT");
        break;
    case 18:
        printf("MERAKIH");
        break;
    case 19:
        printf("TAMBIR");
        break;
    case 20:
        printf("MADANGKUNGAN");
        break;
    case 21:
        printf("MAKTAL");
        break;
    case 22:
        printf("UYE");
        break;
    case 23:
        printf("MANAHIL");
        break;
    case 24:
        printf("PRANGBAKAT");
        break;
    case 25:
        printf("BALA");
        break;
    case 26:
        printf("UGU");
        break;
    case 27:
        printf("WAYANG");
        break;
    case 28:
        printf("KELAWU");
        break;
    case 29:
        printf("DUKUT");
        break;
    case 30:
        printf("WATUGUNUNG");
        break;
    default:
        printf("ERROR");
    }
}