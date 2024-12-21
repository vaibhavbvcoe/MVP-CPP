#pragma once
#include"Data.h"
class CSVConverter:public IData
{
	int ConvertData(const char* inputData, wchar_t** convertedData) ;
	int ProvidePreview(char* cPreview) ;
};

