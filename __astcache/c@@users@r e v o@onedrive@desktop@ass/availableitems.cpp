//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "AvailableItems.h"
#include "Home.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TAvailableItemsForm *AvailableItemsForm;
//---------------------------------------------------------------------------
__fastcall TAvailableItemsForm::TAvailableItemsForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TAvailableItemsForm::btnBackClick(TObject *Sender)
{
	HomeScreen -> Show();
    this -> Close();
}
//---------------------------------------------------------------------------
