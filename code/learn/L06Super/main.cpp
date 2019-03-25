//
//  main.cpp
//  L06Super
//
//  Created by jski on 15/4/14.
//  Copyright (c) 2015年 watkin. All rights reserved.
//

#include <iostream>
#include "Man.h"
using namespace watkin;
int main(int argc, const char * argv[]) {
    Man *m = new Man(26);
//  m->sayHello();//执行当前类的方法
    m->People::sayHello();//可以执行父类的方法
    return 0;
}
