#include "cir.h"
#include "rect.h"
#include "trig.h"
#include <iostream>
using namespace std;
using namespace figNamespace;
using namespace CirNamespace;
using namespace RectNamespace;
using namespace TrigNamespace;

int main() {
    Fig* ptr = nullptr;

    int choose;
    cout << "1. Circle\n2. Rectangle\n3.Triangle\n->";
    cin >> choose;

    switch (choose) {
    case 1:
        ptr = new Cir();
        break;

    case 2:
        ptr = new Rect();
        break;

    case 3:
        ptr = new Trig();
        break;
    }
    ptr->SetDimension(5, 13);
    ptr->ShowArea();

    delete ptr;

}