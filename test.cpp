#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE ("Testing sum functions", "[sum]") {
    std::vector<int> v1{1, 2, 5, 10};
    REQUIRE(Sum(v1) == 18);
    std::vector<int> v2{30, 21, 2, -10};
    REQUIRE(Sum(v2) == 43);
}
