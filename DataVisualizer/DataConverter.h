#pragma once
#include"Data.h"
#include"DataFactory.h"

class DataConverter
{
	DataFactory* m_DataFactory;
	IData* m_Data;
public:
	DataConverter();
	~DataConverter();
	int Convert(int ch, const char* input, wchar_t** output);
};

