//---------------------------------------------------------------------------

#ifndef HomeH
#define HomeH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class THomeScreen : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TButton *btnAvailable;
	TButton *btnManageItems;
	TButton *btnManagePackages;
	TButton *btnView;
	TButton *btnLogout;
	TButton *btnManageSales;
	void __fastcall btnLogoutClick(TObject *Sender);
	void __fastcall btnAvailableClick(TObject *Sender);
	void __fastcall btnManageItemsClick(TObject *Sender);
	void __fastcall btnManagePackagesClick(TObject *Sender);
	void __fastcall btnViewClick(TObject *Sender);
	void __fastcall btnManageSalesClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall THomeScreen(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE THomeScreen *HomeScreen;
//---------------------------------------------------------------------------
#endif
