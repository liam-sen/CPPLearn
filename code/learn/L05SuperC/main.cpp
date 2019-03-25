//
//  main.cpp
//  L05SuperC
//
//  Created by jski on 15/4/14.
//  Copyright (c) 2015年 watkin. All rights reserved.
//

#include <iostream>
#include "Man.h"

using namespace watkin;
int main(int argc, const char * argv[]) {
    Man *m = new Man(20);
    m->sayHello();
    return 0;
}
