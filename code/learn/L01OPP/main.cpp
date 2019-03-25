//
//  main.cpp
//  L01OPP
//
//  Created by jski on 15/4/10.
//  Copyright (c) 2015年 watkin. All rights reserved.
//

#include <iostream>
#include "People.h"

int main(int argc, const char * argv[]) {
    People *p = new People();
    p->sayHello();
    delete p;
    return 0;
}
