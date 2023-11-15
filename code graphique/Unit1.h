//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "DMXTCP.h"
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Graphics.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// Composants gérés par l'EDI
	TScrollBar *ScrollBar1;
	TScrollBar *ScrollBar2;
	TScrollBar *ScrollBar3;
	TScrollBar *ScrollBar4;
	TScrollBar *ScrollBar5;
	TScrollBar *ScrollBar6;
	TScrollBar *ScrollBar7;
	TScrollBar *ScrollBar8;
	TScrollBar *ScrollBar9;
	TScrollBar *ScrollBar10;
	TButton *Button1;
	TEdit *Edit1;
	TLabel *Label11;
	TButton *Button2;
	TButton *Button3;
	TButton *Button4;
	TTimer *Timer;
	TSpeedButton *SpeedButton1;
	TSpeedButton *SpeedButton2;
	TSpeedButton *SpeedButton3;
	TSpeedButton *SpeedButton4;
	TSpeedButton *SpeedButton5;
	TSpeedButton *SpeedButton6;
	TSpeedButton *SpeedButton7;
	TSpeedButton *SpeedButton8;
	TSpeedButton *SpeedButton9;
	TSpeedButton *SpeedButton10;
	TSpeedButton *SpeedButton11;
	TSpeedButton *SpeedButton12;
	TSpeedButton *SpeedButton13;
	TSpeedButton *SpeedButton14;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label8;
	TLabel *Label9;
	TLabel *Label10;
	TLabel *Label7;
	TTrackBar *TrackBar1;
	TTrackBar *TrackBar2;
	TTrackBar *TrackBar3;
	TLabel *Label12;
	TLabel *Label13;
	TLabel *Label14;
	TBevel *Bevel1;
	TImage *Image1;
	void __fastcall ScrollBar1Change(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall ScrollBar3Change(TObject *Sender);
	void __fastcall ScrollBar4Change(TObject *Sender);
	void __fastcall ScrollBar5Change(TObject *Sender);
	void __fastcall ScrollBar6Change(TObject *Sender);
	void __fastcall ScrollBar7Change(TObject *Sender);
	void __fastcall ScrollBar2Change(TObject *Sender);
	void __fastcall ScrollBar8Change(TObject *Sender);
	void __fastcall ScrollBar9Change(TObject *Sender);
	void __fastcall ScrollBar10Change(TObject *Sender);
	void __fastcall TimerTimer(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall SpeedButton1Click(TObject *Sender);
	void __fastcall SpeedButton2Click(TObject *Sender);
	void __fastcall SpeedButton3Click(TObject *Sender);
	void __fastcall SpeedButton4Click(TObject *Sender);
	void __fastcall SpeedButton5Click(TObject *Sender);
	void __fastcall SpeedButton6Click(TObject *Sender);
	void __fastcall SpeedButton7Click(TObject *Sender);
	void __fastcall SpeedButton8Click(TObject *Sender);
	void __fastcall SpeedButton9Click(TObject *Sender);
	void __fastcall SpeedButton10Click(TObject *Sender);
	void __fastcall SpeedButton14Click(TObject *Sender);
	void __fastcall SpeedButton13Click(TObject *Sender);
	void __fastcall SpeedButton12Click(TObject *Sender);
	void __fastcall SpeedButton11Click(TObject *Sender);
	void __fastcall TrackBar3Change(TObject *Sender);
	void __fastcall TrackBar2Change(TObject *Sender);
	void __fastcall TrackBar1Change(TObject *Sender);
	void __fastcall Image1MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image1MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall Image1MouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);

private:	// Déclarations utilisateur
	DMXTCP monDMX;
	bool click;
public:		// Déclarations utilisateur
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
