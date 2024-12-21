#include "XMLConverter.h"

#define XML_STRING L"XML_STRING "
#include<iostream>
using namespace std;

int XMLConverter::ConvertData(const char* inputData, wchar_t** convertedData)
{
	size_t len = strlen(inputData);
	wchar_t* buf = new wchar_t[(len * 2)];
	std::mbstate_t state = std::mbstate_t();
	size_t outSize;
	mbstowcs_s(&outSize, buf, len * 2, inputData, (len * 2) - 2);

	size_t csvLen = wcslen(XML_STRING);
	size_t total = outSize + csvLen;
	*convertedData = new wchar_t[total];
	int chm = wcslen(*convertedData);
	wcscpy_s(*convertedData, total, XML_STRING);
	wcscat_s(*convertedData, total, buf);
	return 0L;
}

int XMLConverter::ProvidePreview(char* cPreview)
{
	return 0L;
}