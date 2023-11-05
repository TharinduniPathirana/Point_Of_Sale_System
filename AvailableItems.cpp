//---------------------------------------------------------------------------

#include <fmx.h>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
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

std::vector<std::string> parseCommaDelimitedString(std::string line){
	std::vector<std::string> result;
	std::stringstream s_stream(line);

	while(s_stream.good()){
		std::string substr;
		getline(s_stream,substr,',');
		result.push_back(substr);
	}

    return result;
}
//---------------------------------------------------------------------------
void __fastcall TAvailableItemsForm::btnBackClick(TObject *Sender)
{
    listAllItems -> Items -> Clear();
	HomeScreen -> Show();
    this -> Close();
}
//---------------------------------------------------------------------------

void __fastcall TAvailableItemsForm::btnShowAllClick(TObject *Sender)
{

    listAllItems -> Items -> Clear();
	fstream myFile;
	myFile.open("BakeryItems.txt",ios::in);
	String itemCode = "";
	String itemName = "";
	String price = "";
	String comma = ",";
	String list ="";

	if(myFile.is_open()){
		std::string line;

		while(getline(myFile,line)){
			std::vector<std::string> parsedLine = parseCommaDelimitedString(line);
			itemCode = parsedLine.at(0);
			itemName = parsedLine.at(1);
			price = parsedLine.at(2);

			list = itemCode+comma+itemName+comma+price;
			listAllItems -> Items -> Add(list);
		}


	}
}
//---------------------------------------------------------------------------

void __fastcall TAvailableItemsForm::btnSearchClick(TObject *Sender)
{
    fstream myFile;
	myFile.open("BakeryItems.txt",ios::in);
	String itemCode = "";
	String itemName = "";
	String price = "";
	String searchItem = txtSearch -> Text;


	if(myFile.is_open()){
		std::string line;

		while(getline(myFile,line)){
			std::vector<std::string> parsedLine = parseCommaDelimitedString(line);
			itemCode = parsedLine.at(0);
			if(itemCode== searchItem){

				itemName = parsedLine.at(1);
				price = parsedLine.at(2);
                break;
			}
		}

		txtItemCode -> Text = itemCode;
		txtItemName -> Text= itemName;
        txtPrice -> Text = price;


	}
}
//---------------------------------------------------------------------------

