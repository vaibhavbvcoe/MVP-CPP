#include "DataConverter.h"
DataConverter::DataConverter()
{
	m_DataFactory = new DataFactory();
}
DataConverter::~DataConverter()
{
	delete m_DataFactory;
	m_DataFactory = nullptr;

}
int DataConverter::Convert(int ch, const char* inputData, wchar_t** convertedData)
{
	m_Data = DataFactory::GetTheConverterType(ch);
	m_Data->ConvertData(inputData, convertedData);
	return 0L;
}