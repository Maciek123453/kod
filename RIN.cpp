//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "RIN.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
        int iterator_dlugosc=1;
        int liczba_znakow=1;
        int sumy_mnozenia_i_dzielenia[300];
        int liczbanaw1=0;
        int liczbanaw2=0;
        int poz_naw1[200];
        int poz_naw2[200];
        float  sumy[50];
        int iteratornaw1=0;
        int iteratornaw2=0;
        int liczba_znak[100];
        int iterator=0;
        do
        {
        liczba_znak[iterator]=1;
        iterator++;
        }
        while(iterator<100);
        AnsiString lancuchy[300];
        AnsiString Operacje[300];
        AnsiString wyrazy[300];
        AnsiString napisponaw;
        int iterator_znaki=0;
        int iteratorwb2=1;
        int iteratorwb=1;
        int iterator_wyrazy=0;
        AnsiString NAPIS;
        AnsiString litery="aAbBcCdDeEfFgGhHiIjJkKmMnNoOpPrRlLsStTuUwWxXyYzZvVqQ";
        if((Edit1->Text[2]!='|')&&(Edit1->Text[1]=='|')&&(Edit1->Text[Edit1->Text.Length()]=='|'))
        {
            NAPIS=Edit1->Text.SubString(1,Edit1->Text.Length()-1);
        }
        do
        {
             iteratorwb++;
        }
        while(Edit1->Text[iteratorwb]=='|');
        if(Edit1->Text[1]!='|')
        {
              NAPIS=Edit1->Text;
        }
        iteratorwb2=iteratorwb+1;
        if((Edit1->Text[iteratorwb]!='|')&&(Edit1->Text[1]=='|')&&(Edit1->Text[Edit1->Text.Length()]=='|'))
        {
        do
        {
                 iteratorwb2++;
        }
        while(Edit1->Text[iteratorwb2]!='|');
        if(Edit1->Text[iteratorwb2]=='|')
        {
            NAPIS=Edit1->Text.SubString(iteratorwb,iteratorwb2-iteratorwb);
            ShowMessage(NAPIS);
        }
        }
        int iterator_litery=1;
        char Znaki[300][300][300];
        int iterator_litery2=1;
        int koniec=0;
        char znaki2[300];
        int iterator_znak=1;
        int iterator_znak2=1;
        int pozycja=0;
        int CharReapeat=0;
        do
        {
        do
        {
        do
        {
                 if((Edit1->Text[iterator_dlugosc]==litery[iterator_litery])&&(Znaki[iterator_dlugosc][iterator_znak][1]==litery[iterator_litery]))
                 {
                 do
                 {
                 if(litery[iterator_litery]!=znaki2[iterator_znak2])
                 {
                     CharRepeat=1;
                 }
                 iterator_znak2++;
                 }
                 while(iterator_znak2<iterator_znak);
                 if((CharRepeat==1)&&(iterator_znak2==iterator_znak))
                 {
                    Znaki[iterator_dlugosc][iterator_znak][iterator_litery2]=litery[iterator_litery];
                    pozycja=iterator_dlugosc;
                    iterator_litery2++;
                 }
                 }
                 iterator_litery++;
                 }
                 while(iterator_litery<=litery.Length());
                 if((iterator_litery==litery.Length())
                 {
                 iterator_dlugosc++;
                 iterator_litery=1;
             }
             }
             while(iterator_dlugosc<=Edit1->Text.Length());
             if(iterator_dlugosc==Edit1->Text.Length())
             {
                 znaki2[iterator_znak]=Znaki[pozycja][iterator_znak][1];
                 iterator_znak++;
                 iterator_dlugosc=1;
             }
             iterator_dlugosc=1;
             }
             while(CharRepeat==0);
             do
             {
             if(NAPIS[iterator_dlugosc]=='(')
             {
                 poz_naw1[iteratornaw1]=iterator_dlugosc;
                 iteratornaw1++;
             }
             if(NAPIS[iterator_dlugosc]==')')
             {
                 poz_naw2[iteratornaw2]=iterator_dlugosc;
                 iteratornaw2++;
             }
             if((iterator_dlugosc>1)&&(NAPIS[iterator_dlugosc-1]==')')&&(NAPIS[iterator_dlugosc]=='*')&&(NAPIS[iterator_dlugosc+1]=='('))
             {
                 Operacje[iterator_znaki]="Mnozenie";
                 iterator_znaki++;
             }
             if((iterator_dlugosc>1)&&(NAPIS[iterator_dlugosc-1]==')')&&(NAPIS[iterator_dlugosc]=='+')&&(NAPIS[iterator_dlugosc+1]=='('))
             {
                 Operacje[iterator_znaki]="Dodawanie";
                 iterator_znaki++;
             }
             if((iterator_dlugosc>1)&&(NAPIS[iterator_dlugosc-1]==')')&&(NAPIS[iterator_dlugosc]=='/')&&(NAPIS[iterator_dlugosc+1]=='('))
             {
                 Operacje[iterator_znaki]="Dzielenie";
                 iterator_znaki++;
             }
             if((iterator_dlugosc>1)&&(NAPIS[iterator_dlugosc-1]==')')&&(NAPIS[iterator_dlugosc]=='-')&&(NAPIS[iterator_dlugosc+1]=='('))
             {
                 Operacje[iterator_znaki]="Odejmowanie";
                 iterator_znaki++;
             }
             iterator_dlugosc++;
             }
             while(iterator_dlugosc<=NAPIS.Length());
             int pojemnik_na_znaki[200][200];
             int iteratornaw3=0;
             if((iteratornaw1!=0)&&(iteratornaw2!=0))
             {
             if(iteratornaw1==iteratornaw2)
             {
             int pojemnik_na_znakidod[300];
             do
             {
                  lancuchy[iteratornaw3]=NAPIS.SubString(poz_naw1[iteratornaw3]+1,poz_naw2[iteratornaw3]-poz_naw1[iteratornaw3]-1);
                  iteratornaw3++;
             }
             while(iteratornaw3<iteratornaw2);
             napisponaw=Edit1->Text.SubString(poz_naw2[iteratornaw2-1]+1,Edit1->Text.Length()-poz_naw2[iteratornaw2-1]-1);
             ShowMessage(napisponaw);
             }
     iteratornaw2=0;
     AnsiString poj_nagid[300][300];
     iterator_dlugosc=1;
     int poj_na_od[300][100];
     int poj_na_znaki[200];
     int iteratorgp=1;
     int iteratorgd=1;
     int poczatekop[200][200];
     int iteratorop=1;
     int iteratorop2=1;
     int iteratorgdz2=1;
     int iterator_sumidz=1;
     int sumamnidz[100][100];
     AnsiString napisywb[300];
     int sumamnozidz[200];
     do
     {
        sumamnidz[iteratornaw2][iterator_sumidz]=1;
        iterator_sumidz++;
     }
     while(iterator_sumidz<100);
     do
     {
        poj_na_od[iteratornaw2][iteratorgp]=1;
        iteratorgp++;
     }
     while(iteratorgp<=300);
     do
     {
         poczatekop[iteratornaw2][iteratorop]=1;
         iteratorop++;
     }
     while(iteratorop<=200);
     do
     {
     do
     {
     if(lancuchy[iteratornaw2][iterator_dlugosc]=='*')
     {
          pojemnik_na_znaki[iteratornaw2][liczba_znakow]=iterator_dlugosc;
          liczba_znakow++;
     }
     if(lancuchy[iteratornaw2][iterator_dlugosc]=='-')
     {
          pojemnik_na_znaki[iteratornaw2][liczba_znakow]=iterator_dlugosc;
          liczba_znakow++;
     }
     if(lancuchy[iteratornaw2][iterator_dlugosc]=='/')
     {
          pojemnik_na_znaki[iteratornaw2][liczba_znakow]=iterator_dlugosc;
          liczba_znakow++;
     }
     if(lancuchy[iteratornaw2][iterator_dlugosc]=='+')
     {
          pojemnik_na_znaki[iteratornaw2][liczba_znakow]=iterator_dlugosc;
          liczba_znakow++;
     }
     if(lancuchy[iteratornaw2][iterator_dlugosc]=='/')
     {
          poj_na_od[iteratornaw2][iteratorgd]++;
     }
     iterator_dlugosc++;
     }
     while(iterator_dlugosc<lancuchy[iteratornaw2].Length());
     int liczba_znakow2=1;
     int iteratorGWD=1;
     do
     {
     if((iteratorgdz2==1)&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2]]=='*')&&(iteratorGWD==1)&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][1]]!='+')&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][1]]!='-'))
     {
         sumamnidz[iteratornaw2][iteratorgdz2]=atof(lancuchy[iteratornaw2].SubString(0,pojemnik_na_znaki[iteratornaw2][liczba_znakow2]).c_str())*atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znakow2]+1,pojemnik_na_znaki[iteratornaw2][liczba_znakow2+1]-pojemnik_na_znaki[iteratornaw2][liczba_znakow2]-1).c_str());
     }
     if((iteratorgdz2==1)&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2]]=='/')&&(iteratorGWD==1)&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][1]]!='+')&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][1]]!='-'))
     {
         sumamnidz[iteratornaw2][iteratorgdz2]=atof(lancuchy[iteratornaw2].SubString(0,pojemnik_na_znaki[iteratornaw2][liczba_znakow2]).c_str())*atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znakow2]+1,pojemnik_na_znaki[iteratornaw2][liczba_znakow2+1]-pojemnik_na_znaki[iteratornaw2][liczba_znakow2]-1).c_str());
     }
     if((lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][1]]!='/')&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][1]]!='*')&&(iteratorGWD==1)&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2]]=='*')&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]]!='*')&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]]!='/'))
     {
         sumamnidz[iteratornaw2][iteratorgdz2]=atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]+1,pojemnik_na_znaki[iteratornaw2][liczba_znakow2]-pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]-1).c_str())*atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znakow2]+1,pojemnik_na_znaki[iteratornaw2][liczba_znakow2+1]-pojemnik_na_znaki[iteratornaw2][liczba_znakow2]-1).c_str());
         ShowMessage(AnsiString(atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znakow2]+1,pojemnik_na_znaki[iteratornaw2][liczba_znakow2+1]-pojemnik_na_znaki[iteratornaw2][liczba_znakow2]-1).c_str())));
     }
     if((lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][1]]!='/')&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][1]]!='*')&&(iteratorGWD==1)&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2]]=='/')&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]]!='*')&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]]!='/'))
     {
          sumamnidz[iteratornaw2][iteratorgdz2]=atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]+1,pojemnik_na_znaki[iteratornaw2][liczba_znakow2]-pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]-1).c_str())/atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znakow2]+1,pojemnik_na_znaki[iteratornaw2][liczba_znakow2+1]-pojemnik_na_znaki[iteratornaw2][liczba_znakow2]-1).c_str());
     }
     }
     if((iteratorGWD>1)&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2]]=='*')&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]]!='+')&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]]!='-'))
     {
          sumamnidz[iteratornaw2][iteratorgdz2]=sumamnidz[iteratornaw2][iteratorgdz2]*atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znakow2]+1,pojemnik_na_znaki[iteratornaw2][liczba_znakow2+1]-pojemnik_na_znaki[iteratornaw2][liczba_znakow2]-1).c_str());
          lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]+1,pojemnik_na_znaki[iteratornaw2][liczba_znakow2]-pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]-1);
     }
     if((iteratorGWD>1)&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2]]=='/')&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]]!='+')&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]]!='-'))
     {
          sumamnidz[iteratornaw2][iteratorgdz2]=sumamnidz[iteratornaw2][iteratorgdz2]/atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znakow2]+1,pojemnik_na_znaki[iteratornaw2][liczba_znakow2+1]-pojemnik_na_znaki[iteratornaw2][liczba_znakow2]-1).c_str());
          lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]+1,pojemnik_na_znaki[iteratornaw2][liczba_znakow2]-pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]-1);
     }
     if((liczba_znakow2>1)&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]]!='-')&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]]!='+')&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2]]!='*')&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2]]!='/'))
     {
          ShowMessage(sumamnidz[iteratornaw2][iteratorgdz2]);
          sumy_mnozenia_i_dzielenia[iteratornaw2]=sumy_mnozenia_i_dzielenia[iteratornaw2]+sumamnidz[iteratornaw2][iteratorgdz2];
          iteratorGWD=1;
          iteratorgdz2++;
     }
     if(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2]]=='*')
     {
          iteratorGWD++;
     }
     if(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2]]=='/')
     {
          iteratorGWD++;
     }
     liczba_znakow2++;
     }
     while(liczba_znakow2<liczba_znakow);
     if((iterator_dlugosc==lancuchy[iteratornaw2].Length())&&(liczba_znakow2==liczba_znakow))
     {
          poj_na_znaki[iteratornaw2]=liczba_znakow2;
          iterator_dlugosc=1;
          liczba_znakow=1;
          liczba_znakow2=1;
          iteratorop2=1;
          iteratorgdz2=1;
     }
     ShowMessage(sumy_mnozenia_i_dzielenia[iteratornaw2]);
     iteratornaw2++;
   }
   while(iteratornaw2<iteratornaw3);
   iteratornaw2=1;
   iterator_dlugosc=1;
   int liczba_znakowite=1;
   do
   {
       iteratornaw2++;
   }
   while(iteratornaw2<iteratornaw3);
   int drugiiteratornaw2=0;
   int sumy_nawiasow[400];
   do
   {
   do
   {
   if ((lancuchy[drugiiteratornaw2][1]!='/')&&(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][1]]!='/')&&(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][1]]!='*')&&(liczba_znak[drugiiteratornaw2]==1))
   {
        sumy[drugiiteratornaw2]=sumy[drugiiteratornaw2]+atof(lancuchy[drugiiteratornaw2].SubString(0,pojemnik_na_znaki[drugiiteratornaw2][1]).c_str());
   }
   if ((lancuchy[drugiiteratornaw2][1]=='-')&&(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][1]]!='/')&&(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][1]]!='*')&&(liczba_znak[drugiiteratornaw2]==1))
   {
        sumy[drugiiteratornaw2]=sumy[drugiiteratornaw2]+atof(lancuchy[drugiiteratornaw2].SubString(0,pojemnik_na_znaki[drugiiteratornaw2][2]).c_str());
   }
   if((liczba_znak[drugiiteratornaw2]>0)&&(liczba_znak[drugiiteratornaw2]<poj_na_znaki[drugiiteratornaw2]-1)&&(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][liczba_znak[drugiiteratornaw2]]]=='+')&&(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][liczba_znak[drugiiteratornaw2]+1]]!='*')&&(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][liczba_znak[drugiiteratornaw2]+1]]!='/'))
   {
        sumy[drugiiteratornaw2]=sumy[drugiiteratornaw2]+atof(lancuchy[drugiiteratornaw2].SubString(pojemnik_na_znaki[drugiiteratornaw2][liczba_znak[drugiiteratornaw2]]+1,pojemnik_na_znaki[drugiiteratornaw2][liczba_znak[drugiiteratornaw2]+1]-pojemnik_na_znaki[drugiiteratornaw2][liczba_znak[drugiiteratornaw2]]).c_str());
   }
   if((liczba_znak[drugiiteratornaw2]<poj_na_znaki[drugiiteratornaw2]-1)&&(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][liczba_znak[drugiiteratornaw2]]]=='-'))
   {
        sumy[drugiiteratornaw2]=sumy[drugiiteratornaw2]+atof(lancuchy[drugiiteratornaw2].SubString(pojemnik_na_znaki[drugiiteratornaw2][liczba_znak[drugiiteratornaw2]],pojemnik_na_znaki[drugiiteratornaw2][liczba_znak[drugiiteratornaw2+1]]-pojemnik_na_znaki[drugiiteratornaw2][liczba_znak[drugiiteratornaw2]]).c_str());
   }
   if((liczba_znak[drugiiteratornaw2]==poj_na_znaki[drugiiteratornaw2]-1)&&(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][liczba_znak[drugiiteratornaw2]]]=='+'))
   {
         sumy[drugiiteratornaw2]=sumy[drugiiteratornaw2]+atof(lancuchy[drugiiteratornaw2].SubString(pojemnik_na_znaki[drugiiteratornaw2][liczba_znak[drugiiteratornaw2]]+1,lancuchy[drugiiteratornaw2].Length()-pojemnik_na_znaki[drugiiteratornaw2][liczba_znak[drugiiteratornaw2]]+1).c_str());
   }
   if((liczba_znak[drugiiteratornaw2]>1)&&(liczba_znak[drugiiteratornaw2]<poj_na_znaki[drugiiteratornaw2])&&(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][liczba_znak[drugiiteratornaw2]]]=='-'))
   {
          sumy[drugiiteratornaw2]=sumy[drugiiteratornaw2]+atof(lancuchy[drugiiteratornaw2].SubString(pojemnik_na_znaki[drugiiteratornaw2][liczba_znak[drugiiteratornaw2]],pojemnik_na_znaki[drugiiteratornaw2][liczba_znak[drugiiteratornaw2]+1]-pojemnik_na_znaki[iteratornaw2][liczba_znak[drugiiteratornaw2]]+1).c_str());
   }
   if((liczba_znak[drugiiteratornaw2]==poj_na_znaki[drugiiteratornaw2]-1)&&(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][liczba_znak[drugiiteratornaw2]]]=='-'))
   {
          sumy[drugiiteratornaw2]=sumy[drugiiteratornaw2]+atof(lancuchy[drugiiteratornaw2].SubString(pojemnik_na_znaki[drugiiteratornaw2][liczba_znak[drugiiteratornaw2]],lancuchy[drugiiteratornaw2].Length()-pojemnik_na_znaki[drugiiteratornaw2][liczba_znak[drugiiteratornaw2]]+1).c_str());
   }
   liczba_znak[drugiiteratornaw2]++;
   }
   while(liczba_znak[drugiiteratornaw2]<=poj_na_znaki[drugiiteratornaw2]+1);
   sumy_nawiasow[drugiiteratornaw2]=sumy[drugiiteratornaw2]+sumy_mnozenia_i_dzielenia[drugiiteratornaw2];
   ShowMessage(sumy[drugiiteratornaw2]+sumy_mnozenia_i_dzielenia[drugiiteratornaw2]);
   drugiiteratornaw2++;
   }
   while(drugiiteratornaw2<iteratornaw2);
   iteratornaw2=0;
   int sumawsz=0;
   do
   {
   if(iteratornaw2==0)
   {
                 if(Operacje[iteratornaw2]=="Mnozenie")
                 {
                      sumawsz=sumy_nawiasow[iteratornaw2+1]*sumy_nawiasow[iteratornaw2];
                 }
                 if(Operacje[iteratornaw2]=="Dzielenie")
                 {
                       sumawsz=sumy_nawiasow[iteratornaw2+1]/sumy_nawiasow[iteratornaw2];
                 }
                 if(Operacje[iteratornaw2]=="Dodawanie")
                 {
                        sumawsz=sumy_nawiasow[iteratornaw2+1]+sumy_nawiasow[iteratornaw2];
                 }
                 if(Operacje[iteratornaw2]=="Odejmowanie")
                 {
                        sumawsz=sumy_nawiasow[iteratornaw2+1]-sumy_nawiasow[iteratornaw2];
                 }
                 }
                 else
                 {
                 if(Operacje[iteratornaw2]=="Odejmowanie")
                 {
                      sumawsz=sumawsz-sumy_nawiasow[iteratornaw2+1];
                 }
                 if(Operacje[iteratornaw2]=="Dodawanie")
                 {
                      sumawsz=sumawsz+sumy_nawiasow[iteratornaw2+1];
                 }
                 if(Operacje[iteratornaw2]=="Dzielenie")
                 {
                      sumawsz=sumawsz/sumy_nawiasow[iteratornaw2+1];
                 }
                 if(Operacje[iteratornaw2]=="Mnozenie")
                 {
                      sumawsz=sumawsz*sumy_nawiasow[iteratornaw2+1];
                 }
                 }
                 iteratornaw2++;
   }
   while(iteratornaw2<iterator_znaki);
   if((Edit1->Text[1]=='|')&&(Edit1->Text[Edit1->Text.Length()]=='|'))
   {
        ShowMessage(abs(sumawsz));
   }
   else
   {
        ShowMessage(sumawsz);
   }
   if((Edit1->Text[2]=='|')&&(Edit1->Text[iteratorwb]=='|'))
   {
        ShowMessage(abs(sumawsz));
   }
   }
   sumy_mnozenia_i_dzielenia[0]=0;
   sumy_mnozenia_i_dzielenia[1]=0;
   sumy_mnozenia_i_dzielenia[2]=0;
   sumy_mnozenia_i_dzielenia[3]=0;
   sumy_mnozenia_i_dzielenia[4]=0;
   sumy_mnozenia_i_dzielenia [5]=0;
   sumy[0]=0;
   sumy[1]=0;
   sumy[2]=0;
   sumy[3]=0;
   sumy[4]=0;
   sumy[5]=0;
}
//---------------------------------------------------------------------------

