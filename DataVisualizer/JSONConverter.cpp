#include "JSONConverter.h"
#define JSON_STRING L"JSON_STRING "
#include<iostream>
using namespace std;
int JSONConverter::ConvertData(const char* inputData, wchar_t** convertedData)
{
	size_t len = strlen(inputData);
	wchar_t* buf = new wchar_t[(len * 2)];
	std::mbstate_t state = std::mbstate_t();
	size_t outSize;
	mbstowcs_s(&outSize, buf, len * 2, inputData, (len * 2) - 2);

	size_t csvLen = wcslen(JSON_STRING);
	size_t total = outSize + csvLen;
	*convertedData = new wchar_t[total];
	int chm = wcslen(*convertedData);
	wcscpy_s(*convertedData, total, JSON_STRING);
	wcscat_s(*convertedData, total, buf);
	return 0L;
}

int JSONConverter::ProvidePreview(char* cPreview)
{
	return 0L;
}
