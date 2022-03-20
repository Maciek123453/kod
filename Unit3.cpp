//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button1Click(TObject *Sender)
{
if(Edit1->Text=="")
{
ShowMessage("Wpisz cos");
}
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button2Click(TObject *Sender)
{
if(Edit1->Text=="")
{
ShowMessage("Wpisz cos");
}
else
{
int ilosc_x=0;
int iterator_dlugosc=1;
int znaki=0;
int Znaki[300];
    do
    {
          if(Edit1->Text[iterator_dlugosc]=='-')
          {
          znaki++;
          Znaki[znaki]=iterator_dlugosc;
          }
          if(Edit1->Text[iterator_dlugosc]=='+')
          {
          znaki++;
          Znaki[znaki]=iterator_dlugosc;
          }
          if(Edit1->Text[iterator_dlugosc]=='^')
          {
          znaki++;
          Znaki[znaki]=iterator_dlugosc;
          }
          if(Edit1->Text[iterator_dlugosc]=='x')
          {
          ilosc_x++;
          znaki++;
          Znaki[znaki]=iterator_dlugosc;
          }
          if(Edit1->Text[iterator_dlugosc]=='X')
          {
          ilosc_x++;
          znaki++;
          Znaki[znaki]=iterator_dlugosc;
          }
     iterator_dlugosc++;
    }
    while(iterator_dlugosc<=Edit1->Text.Length());
    int liczba_znakow2=1;
    int skladniki_poteg[200];
    int skladniki_przy_x[200];
    do
    {
        if((Edit1->Text[Znaki[liczba_znakow2]]=='x')&&(liczba_znakow2==1))
        {
        skladniki_przy_x[liczba_znakow2]=atoi(Edit1->Text.SubString(1,Znaki[liczba_znakow2]).c_str());
        }
        if((Edit1->Text[Znaki[liczba_znakow2]]=='X')&&(liczba_znakow2==1))
        {
        skladniki_przy_x[liczba_znakow2]=atoi(Edit1->Text.SubString(1,Znaki[liczba_znakow2]).c_str());
        }
        if((Edit1->Text[Znaki[liczba_znakow2]]=='^')&&(Edit1->Text[Znaki[liczba_znakow2+1]]=='+'))
        {
        skladniki_poteg[liczba_znakow2]=atoi(Edit1->Text.SubString(Znaki[liczba_znakow2]+1,Znaki[liczba_znakow2+1]-Znaki[liczba_znakow2]-1).c_str());
        }
        if((Edit1->Text[Znaki[liczba_znakow2]]=='^')&&(Edit1->Text[Znaki[liczba_znakow2+1]]=='-'))
        {
        skladniki_poteg[liczba_znakow2]=atoi(Edit1->Text.SubString(Znaki[liczba_znakow2]+1,Znaki[liczba_znakow2+1]-Znaki[liczba_znakow2]-1).c_str());
        }
        if((Edit1->Text[Znaki[liczba_znakow2]]=='^')&&(znaki==liczba_znakow2))
        {
        skladniki_poteg[liczba_znakow2]=atoi(Edit1->Text.SubString(Znaki[liczba_znakow2],Edit1->Text.Length()-Znaki[liczba_znakow2]-1).c_str());
        }
        if((Edit1->Text[Znaki[liczba_znakow2]]=='x')&&(Edit1->Text[Znaki[liczba_znakow2+1]]=='-'))
        {
        skladniki_przy_x[liczba_znakow2]=atoi(Edit1->Text.SubString(Znaki[liczba_znakow2]+1,Znaki[liczba_znakow2+1]-Znaki[liczba_znakow2]-1).c_str());
        }
        if((Edit1->Text[Znaki[liczba_znakow2]]=='x')&&(Edit1->Text[Znaki[liczba_znakow2+1]]=='+'))
        {
        skladniki_przy_x[liczba_znakow2]=atoi(Edit1->Text.SubString(Znaki[liczba_znakow2]+1,Znaki[liczba_znakow2+1]-Znaki[liczba_znakow2]-1).c_str());
        }
        liczba_znakow2++;
        }
    while(liczba_znakow2<znaki);
    liczba_znakow2=1;
    AnsiString pochodna="";
    AnsiString skladniki_pochodnych[300];
    do
    {
       skladniki_pochodnych[liczba_znakow2]=AnsiString(skladniki_przy_x[liczba_znakow2]*skladniki_poteg[liczba_znakow2]);

     liczba_znakow2++;
    }
    while(liczba_znakow2<znaki);
    liczba_znakow2=1;
    do
    {
    if(liczba_znakow2==1)
    {
      pochodna=skladniki_pochodnych[liczba_znakow2];
      }
      else
      {
       pochodna=pochodna+skladniki_pochodnych[liczba_znakow2];
      }
    liczba_znakow2++;
    }
    while(liczba_znakow2<znaki);
    ShowMessage(pochodna);
    if(ilosc_x==0)
    {
      ShowMessage("0");
    }
}
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button3Click(TObject *Sender)
{
       if((Edit3->Text!="")&&(Edit2->Text!=""))
       {

       }
       else
       {
           ShowMessage("Wpisz cos");
       }
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button4Click(TObject *Sender)
{
if((Edit5->Text!="")&&(Edit6->Text!=""))
{

}
else
{
 ShowMessage("Wpisz cos");
}
}
//---------------------------------------------------------------------------


