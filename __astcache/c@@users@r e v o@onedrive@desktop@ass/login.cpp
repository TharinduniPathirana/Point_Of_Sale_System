﻿//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "login.h"
#include "Home.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TLoginForm *LoginForm;
//---------------------------------------------------------------------------
__fastcall TLoginForm::TLoginForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TLoginForm::btnLoginClick(TObject *Sender)
{
	String uName = txtUsername -> Text;
	String password = txtPassword -> Text;

	if(uName=="Admin" && password=="admin@123"){

		HomeScreen -> Show();
        this -> Close();
	}
}
//---------------------------------------------------------------------------
void __fastcall TLoginForm::btnBackClick(TObject *Sender)
{
    this -> Close();
}
//---------------------------------------------------------------------------
