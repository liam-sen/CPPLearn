//
//  main.cpp
//  L02NameSpace
//
//  Created by jski on 15/4/12.
//  Copyright (c) 2015年 watkin. All rights reserved.
// 命名空间的使用

#include <iostream>
#include "People.h"

using namespace watkin;

int main(int argc, const char * argv[]) {
    People *p = new People();
    p->sayHello();
    return 0;
}
