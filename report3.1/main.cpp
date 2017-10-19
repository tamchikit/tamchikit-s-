//
//  main.cpp
//  实验报告3第一题
//
//  Created by tamchikit on 2017/10/17.
//  Copyright © 2017年 tamchikit. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int i,a;
    double b=1,sum = 0;
    for (i=1; i<=20; i++) {
        for(a=1;a<=i;a++){
           b=b*a;
        }
        sum=sum+b;
        b=1;
    }
    std::cout << "the sum is "<<sum<<std::endl;
    return 0;
}
