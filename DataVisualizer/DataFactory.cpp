#include "DataFactory.h"
#include"XMLConverter.h"
#include "JSONConverter.h"
#include"YAMLConverter.h"
#include"HTMLConverter.h"
#include"CSVConverter.h"
#include <cstddef>

IData* DataFactory::m_DataConverter=NULL;

IData* DataFactory::GetTheConverterType(int ch)
{
	switch (ch)
	{
		case 1:
		{
			m_DataConverter = new XMLConverter();
			break;
		}
		case 2:
		{
			m_DataConverter = new JSONConverter();
			break;
		}
		case 3:
		{
			m_DataConverter = new YAMLConverter();
			break;
		}
		case 4:
		{
			m_DataConverter = new HTMLConverter();
			break;
		}
		case 5:
		{
			m_DataConverter = new CSVConverter();
			break;
		}
		default:
		{
			m_DataConverter = nullptr;
			break;
		}
	}
	return m_DataConverter;
}