//
//  main.cpp
//  L04CMethos
//
//  Created by jski on 15/4/14.
//  Copyright (c) 2015年 watkin. All rights reserved.
//

#include <iostream>
class Object{
public:
    //构造方法
    Object(){
        printf("Create Object \n");
        
    }
    //析构方法
    ~Object(){
        printf("Delete Object");
    }
};

int main(int argc, const char * argv[]) {
//    Object *obj = new Object();//调用构造方法
//    delete  obj;//删除的时候后调用 析构方法
//    Object obj; 这个局部变量 这时候 会直接调用构造方法后 当该函数执行完成 就会调用析构方法
    return 0;
}
