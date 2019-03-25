//
//  People.cpp
//  L01OPP
//
//  Created by jski on 15/4/10.
//  Copyright (c) 2015年 watkin. All rights reserved.
//

#include "People.h"
namespace watkin {
    People::People(){
        this->age = 20;
        this->sex = 1;
    }
    People::People(int age,int sex){
        this->age = age;
        this->sex = sex;
    }
    int People::getAge(){
        return this->age;
    }
    int People::getSex(){
        return this->sex;
    }
    
    void People::sayHello(){
        printf("people sayHello  \n");
    }
    
    
}