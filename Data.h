#pragma once
//#include"DataFactory.h"

class IData
{
public:
	virtual  int ConvertData(const char* inputData, wchar_t** convertedData) ;
	virtual int ProvidePreview(char* cPreview) ;

};

