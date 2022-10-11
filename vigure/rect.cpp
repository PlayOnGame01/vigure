#include <iostream>
#include "rect.h"
using namespace std;
using namespace RectNamespace;

void Rect::ShowArea() const {
    cout << "Area of rectangle: " << m_value1 * m_value2 << endl;
}