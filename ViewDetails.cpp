//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "ViewDetails.h"
#include "Home.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TViewDetailsForm *ViewDetailsForm;
//---------------------------------------------------------------------------
__fastcall TViewDetailsForm::TViewDetailsForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TViewDetailsForm::btnBackClick(TObject *Sender)
{
    HomeScreen -> Show();
	this -> Close();
}
//---------------------------------------------------------------------------
