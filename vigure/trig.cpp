#include <iostream>
#include "trig.h"
using namespace std;
using namespace TrigNamespace;

void Trig::ShowArea() const {
    cout << "Area of triangle: " << 0.5 * m_value1 * m_value2 << endl;
}