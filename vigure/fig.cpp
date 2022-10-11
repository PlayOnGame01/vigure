#include <iostream>
#include "fig.h"
#include "fig.h"
using namespace std;
using namespace figNamespace;

void Fig::SetDimension(const double value1)
{
    SetDimension(value1, value1);
}

void Fig::SetDimension(const double value1, const double value2)
{
    m_value1 = value1;
    m_value2 = value2;
}

void Fig::ShowArea() const
{
    cout << "Value is undefined" << endl;
}