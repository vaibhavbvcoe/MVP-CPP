#pragma once
#include"DataConverter.h"

class Presenter
{
	DataConverter* m_DataConverter;
public:
	Presenter();
	~Presenter();
	int LetsConvert(int ch, const char* input, wchar_t ** output);
};

