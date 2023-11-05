//---------------------------------------------------------------------------

#include <fmx.h>
#ifdef _WIN32
#include <tchar.h>
#endif
#pragma hdrstop
#include <System.StartUpCopy.hpp>
//---------------------------------------------------------------------------
USEFORM("Welcome.cpp", Form1);
USEFORM("login.cpp", LoginForm);
USEFORM("Home.cpp", HomeScreen);
USEFORM("ManageItem.cpp", ManageItemsForm);
USEFORM("ManageSales.cpp", ManageSalesForm);
USEFORM("AvailableItems.cpp", AvailableItemsForm);
USEFORM("ViewDetails.cpp", ViewDetailsForm);
USEFORM("Packages.cpp", PackageForm);
//---------------------------------------------------------------------------
extern "C" int FMXmain()
{
	try
	{
		Application->Initialize();
		Application->CreateForm(__classid(TForm1), &Form1);
		Application->CreateForm(__classid(TLoginForm), &LoginForm);
		Application->CreateForm(__classid(THomeScreen), &HomeScreen);
		Application->CreateForm(__classid(TManageItemsForm), &ManageItemsForm);
		Application->CreateForm(__classid(TManageSalesForm), &ManageSalesForm);
		Application->CreateForm(__classid(TAvailableItemsForm), &AvailableItemsForm);
		Application->CreateForm(__classid(TViewDetailsForm), &ViewDetailsForm);
		Application->CreateForm(__classid(TPackageForm), &PackageForm);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
