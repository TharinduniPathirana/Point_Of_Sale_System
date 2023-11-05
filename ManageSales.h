//---------------------------------------------------------------------------

#ifndef ManageSalesH
#define ManageSalesH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.ListBox.hpp>
//---------------------------------------------------------------------------
class TManageSalesForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label2;
	TEdit *txtItemCode;
	TLabel *Label3;
	TEdit *txtItemName;
	TLabel *Label1;
	TButton *btnSearch;
	TLabel *Label5;
	TEdit *txtInvoice;
	TEdit *txtQty;
	TLabel *Label6;
	TButton *btnAddSale;
	TListBox *listSales;
	TEdit *txtTotal;
	TLabel *Label4;
	TButton *btnSave;
	TButton *btnBack;
	TEdit *txtDate;
	TLabel *Label7;
	TEdit *Edit2;
	TListBox *listAllSales;
	TButton *btnShowSales;
	void __fastcall btnBackClick(TObject *Sender);
	void __fastcall btnSaveClick(TObject *Sender);
	void __fastcall btnAddSaleClick(TObject *Sender);
	void __fastcall btnSearchClick(TObject *Sender);
	void __fastcall btnShowSalesClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TManageSalesForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TManageSalesForm *ManageSalesForm;
//---------------------------------------------------------------------------
#endif
