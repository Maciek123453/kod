//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
 #include "Math.h"
#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm5::Button1Click(TObject *Sender)
{
if((Edit1->Text=="")&&(Edit2->Text=="")&&(Edit3->Text=="")&&(Edit4->Text==""))
{
     ShowMessage("Wpisz cos");
}
else
{
    if(Edit1->Text!="")
    {
         ShowMessage(sqrt((pow(atof(Edit1->Text.c_str()),2)+1)/(pow(atof(Edit1->Text.c_str()),2))));
    }
}
}
//---------------------------------------------------------------------------

void __fastcall TForm5::Button2Click(TObject *Sender)
{
       if((Edit1->Text=="")&&(Edit2->Text=="")&&(Edit3->Text=="")&&(Edit4->Text==""))
       {

          ShowMessage("Wpisz cos");
       }
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button3Click(TObject *Sender)
{
if((Edit1->Text=="")&&(Edit2->Text=="")&&(Edit3->Text=="")&&(Edit4->Text==""))
{
    ShowMessage("Wpisz cos");
}
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button4Click(TObject *Sender)
{
if((Edit1->Text=="")&&(Edit2->Text=="")&&(Edit3->Text=="")&&(Edit4->Text==""))
{
   ShowMessage("Wpisz cos");

}
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button5Click(TObject *Sender)
{
if((Edit5->Text=="")&&(Edit6->Text=="")&&(Edit7->Text==""))
{
  ShowMessage("Wpisz cos");

}
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button6Click(TObject *Sender)
{
if((Edit5->Text=="")&&(Edit6->Text=="")&&(Edit7->Text==""))
{
    ShowMessage("Wpisz cos");
}        
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button7Click(TObject *Sender)
{
if((Edit5->Text=="")&&(Edit6->Text=="")&&(Edit7->Text==""))
{
    ShowMessage("Wpisz cos");
}
}
//---------------------------------------------------------------------------
