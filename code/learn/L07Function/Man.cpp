//
//  Man.cpp
//  L03Public
//
//  Created by jski on 15/4/13.
//  Copyright (c) 2015年 watkin. All rights reserved.
//

#include "Man.h"
namespace watkin{
    
    //子类直接传参数给父类
    Man::Man(int age):People(age,1){
        // People::sayHello();//执行父类的方法 放到该子类的任何地方
    }
    void Man::sayHello(){
       // People::sayHello();//执行父类的方法
        printf("Man sayHello");
    }
    void Man::eat(){
        printf("Man eat \n");
    }
}