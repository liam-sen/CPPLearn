//
//  People.h
//  L01OPP
//
//  Created by jski on 15/4/10.
//  Copyright (c) 2015年 watkin. All rights reserved.
//

#ifndef __L01OPP__People__
#define __L01OPP__People__

#include <stdio.h>
namespace watkin {
    
    class People {
        
    private:
        int age;
        int sex;
    public:
        People();
        People(int age,int sex);
        int getAge();
        int getSex();
        void sayHello();
    };
}

#endif /* defined(__L01OPP__People__) */

