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

TEST_CASE("Testing other function", "[Product]"){
    std::vector<int> v1{1, 2, 5, 10};
    REQUIRE(Product(v1) == 100);
    std::vector<int> v2{3, -1, 2, -10};
    REQUIRE(Sum(v2) == -60);
    std::vector<int> v3{2, 4, 6, -1};
    REQUIRE(Product(v3) == -48);
    std::vector<int> v4{0, 12, 19};
    REQUIRE(Product(v4) == 0);
}
