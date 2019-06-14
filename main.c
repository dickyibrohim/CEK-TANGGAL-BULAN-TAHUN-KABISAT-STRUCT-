#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0
#define boolean unsigned char
boolean isDateValid(int d, int m, int y);
// DICKY IBROHIM
typedef struct
{
    int DD;
    int MM;
    int YY;
} Date;
void kabisat (Date YY);
// FUNGSI STRUCT
Date makeDate (int d, int m, int y)
{
    Date Tanggal;
    if (isDateValid(d,m,y))
    {
        Tanggal.DD= d;
        Tanggal.MM= m;
        Tanggal.YY= y;
    }
    else
    {
        Tanggal.DD= 0;
        Tanggal.MM= 0;
        Tanggal.YY= 0;
    }
return Tanggal;
}

/// BOLEAN
//Apakah Tanggal Valid?
boolean isDateValid (int d, int m, int y)
{

// Kondisi mulai yang benar
    if ((m==2)&&(d>0&&d<30))
    {
        return true;
    }
    else if ((d>0&&d<=30)&&(m==4||m==6||m==9||m==11))
    {

        return true;

    }
        else if ((d>0&&d<32)&&(m==1||m==3||m==5||m==7||m==8||m==10||m==12))
    {

       return true;

    }
      else
    {
       return false;
    }



}

// KABISAT OR NOT
void kabisat (Date YY)
{
 if (YY.YY!=0)
    {
    if ((YY.YY%400==0) || (YY.YY%4==0 && YY.YY%100!=0))
        {

                printf ("* Tahun Kabisat\n\n");
            }
            else
            {
                printf ("* Bukan tahun Kabisat\n\n");
            }
    }
    else
    {
       printf ("* Wrong type\n\n");
    }
}

// PRINT BIASANYA DENGAN VOID
// DICKY IBROHIM
// Cek tanggal, Bulan, Tahun KABISAT
void PrintDate (Date P)
{
    printf ("%d/%d/%d\n", P.DD, P.MM, P.YY);

}
int main()
{
    // BUAT VARIABLE STRUCT
    Date D, D1, D2;
    D= makeDate(30, 2, 2012);
    D1= makeDate(30,4, 2013);
    D2= makeDate(29, 2, 2012);

    PrintDate(D);
    kabisat (D);
    PrintDate(D1);
    kabisat (D1);
    PrintDate(D2);
    kabisat (D2);

    return 0;
}
/*
#include <stdio.h>
#include <stdlib.h>
// KISI-KISI 1 UAS ALPRO
typedef struct
{
    int DD;
    int MM;
    int YY;
} Date;

// FUNGSI STRUCT
Date makeDate (int d, int m, int y)
{

    Date Tanggal;
// Kondisi mulai yang benar
if ((m==2)&&(d>0&&d<30))
{
    {
        Tanggal.DD= d;
        Tanggal.MM= m;
        Tanggal.YY= y;
    }
}
    else if ((d>0&&d<30)&&(m==4||m==6||m==9||m==11))
    {

        Tanggal.DD= d;
        Tanggal.MM= m;
        Tanggal.YY= y;

    }
        else if ((d>0&&d<32)&&(m==1||m==3||m==5||m==7||m==8||m==10||m==12))
    {

        Tanggal.DD= d;
        Tanggal.MM= m;
        Tanggal.YY= y;

    }
      else
    {
        Tanggal.DD= 0;
        Tanggal.MM= 0;
        Tanggal.YY= 0;
    }



    return Tanggal;
}

// PRINT BIASANYA DENGAN VOID
void PrintDate (Date P)
{
    printf ("%d/%d/%d\n", P.DD, P.MM, P.YY);

}
int main()
{
    // BUAT VARIABLE STRUCT
    Date D, D1;
    D= makeDate(29, 2, 1945);
    D1= makeDate(33,2, 1945);
    PrintDate(D);
    PrintDate(D1);

    return 0;
}
*/
