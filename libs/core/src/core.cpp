#pragma once
#include <iostream>
namespace core{
    int __declspec(dllexport) base_function(){
        std::cout << "This is a base function!" << std::endl;
        return 1;
    }
}