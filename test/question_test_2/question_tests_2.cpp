#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test modifyValues function", "modify_values") {
    int value = 3;
    int ref = 4;
    REQUIRE(modifyValues(value, ref) == 18);
    REQUIRE(ref == 12);
}