﻿//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "ManageItem.h"
#include "Home.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TManageItemsForm *ManageItemsForm;
//---------------------------------------------------------------------------
__fastcall TManageItemsForm::TManageItemsForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TManageItemsForm::btnBackClick(TObject *Sender)
{
     HomeScreen -> Show();
	this -> Close();
}
//---------------------------------------------------------------------------
