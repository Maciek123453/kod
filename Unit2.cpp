//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
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


void __fastcall TForm2::Button4Click(TObject *Sender)
{
     int iterator_dlugosc=1;
     int liczba_znakow=1;

     int liczbanaw1=0;
     int liczbanaw2=0;
     int poz_naw1[200];
     int poz_naw2[200];
     int iteratornaw1=0;
     int iteratornaw2=0;
     int liczba_znak[100];
               int iterator=1;
      do
       {
          liczba_znak[iterator]=1;
          iterator++;
         }
   while(iterator<100);
       AnsiString lancuchy[300];
     do
        {
             if(Edit7->Text[iterator_dlugosc]=='(')
             {
              poz_naw1[iteratornaw1]=iterator_dlugosc;
              iteratornaw1++;
             }
             if(Edit7->Text[iterator_dlugosc]==')')
             {
               poz_naw2[iteratornaw2]=iterator_dlugosc;
               iteratornaw2++;
             }




         iterator_dlugosc++;
         }
     while(iterator_dlugosc<=Edit7->Text.Length());
           int pojemnik_na_znaki[200][200];
            int iteratornaw3=0;
     if(iteratornaw1==iteratornaw2)
     {


       int pojemnik_na_znakidod[300];
       do
        {
            lancuchy[iteratornaw3]=Edit7->Text.SubString(poz_naw1[iteratornaw3]+1,poz_naw2[iteratornaw3]-poz_naw1[iteratornaw3]-1);
            //   ShowMessage(lancuchy[iteratornaw3]);

            iteratornaw3++;
          }
       while(iteratornaw3<iteratornaw2);









     }
     iteratornaw2=1;
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




        //  if(lancuchy[iteratornaw2][iterator_dlugosc]=='*')
          {
           //  liczba_znakow++;

           //  pojemnik_na_znaki[iteratornaw2][liczba_znakow]=iterator_dlugosc;
          }



      //   if(lancuchy[iteratornaw2][iterator_dlugosc]=='-')
          {
               liczba_znakow++;
             pojemnik_na_znaki[iteratornaw2][liczba_znakow]=iterator_dlugosc;
            //    if(poczatekop[iteratornaw2][iteratorgdz2]!='1')
                {
                    iteratorgdz2++;
                }
          }
      //    if(lancuchy[iteratornaw2][iterator_dlugosc]=='/')
          {

              liczba_znakow++;
           //   if(poczatekop[iteratornaw2][iteratorgdz2]=='1')
              {
              poczatekop[iteratornaw2][iteratorgdz2]=liczba_znakow;
              }
              pojemnik_na_znaki[iteratornaw2][liczba_znakow]=iterator_dlugosc;

          }
        //  if(lancuchy[iteratornaw2][iterator_dlugosc]=='+')
          {

                liczba_znakow++;
              //   if(poczatekop[iteratornaw2][iteratorgdz2]!='1')
              {
              iteratorgdz2++;
              }
             pojemnik_na_znaki[iteratornaw2][liczba_znakow]=iterator_dlugosc;

          }
          //     if(lancuchy[iteratornaw2][iterator_dlugosc]=='*')
          {
                poj_na_od[iteratornaw2][iteratorgd]++;
            //       if(poczatekop[iteratornaw2][iteratorgdz2]=='1')
              {
              poczatekop[iteratornaw2][iteratorgdz2]=liczba_znakow;
              }
              liczba_znakow++;


          }


        //    if(lancuchy[iteratornaw2][iterator_dlugosc]=='/')
          {
                poj_na_od[iteratornaw2][iteratorgd]++;

          }
             do
         {
            //   if((iteratorop2==1)&&(lancuchy[iteratornaw2][poczatekop[iteratornaw2][iteratorgdz2]]=='*')&&(lancuchy[iteratornaw2][poczatekop[iteratornaw2][iteratorgdz2]-1]!='*')&&(lancuchy[iteratornaw2][poczatekop[iteratornaw2][iteratorgdz2]-1]!='/'))
               {
                 sumamnidz[iteratornaw2][iteratorgdz2]=atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][poczatekop[iteratornaw2][iteratorgdz2-1]]+1,pojemnik_na_znaki[iteratornaw2][poczatekop[iteratornaw2][iteratorgdz2]]-pojemnik_na_znaki[iteratornaw2][poczatekop[iteratornaw2][iteratorgdz2-1]]-1).c_str())*atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][poczatekop[iteratornaw2][iteratorgdz2]]+1,pojemnik_na_znaki[iteratornaw2][poczatekop[iteratornaw2][iteratorgdz2+1]]-pojemnik_na_znaki[iteratornaw2][poczatekop[iteratornaw2][iteratorgdz2]]-1).c_str());
              }
           //   if((iteratorop2>1)&&(lancuchy[iteratornaw2][poczatekop[iteratornaw2][iteratorgdz2]]=='/')&&(lancuchy[iteratornaw2][poczatekop[iteratornaw2][iteratorgdz2]-1]!='*')&&(lancuchy[iteratornaw2][poczatekop[iteratornaw2][iteratorgdz2]-1]!='/'))
               {
                 sumamnidz[iteratornaw2][iteratorgdz2]=atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][poczatekop[iteratornaw2][iteratorgdz2-1]]+1,pojemnik_na_znaki[iteratornaw2][poczatekop[iteratornaw2][iteratorgdz2]]-pojemnik_na_znaki[iteratornaw2][poczatekop[iteratornaw2][iteratorgdz2-1]]-1).c_str())*atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][poczatekop[iteratornaw2][iteratorgdz2]]+1,pojemnik_na_znaki[iteratornaw2][poczatekop[iteratornaw2][iteratorgdz2+1]]-pojemnik_na_znaki[iteratornaw2][poczatekop[iteratornaw2][iteratorgdz2]]-1).c_str());
               }
           //    if((iteratorop2==1)&&(lancuchy[iteratornaw2][poczatekop[iteratornaw2][iteratorgdz2]+1]=='*')&&(lancuchy[iteratornaw2][poczatekop[iteratornaw2][iteratorgdz2]]!='+')&&(lancuchy[iteratornaw2][poczatekop[iteratornaw2][iteratorgdz2]]!='-'))
               {
                sumamnidz[iteratornaw2][iteratorgdz2]=sumamnidz[iteratornaw2][iteratorgdz2]*atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][poczatekop[iteratornaw2][iteratorgdz2]]+1,pojemnik_na_znaki[iteratornaw2][poczatekop[iteratornaw2][iteratorgdz2+1]]-pojemnik_na_znaki[iteratornaw2][poczatekop[iteratornaw2][iteratorgdz2]]-1).c_str());
              }
           //   if((iteratorop2>1)&&(lancuchy[iteratornaw2][poczatekop[iteratornaw2][iteratorgdz2]+1]=='/')&&(lancuchy[iteratornaw2][poczatekop[iteratornaw2][iteratorgdz2]]!='+')&&(lancuchy[iteratornaw2][poczatekop[iteratornaw2][iteratorgdz2]]!='-'))
               {
                sumamnidz[iteratornaw2][iteratorgdz2]=sumamnidz[iteratornaw2][iteratorgdz2]/atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][poczatekop[iteratornaw2][iteratorgdz2]]+1,pojemnik_na_znaki[iteratornaw2][poczatekop[iteratornaw2][iteratorgdz2+1]]-pojemnik_na_znaki[iteratornaw2][poczatekop[iteratornaw2][iteratorgdz2]]-1).c_str());
               }

                 poczatekop[iteratornaw2][iteratorgdz2]++;
              iteratorop2++;
               }
            //   while(iteratorop2<poj_na_od[iteratornaw2][iteratorgd]);
                        if(iteratorop2==poj_na_od[iteratornaw2][iteratorgd])
                        {
                            iteratorgd++;
                            iteratorop2=1;
                        }

         iterator_dlugosc++;
        }
    // while(iterator_dlugosc<=lancuchy[iteratornaw2].Length());
         //    ShowMessage(poczatekop[iteratornaw2][iteratorgdz2]);
     if(iterator_dlugosc==lancuchy[iteratornaw2].Length()+1)
     {
         poj_na_znaki[iteratornaw2]=liczba_znakow;
         iterator_dlugosc=1;
         liczba_znakow=1;
         iteratorop2=1;
         iteratorgdz2=1;
     }

     iteratornaw2++;
     
           }
     while(iteratornaw2<iteratornaw3);
   float  sumy[50];
   iteratornaw2=1;
   iterator_dlugosc=1;
   int liczba_znakowite=1;



   do
   {
 //  do
     //  {

        //   if ((liczba_znak[iteratornaw2]==1)&&(lancuchy[iteratornaw2][1]!='-'))
                   {
                     sumy[iteratornaw2]=sumy[iteratornaw2]+atof(lancuchy[iteratornaw2].SubString(1,pojemnik_na_znaki[iteratornaw2][1]-1).c_str());
                   }

              //     if ((liczba_znak[iteratornaw2]==1)&&(lancuchy[iteratornaw2][1]!='-'))
                   {
                     sumy[iteratornaw2]=sumy[iteratornaw2]+atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znak[iteratornaw2]]+1,pojemnik_na_znaki[iteratornaw2][liczba_znak[iteratornaw2]+1]-pojemnik_na_znaki[iteratornaw2][liczba_znak[iteratornaw2]]-1).c_str());
                   }
             //    if ((liczba_znak[iteratornaw2]==1)&&(lancuchy[iteratornaw2][1]!='-'))
                   {
                     sumy[iteratornaw2]=sumy[iteratornaw2]+atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znak[iteratornaw2]],pojemnik_na_znaki[iteratornaw2][liczba_znak[iteratornaw2]+1]-pojemnik_na_znaki[iteratornaw2][liczba_znak[iteratornaw2]]).c_str());
                   }

            //    if((liczba_znak[iteratornaw2]>1)&&(liczba_znak[iteratornaw2]<poj_na_znaki[iteratornaw2])&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znak[iteratornaw2]]]=='+'))
                   {
                     sumy[iteratornaw2]=sumy[iteratornaw2]+atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znak[iteratornaw2]]+1,pojemnik_na_znaki[iteratornaw2][liczba_znak[iteratornaw2]+1]-pojemnik_na_znaki[iteratornaw2][liczba_znak[iteratornaw2]]-1).c_str());
                   }
             //      if((liczba_znak[iteratornaw2]<poj_na_znaki[iteratornaw2])&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znak[iteratornaw2]]]=='+'))
                   {
                    sumy[iteratornaw2]=sumy[iteratornaw2]+atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znak[iteratornaw2]]+1,pojemnik_na_znaki[iteratornaw2][liczba_znak[iteratornaw2+1]]-pojemnik_na_znaki[iteratornaw2][liczba_znak[iteratornaw2]]-1).c_str());
                   }
                //     if((liczba_znak[iteratornaw2]==poj_na_znaki[iteratornaw2])&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znak[iteratornaw2]]]=='*'))
                   {
                     sumy[iteratornaw2]=sumy[iteratornaw2]+atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znak[iteratornaw2]]+1,lancuchy[iteratornaw2].Length()-pojemnik_na_znaki[iteratornaw2][liczba_znak[iteratornaw2]]+1).c_str());
                   }

              //   if((liczba_znak[iteratornaw2]==poj_na_znaki[iteratornaw2])&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znak[iteratornaw2]]]=='+'))
                   {
                     sumy[iteratornaw2]=sumy[iteratornaw2]+atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znak[iteratornaw2]]+1,lancuchy[iteratornaw2].Length()-pojemnik_na_znaki[iteratornaw2][liczba_znak[iteratornaw2]]+1).c_str());
                   }
                //((liczba_znak[iteratornaw2]==1)&&(lancuchy[iteratornaw2][1]=='-'))
                   {
                    sumy[iteratornaw2]=sumy[iteratornaw2]+atof(lancuchy[iteratornaw2].SubString(0,pojemnik_na_znaki[iteratornaw2][2]-1).c_str());
                   }
              //     if((liczba_znak[iteratornaw2]>1)&&(liczba_znak[iteratornaw2]<poj_na_znaki[iteratornaw2])&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znak[iteratornaw2]]]=='-'))
                   {
                     sumy[iteratornaw2]=sumy[iteratornaw2]+atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znak[iteratornaw2]],pojemnik_na_znaki[iteratornaw2][liczba_znak[iteratornaw2]+1]-pojemnik_na_znaki[iteratornaw2][liczba_znak[iteratornaw2]]+1).c_str());
                   }

              //   if((liczba_znak[iteratornaw2]==poj_na_znaki[iteratornaw2])&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znak[iteratornaw2]]]=='-'))
                   {
                     sumy[iteratornaw2]=sumy[iteratornaw2]+atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znak[iteratornaw2]],lancuchy[iteratornaw2].Length()-pojemnik_na_znaki[iteratornaw2][liczba_znak[iteratornaw2]]+1).c_str());
                   }
        //  liczba_znak[iteratornaw2]++;
      //  }
  // while(liczba_znak[iteratornaw2]<=poj_na_znaki[iteratornaw2]+1);
                        //  if((lancuchy[iteratornaw2][1]!='-')&&(poj_na_znaki[iteratornaw2]==1))
                           {
                        //   ShowMessage(sumy[iteratornaw2]/2);
                           }

                           {
                          //    ShowMessage(sumy[iteratornaw2]);
                           }
                         //   if(poj_na_znaki[iteratornaw2]==0)
                            {
                          //     ShowMessage(sumy[iteratornaw2]/2);
                            }

                            {
                          //    ShowMessage(sumy[iteratornaw2]);
                            }

                     iteratornaw2++;


   }
   while(iteratornaw2<iteratornaw3);
      sumy[0]=0;
      sumy[1]=0;
      sumy[2]=0;
      sumy[3]=0;
      sumy[4]=0;
      sumy[5]=0;
}
//---------------------------------------------------------------------------
