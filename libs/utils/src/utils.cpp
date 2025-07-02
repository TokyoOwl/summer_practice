#pragma once
#include <iostream>
namespace utils{
    int __declspec(dllexport) utility_function(){
        std::cout << "This is an utility function!" << std::endl;
        return 1;
    }
}