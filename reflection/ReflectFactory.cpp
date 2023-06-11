//
// Created by zhangxh-95 on 2023/6/11.
//
#include "ReflectFactory.h"

using namespace chunhua::reflect;

void ReflectFactory::registerClass(const string & className, createObject method){
    classMap[className] = method;
}

Object * ReflectFactory::createClass(const string & className){
    auto it = classMap.find(className);
    if (it != classMap.end()){
        return it->second();
    }
    return nullptr;
}