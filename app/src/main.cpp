#include <iostream>
#include "utils.h"
#include "core.h"
#ifdef _WIN32
#include <windows.h>
#endif

int main(){
    #ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);  // установка utf8 для консоли в случае win
    #endif
    std::cout<<"Check this main file function!" << std::endl;
    core::base_function();
    utils::utility_function();
    std::cin.get();
    return 0;
}