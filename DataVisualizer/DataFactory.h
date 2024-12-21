#pragma once
#include"Data.h"
class DataFactory
{
public:
	static IData* GetTheConverterType(int ch);
	static IData* m_DataConverter;
};

