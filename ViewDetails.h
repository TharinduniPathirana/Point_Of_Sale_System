//---------------------------------------------------------------------------

#ifndef ViewDetailsH
#define ViewDetailsH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TViewDetailsForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TButton *btnBack;
	void __fastcall btnBackClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TViewDetailsForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TViewDetailsForm *ViewDetailsForm;
//---------------------------------------------------------------------------
#endif
