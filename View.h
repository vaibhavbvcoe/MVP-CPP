#pragma once
#include "IView.h"
#include"Presenter.h"

class View:public IView
{
	Presenter* m_presenter;
public:
	void Launch();
	View();
	~View();
	void showMenu() ;
	void PrintData() ;
	void PreviewData(const char* text) ;
	void stringInput(std::string& input) ;
	void setLanguage() ;
	void clearConsole() ;
};

