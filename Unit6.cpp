//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
         #include "math.h"
#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
        : TForm(Owner)
{
Button13->Visible=false;
Edit16->Visible=false;
Edit17->Visible=false;
Edit18->Visible=false;
Label16->Visible=false;
Label17->Visible=false;
Label18->Visible=false;
Button12->Visible=false;
Edit13->Visible=false;
Edit14->Visible=false;
Edit15->Visible=false;
Label13->Visible=false;
Label14->Visible=false;
Label15->Visible=false;
Button11->Visible=false;
Button10->Visible=false;
Edit10->Visible=false;
Edit11->Visible=false;
Edit12->Visible=false;
Label10->Visible=false;
Label11->Visible=false;
Label12->Visible=false;
Label6->Visible=false;
Label7->Visible=false;
Label8->Visible=false;
Label9->Visible=false;
Edit6->Visible=false;
Edit7->Visible=false;
Edit8->Visible=false;
Edit9->Visible=false;
Button9->Visible=false;
Button8->Visible=false;
Button7->Visible=false;
Edit5->Visible=false;
Label5->Visible=false;
Button4->Visible=false;
Button5->Visible=false;
Button6->Visible=false;
Button3->Visible=false;
Button2->Visible=false;
Edit1->Visible=false;
Edit2->Visible=false;
Edit3->Visible=false;
Edit4->Visible=false;
Label1->Visible=false;
Label2->Visible=false;
Label3->Visible=false;
Label4->Visible=false;
}
//---------------------------------------------------------------------------


