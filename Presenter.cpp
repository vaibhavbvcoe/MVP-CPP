#include "Presenter.h"

Presenter::Presenter()
{
	m_DataConverter = new DataConverter();
}
Presenter::~Presenter()
{
	delete m_DataConverter;
	m_DataConverter = nullptr;
}
int Presenter::LetsConvert(int ch, const char* input, wchar_t** output)
{
	return m_DataConverter->Convert(ch, input, output);
}