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

TEST_CASE ("Testing product functions", "[product]") {
    std::vector<int> v1{2, 4, 6, -1};
    REQUIRE(Product(v1) == -48);
    std::vector<int> v2{0, 12, 19};
    REQUIRE(Product(v2) == 0);
}