void __fastcall TForm6::Button2Click(TObject *Sender)
{
if((Edit1->Text!="")&(Edit2->Text!="")&&(Edit3->Text!="")&&(Edit4->Text!=""))
{
     int  a=(atoi(Edit4->Text.c_str())-atoi(Edit2->Text.c_str()))/(atoi(Edit3->Text.c_str())-atoi(Edit1->Text.c_str()));
     int b=atoi(Edit2->Text.c_str())-a*atoi(Edit1->Text.c_str());
     ShowMessage("y="+AnsiString(a)+"x+"+AnsiString(b));
}
else
{
      ShowMessage("Wpisz wszystkie dane");
}
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button3Click(TObject *Sender)
{
   if((Edit1->Text!="")&(Edit2->Text!="")&&(Edit3->Text!="")&&(Edit4->Text!=""))
{
     float  a=(atof(Edit4->Text.c_str())-atof(Edit2->Text.c_str()))/(atof(Edit3->Text.c_str())-atof(Edit1->Text.c_str()));
     float a2=(-1)*(a/1);
     float b=atof(Edit2->Text.c_str())-a2*atof(Edit1->Text.c_str());
     ShowMessage("y="+AnsiString(a2)+"x+"+AnsiString(b));
}
else
{
      ShowMessage("Wpisz wszystkie dane");
}
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button5Click(TObject *Sender)
{
    Button1->Visible=false;
    Button5->Visible=false;
    Button6->Visible=false;
    Button4->Visible=true;
  Edit1->Visible=true;
Edit2->Visible=true;
Edit3->Visible=true;
Edit4->Visible=true;
Label1->Visible=true;
Label2->Visible=true;
Label3->Visible=true;
Label4->Visible=true;
Button2->Visible=true;
Button3->Visible=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button1Click(TObject *Sender)
{
Button1->Visible=false;
Button5->Visible=true;
Button6->Visible=true;
Button12->Visible=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button4Click(TObject *Sender)
{
Edit1->Visible=false;
Edit2->Visible=false;
Edit3->Visible=false;
Edit4->Visible=false;
Label1->Visible=false;
Label2->Visible=false;
Label3->Visible=false;
Label4->Visible=false;
Button2->Visible=false;
Button3->Visible=false;
Button4->Visible=false;
Button5->Visible=true;
Button6->Visible=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button6Click(TObject *Sender)
{
Button8->Visible=true;
             Button5->Visible=false;
             Button6->Visible=false;
             Label5->Visible=true;
             Edit5->Visible=true;
             Button7->Visible=true;
             Edit6->Visible=true;
             Edit7->Visible=true;
             Edit8->Visible=true;
             Edit9->Visible=true;
             Label6->Visible=true;
             Label7->Visible=true;
             Label8->Visible=true;
             Label9->Visible=true;
             Button9->Visible=true;
             
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button7Click(TObject *Sender)
{
if(Edit5->Text=="")
{
       ShowMessage("Wpisz cos");
}
else
{
          int zmienna_x=0;
          int zmienna_y=0;
          int zmienna_x2=0;
          int zmienna_y2=0;
      int iterator_dlugosco=1;
      int pojemnik_na_plusy[200];
      int iterator_plusow=0;
      int poz_x=0;
      int pozr=0;
      int pozy=0;

              do
                 {
                 if(Edit5->Text[iterator_dlugosco]=='=')
                 {
                     pozr=iterator_dlugosco;
                 }
                     if(Edit5->Text[iterator_dlugosco]=='+')
                     {
                     iterator_plusow++;
                        pojemnik_na_plusy[iterator_plusow]=iterator_dlugosco;
                     }
                    if((Edit5->Text[iterator_dlugosco]=='x')&&(Edit5->Text[iterator_dlugosco+1]=='^')&&(Edit5->Text[iterator_dlugosco+2]=='2'))
                   {
                     zmienna_x=1;
                   }
                       if((Edit5->Text[iterator_dlugosco]=='x')&&(Edit5->Text[iterator_dlugosco+1]!='^'))
                   {
                     zmienna_x2=1;
                     poz_x=iterator_dlugosco;

                   }
                      if((Edit5->Text[iterator_dlugosco]=='y')&&(Edit5->Text[iterator_dlugosco+1]!='^'))
                   {
                     zmienna_y2=1;
                     pozy=iterator_dlugosco;
                   }


                     if((Edit5->Text[iterator_dlugosco]=='y')&&(Edit5->Text[iterator_dlugosco+1]=='^')&&(Edit5->Text[iterator_dlugosco+2]=='2'))
                   {
                      zmienna_y=1;
                   }
                  iterator_dlugosco++;
                  }
              while(iterator_dlugosco<=Edit5->Text.Length());
                if((zmienna_x==1)&&(zmienna_y==1))
                            {
                              ShowMessage("To jest rownanie okregu");
                              int skladnik1= atoi(Edit5->Text.SubString(pojemnik_na_plusy[2]+1,poz_x-pojemnik_na_plusy[2]-1).c_str());
                               int skladnik2=atoi(Edit5->Text.SubString(pojemnik_na_plusy[3]+1,pozy-pojemnik_na_plusy[3]-1).c_str());
                              ShowMessage(Edit5->Text.SubString(pojemnik_na_plusy[2]+1,poz_x-pojemnik_na_plusy[2]-1));
                              ShowMessage(Edit5->Text.SubString(pojemnik_na_plusy[3]+1,pozy-pojemnik_na_plusy[3]-1));
                              ShowMessage(skladnik1/2);
                              ShowMessage(skladnik2/2);
                              int sumask=pow(skladnik1/2,2)+pow(skladnik2/2,2);
                              ShowMessage(sumask);
                              ShowMessage(sumask-atoi(Edit5->Text.SubString(pojemnik_na_plusy[4]+1,pozr-pojemnik_na_plusy[4]-1).c_str()));
                              ShowMessage(atoi(Edit5->Text.SubString(pozr+1,Edit5->Text.Length()-pozr).c_str()));
                              ShowMessage("(x-"+AnsiString((skladnik1)/(2))+")^2+(x-"+AnsiString((skladnik2)/(2))+")^2="+AnsiString(atoi(Edit5->Text.SubString(pozr+1,Edit5->Text.Length()-pozr).c_str())-atoi(Edit5->Text.SubString(pojemnik_na_plusy[4]+1,pozr-pojemnik_na_plusy[4]-1).c_str())-sumask));
                            }



}
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Button8Click(TObject *Sender)
{
Edit5->Visible=false;
Label5->Visible=false;
Button7->Visible=false;
Button8->Visible=false;
Button6->Visible=true;
Button5->Visible=true;
Edit6->Visible=false;
Edit7->Visible=false;
Edit8->Visible=false;
Edit9->Visible=false;
Label6->Visible=false;
Label7->Visible=false;
Label8->Visible=false;
Label9->Visible=false;
Button9->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Button9Click(TObject *Sender)
{
if((Edit6->Text!="")&&(Edit7->Text!="")&&(Edit8->Text!="")&&(Edit9->Text!=""))
{
         int a=atoi(Edit6->Text.c_str());
         int b=atoi(Edit7->Text.c_str());
         int x=atoi(Edit8->Text.c_str());
           int y=atoi(Edit9->Text.c_str());
           int r=sqrt(pow(x-a,2)+pow(y-b,2));
           ShowMessage(AnsiString(r));
}
else
{
    ShowMessage("Wpisz wszystkie dane");
}
}
//---------------------------------------------------------------------------


void __fastcall TForm6::Button10Click(TObject *Sender)
{
if((Edit10->Text!="")&&(Edit11->Text!="")&&(Edit12->Text!=""))
{
            int pozzn_r=0;
            int iterator_dlugoscd=1;
            int iterator_liczba_plusow=0;
            float PNP[200];
            int pozzn_x=0;
            int pozzn_y=0;
            do
              {

                  if(Edit12->Text[iterator_dlugoscd]=='+')
                      {

                       PNP[iterator_liczba_plusow]=iterator_dlugoscd;
                          iterator_liczba_plusow++;
                      //   ShowMessage(PNP[iterator_liczba_plusow-1]);
                      }
                      if(Edit12->Text[iterator_dlugoscd]=='=')
                      {
                   pozzn_r=iterator_dlugoscd;
                    ShowMessage(pozzn_r);
                      }
                       if(Edit12->Text[iterator_dlugoscd]=='x')
                      {
                    pozzn_x=iterator_dlugoscd;
               //    ShowMessage(pozzn_x);
                      }
                       if(Edit12->Text[iterator_dlugoscd]=='y')
                      {
                    pozzn_y=iterator_dlugoscd;
                 //   ShowMessage(pozzn_y);
                      }
                iterator_dlugoscd++;
              }
              while(iterator_dlugoscd<=Edit12->Text.Length());
            //   ShowMessage(AnsiString(Edit12->Text.SubString(PNP[1]+1,pozzn_r-PNP[1]-1)));
            //   ShowMessage(AnsiString(Edit12->Text.SubString(0,pozzn_x-1)));
            //   ShowMessage(AnsiString(Edit12->Text.SubString(PNP[0]+1,pozzn_y-PNP[0]-1)));
               float d=(abs(atof(Edit10->Text.c_str())*atof(Edit12->Text.SubString(0,pozzn_x-1).c_str())+atof(Edit11->Text.c_str())*atof(Edit12->Text.SubString(PNP[0]+1,pozzn_y-PNP[0]-1).c_str())+atof(Edit12->Text.SubString(PNP[1]+1,pozzn_r-PNP[1]-1).c_str()))/(sqrt(pow(atof(Edit12->Text.SubString(0,pozzn_x-1).c_str()),2)+pow(atof(Edit12->Text.SubString(PNP[0]+1,pozzn_y-PNP[0]-1).c_str()),2))));
               ShowMessage(AnsiString(d));
                 ShowMessage(atoi(Edit12->Text.SubString(PNP[1]+1,pozzn_r-PNP[1]-1).c_str()));
  }
else
{
    ShowMessage("Wpisz wszystkie dane");
}
}
//---------------------------------------------------------------------------





void __fastcall TForm6::Button13Click(TObject *Sender)
{
Edit16->Visible=true;
Edit17->Visible=true;
Edit18->Visible=true;
Label16->Visible=true;
Label17->Visible=true;
Label18->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Button12Click(TObject *Sender)
{
Button5->Visible=false;
Button6->Visible=false;
Button12->Visible=false;
Button13->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Button14Click(TObject *Sender)
{
    if((Edit17->Text!="")&&(Edit18->Text!="")&&(Edit16->Text==""))
    {
        int poz1n=0;
        int poz1n2=0;
        int poz2n=0;
       int  poz2n2=0;
       int pozp=0;
       int pozp2=0;
       int iterator_dlugoscw1=1;
       int iterator_dlugoscw2=1;
       do
           {
               if(Edit17->Text[iterator_dlugoscw1]=='(')
               {
                 poz1n=iterator_dlugoscw1;


               }
                if(Edit17->Text[iterator_dlugoscw1]==')')
               {
                 poz1n2=iterator_dlugoscw1;
               }
               if(Edit17->Text[iterator_dlugoscw1]==',')
               {
                   pozp=iterator_dlugoscw1;
               }
              iterator_dlugoscw1++;
            }
       while(iterator_dlugoscw1<=Edit17->Text.Length());

            int x=atoi(Edit17->Text.SubString(poz1n+1,pozp-poz1n-1).c_str());
            int y=atoi(Edit17->Text.SubString(pozp+1,poz1n2-pozp-1).c_str());
                 ShowMessage(AnsiString(x));
                 ShowMessage(AnsiString(y));

                      do
           {
               if(Edit18->Text[iterator_dlugoscw2]=='(')
               {
                 poz2n=iterator_dlugoscw2;


               }
                if(Edit18->Text[iterator_dlugoscw2]==')')
               {
                 poz2n2=iterator_dlugoscw2;
               }
               if(Edit18->Text[iterator_dlugoscw2]==',')
               {
                   pozp2=iterator_dlugoscw2;
               }
              iterator_dlugoscw2++;
            }
       while(iterator_dlugoscw2<=Edit18->Text.Length());
       if((poz2n!=0)&&(poz2n2!=0)&&(pozp2!=0))
       {
            int x2=atoi(Edit18->Text.SubString(poz2n+1,pozp2-poz2n-1).c_str());
            int y2=atoi(Edit18->Text.SubString(pozp2+1,poz2n2-pozp2-1).c_str());
                 ShowMessage(AnsiString(x2));
                 ShowMessage(AnsiString(y2));
                   ShowMessage("Odcinek jest rowny"+AnsiString(sqrt(pow(y2-y,2)+pow(x2-x,2))));
                   float odc=sqrt(pow(y2-y,2)+pow(x2-x,2));
                   float yod;
                   float xod;
                          
                    xod=(pow(y2,2)-pow(y,2)-2*y*yod+x2-pow(x,2))/(2*x2-2*x);




                      ShowMessage(xod);


         }

}

   }




















