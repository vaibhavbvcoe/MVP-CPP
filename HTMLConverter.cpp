#include "HTMLConverter.h"
#include<iostream>
using namespace std;
#define HTML_STRING L"HTML STRING "
int HTMLConverter::ConvertData(const char* inputData, wchar_t** convertedData)
{
	size_t len = strlen(inputData);
	wchar_t* buf = new wchar_t[(len * 2)];
	std::mbstate_t state = std::mbstate_t();
	size_t outSize;
	mbstowcs_s(&outSize, buf, len * 2, inputData, (len * 2) - 2);

	size_t csvLen = wcslen(HTML_STRING);
	size_t total = outSize + csvLen;
	*convertedData = new wchar_t[total];
	int chm = wcslen(*convertedData);
	wcscpy_s(*convertedData, total, HTML_STRING);
	wcscat_s(*convertedData, total, buf);
	return 0L;
}
int HTMLConverter::ProvidePreview(char* cPreview)
{
	return 0L;

}
