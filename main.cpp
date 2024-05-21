// #include "./Timer.hpp"
// #include <boost/mysql.hpp>
// #include <gtest/gtest.h>

#include <algorithm>
#include <iostream>
#include <limits>
#include <unordered_map>
#include <vector>

using namespace std;

int main()
{
    Solution s;

    std::vector vec { 0, 1, 1, 4, 3 };
    std::cout << s.totalFruit(vec) << std::endl;

    return 0;
}
