//
//  main.cpp
//  L07Function
//
//  Created by jski on 15/4/14.
//  Copyright (c) 2015年 watkin. All rights reserved.
//

#include <iostream>
#include "Man.h"

using namespace watkin;
int main(int argc, const char * argv[]) {
    People *p = new Man(26);
    p->sayHello();//执行的是 people sayHello
    //如果想像java一样的重写直接执行子类的方法      就需要把父类.h的实方法定义成虚函数 virtual
    //纯虚方法 就是某个类的方法都是虚函数 请使用=0 代表暂时不实现
    //但是 所有继承该纯虚方法的类都要实现
    p->eat();
    return 0;
}
