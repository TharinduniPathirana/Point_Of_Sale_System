//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "ManageSales.h"
#include "Home.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TManageSalesForm *ManageSalesForm;
//---------------------------------------------------------------------------
__fastcall TManageSalesForm::TManageSalesForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TManageSalesForm::btnBackClick(TObject *Sender)
{
    HomeScreen -> Show();
	this -> Close();
}
}
//---------------------------------------------------------------------------
