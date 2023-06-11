//
// Created by zhangxh-95 on 2023/6/11.
//
#pragma once
#include <iostream>
#include <string>
using namespace std;

#include "ReflectFactory.h"
#include "ClassRegister.h"
using namespace chunhua::reflect;

class A: public Object{
public:
    A() {}
    ~A() {}
    void show(){
        cout << "this is A" << endl;
    }
};

REGISTER_CLASS(A);