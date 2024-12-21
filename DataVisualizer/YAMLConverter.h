#pragma once
#include"Data.h"
class YAMLConverter :public IData
{
public:
	int ConvertData(const char* inputData, wchar_t** convertedData) override;

	int ProvidePreview(char* cPreview) override;
};

