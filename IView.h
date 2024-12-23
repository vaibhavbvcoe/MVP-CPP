#pragma once
#include<iostream>
using namespace std;

class IView
{
public:
	virtual void showMenu() = 0;
	virtual void PrintData() = 0 ;
	virtual void PreviewData(const char* text) = 0 ;

	virtual void Launch() =0 ;
	virtual void stringInput(std::string& input) = 0 ;
	virtual void setLanguage() = 0 ;
	virtual void clearConsole() = 0 ;
};

