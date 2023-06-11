//
// Created by zhangxh-95 on 2023/6/11.
//

#pragma once
#include <iostream>
using namespace std;

#include "ReflectFactory.h"
#include "ClassRegister.h"
using namespace chunhua::reflect;

class B: public Object{
public:
    B() {}
    ~B() {}
    void show(){
        cout << "this is B" << endl;
    }
};

REGISTER_CLASS(B);