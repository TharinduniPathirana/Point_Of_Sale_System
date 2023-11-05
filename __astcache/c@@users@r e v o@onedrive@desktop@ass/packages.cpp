//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Packages.h"
#include "Home.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TPackageForm *PackageForm;
//---------------------------------------------------------------------------
__fastcall TPackageForm::TPackageForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TPackageForm::btnBackClick(TObject *Sender)
{
    HomeScreen -> Show();
	this -> Close();
}
//---------------------------------------------------------------------------
