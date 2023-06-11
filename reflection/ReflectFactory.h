//
// Created by zhangxh-95 on 2023/6/11.
//

#pragma once
#include <string>
#include <iostream>
#include <map>
#include <functional>
using namespace std;

namespace chunhua{
namespace reflect{

class Object{
public:
    Object () {};
    ~ Object() {};
    virtual void show() =0;
    void setClassName(const string & name){
        className = name;
    };
    string className;
};

typedef function<Object *()> createObject;
// 单例Reflect工厂函数 用于存储全局的类元信息
class ReflectFactory{
public:
    void registerClass(const string & className,
                        createObject method);

    Object * createClass(const string & className);

private:
    map<string, createObject> classMap;

// 单例实现 参考Meyer's Singleton
public:
    static ReflectFactory & instance(){
        static ReflectFactory r;
        return r;
    }

    ReflectFactory(const ReflectFactory &) = delete;
    ReflectFactory & operator= (const ReflectFactory &) = delete;
private:
    ReflectFactory() {}
    ~ReflectFactory() {}
};
} //namespace reflect
} //namespace chunhua