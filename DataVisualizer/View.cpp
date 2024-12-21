#include "View.h"
#include<iostream>
#include<Windows.h>
#include <sstream>
using namespace std;
View::View()
{
	m_presenter = new Presenter();
}
View::~View()
{
	delete m_presenter;
	m_presenter = NULL;
}

void View::showMenu()
{
	std::cout << "-== Welcome to the Data formatter! ==-" << std::endl;
	std::cout << "\n";
	std::cout << "What do you want to do?" << std::endl;
	std::cout << "(press the number that corresponds to the desired option)" << std::endl;
	std::cout << "\n";
	std::cout << "1- Change to XML" << std::endl;
	std::cout << "2- Change to JSON" << std::endl;
	std::cout << "3- Change to YAML" << std::endl;
	std::cout << "4- Chnage to HTML" << std::endl;
	std::cout << "5- Change to CSV " << std::endl;
	std::cout << "X- Quit" << std::endl;

}
void View::PrintData()
{

}
void View::PreviewData(const char* text)
{


}

void View::Launch()
{
	setLanguage();

	std::string inputValue;
	bool bExitCondition = false;
	do
	{
		clearConsole();
		std::string* wpnInput = new std::string;

		showMenu();
		stringInput(inputValue);
		int choice;
		sscanf_s(inputValue.c_str(), "%d", &choice);
		if (inputValue == "X" || inputValue == "x")
		{
			bExitCondition = true;
			break;
		}
		else
		{
			clearConsole();
			stringInput(inputValue);
			wchar_t* Output;
			m_presenter->LetsConvert(choice, inputValue.c_str(), &Output);
			std::wcout << Output << endl;
		}
	} while (!bExitCondition);

}

void View::stringInput(std::string& input)
{
	//std::cin >> input;
	getline(cin, input);
}


void View::setLanguage()
{
	setlocale(LC_ALL, "");
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
}

void View::clearConsole()
{

}