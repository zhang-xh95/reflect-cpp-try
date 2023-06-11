//
// Created by zhangxh-95 on 2023/6/11.
//
#pragma once

#include "ReflectFactory.h"
using namespace chunhua::reflect;

namespace chunhua{
namespace reflect{

// 类元信息注册
class ClassRegister{
public:
    ClassRegister(const string & className, createObject method){
        ReflectFactory & factory = ReflectFactory::instance();
        factory.registerClass(className, method);
    }
};

// 注册className -> new className() 映射关系
#define REGISTER_CLASS(className) \
    Object * createObject##className(){ \
        Object * obj = new className(); \
        obj->setClassName(#className);  \
        return obj;                     \
    }                                   \
    ClassRegister classRegister##className(#className, createObject##className)


}// namespace reflect
}// namespace chunhua