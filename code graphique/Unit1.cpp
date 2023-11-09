//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ScrollBar1Change(TObject *Sender)
{
	monDMX.ModifierCanal(1,255-ScrollBar1->Position);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	monDMX.Envoyer(AnsiString(Edit1 -> Text).c_str(), 4123);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	monDMX.FullOFF();
	monDMX.Envoyer(AnsiString(Edit1 -> Text).c_str(), 4123);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
	monDMX.FullON();
	monDMX.Envoyer(AnsiString(Edit1 -> Text).c_str(), 4123);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
	monDMX.Demonstration();
	monDMX.Envoyer(AnsiString(Edit1 -> Text).c_str(), 4123);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ScrollBar2Change(TObject *Sender)
{
	monDMX.ModifierCanal(2,255-ScrollBar2->Position);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::ScrollBar3Change(TObject *Sender)
{
	monDMX.ModifierCanal(3,255-ScrollBar3->Position);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ScrollBar4Change(TObject *Sender)
{
	monDMX.ModifierCanal(4,255-ScrollBar4->Position);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ScrollBar5Change(TObject *Sender)
{
	monDMX.ModifierCanal(5,255-ScrollBar5->Position);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ScrollBar6Change(TObject *Sender)
{
	monDMX.ModifierCanal(6,255-ScrollBar6->Position);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ScrollBar7Change(TObject *Sender)
{
	monDMX.ModifierCanal(7,255-ScrollBar7->Position);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ScrollBar8Change(TObject *Sender)
{
	monDMX.ModifierCanal(8,255-ScrollBar8->Position);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ScrollBar9Change(TObject *Sender)
{
	monDMX.ModifierCanal(9,255-ScrollBar9->Position);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ScrollBar10Change(TObject *Sender)
{
	monDMX.ModifierCanal(10,255-ScrollBar10->Position);
}
//---------------------------------------------------------------------------


