#include <iostream>
#include "utils.h"
#include "core.h"

int main(){
    std::cout<<"Check this main file function!" << std::endl;
    core::base_function();
    utils::utility_function();
    std::cin.get();
    return 0;
}