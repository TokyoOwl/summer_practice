#include <iostream>
#include <cassert>
#include <gtest/gtest.h>
#include "utils.h"
#include "core.h"

TEST(func_test, base_test)
{
    std::cout << core::base_function();
    std::string str = "This is a base function!\n";
    EXPECT_EQ(str, core::base_function());

}
TEST(func_test, utils_test)
{   
    std::cout << utils::utility_function();
    std::string str = "This is an utility function, that calls base_function(): This is a base function!\n";
    EXPECT_EQ(str, utils::utility_function());
}
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
