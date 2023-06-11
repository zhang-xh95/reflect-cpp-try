#include <iostream>
using namespace std;

#include "test/A.h"
#include "test/B.h"
#include "ReflectFactory.h"
using namespace chunhua::reflect;

int main() {
    ReflectFactory & reg  = ReflectFactory::instance();
    auto a = reg.createClass("A");
    a->show();

    auto b = reg.createClass("B");
    b->show();
    return 0;
}
