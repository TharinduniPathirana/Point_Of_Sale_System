//---------------------------------------------------------------------------

#ifndef ManageItemH
#define ManageItemH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Edit.hpp>
//---------------------------------------------------------------------------
class TManageItemsForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TEdit *txtItemCode;
	TLabel *Label3;
	TLabel *Label4;
	TEdit *txtPrice;
	TEdit *txtItemName;
	TButton *btnAdd;
	TButton *btnBack;
	void __fastcall btnBackClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TManageItemsForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TManageItemsForm *ManageItemsForm;
//---------------------------------------------------------------------------
#endif
