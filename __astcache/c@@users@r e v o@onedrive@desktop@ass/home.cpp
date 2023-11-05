﻿//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Home.h"
#include "login.h"
#include "AvailableItems.h"
#include "ManageItem.h"
#include "Packages.h"
#include "ManageSales.h"
#include "ViewDetails.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
THomeScreen *HomeScreen;
//---------------------------------------------------------------------------
__fastcall THomeScreen::THomeScreen(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall THomeScreen::btnLogoutClick(TObject *Sender)
{
	LoginForm -> Show();
    this -> Close();
}
//---------------------------------------------------------------------------
void __fastcall THomeScreen::btnAvailableClick(TObject *Sender)
{
	AvailableItemsForm -> Show();
    this -> Close();
}
//---------------------------------------------------------------------------
void __fastcall THomeScreen::btnManageItemsClick(TObject *Sender)
{
	ManageItemsForm -> Show();
    this -> Close();
}
//---------------------------------------------------------------------------
void __fastcall THomeScreen::btnManagePackagesClick(TObject *Sender)
{
	PackageForm -> Show();
    this -> Close();
}
//---------------------------------------------------------------------------
void __fastcall THomeScreen::btnViewClick(TObject *Sender)
{
	ViewDetailsForm -> Show();
    this -> Close();
}
//---------------------------------------------------------------------------
void __fastcall THomeScreen::btnManageSalesClick(TObject *Sender)
{
	ManageSalesForm -> Show();
    this -> Close();
}
//---------------------------------------------------------------------------
