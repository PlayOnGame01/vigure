#include <iostream>
#include "cir.h"
using namespace std;
using namespace CirNamespace;

void Cir::ShowArea() const {
    cout << "Area of circle: " << 3.14159 * m_value1 * m_value2 << endl;
}