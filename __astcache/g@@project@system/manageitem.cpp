﻿//---------------------------------------------------------------------------

#include <fmx.h>
#include <fstream>
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
void __fastcall TManageItemsForm::btnAddClick(TObject *Sender)
{
	fstream myFile;
	myFile.open("BakeryItems.txt",ios::app);

	if(myFile.is_open()){

		AnsiString itemCode = txtItemCode -> Text;
		AnsiString itemName = txtItemName -> Text;
		AnsiString price = txtPrice -> Text;

		myFile<<itemCode<<","<<itemName<<","<<price<<"\n";
		myFile.close();

		txtItemCode -> Text = "";
		txtItemName -> Text = "";
		txtPrice -> Text = "";
	}
}
//---------------------------------------------------------------------------

