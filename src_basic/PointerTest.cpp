#include <iostream>
#include "../include/basic/iPointer.h"

using std::cout;
using std::endl;

void PointerClass::print(){
    
    //*ptr=>值； ptr=>指向地址； &ptr=>指针变量的地址；（数组，*ptr代表当前指针指向元素的值，指针强转为无类型指针 void *可输出指向地址）

    int ia [3] ={1,2};
    int * p = ia;
    //cout<<"&p   指针变量p的地址"<<&p<<endl;
    cout<<"&ia  数组首地址  "<<&ia<<endl;
    cout<<"ia   数组直接输出"<<ia<<endl;
    cout<<"p    指针直接输出"<<p<<endl;
    cout<<"*p   该位置的值"<<*p<<endl;
    cout<<"(void *)p   指针指向地址"<<static_cast<void *>(p)<<endl;
    cout<<"*p++ "<<*p++<<endl;

    
    //如果是int[]呢?
}
