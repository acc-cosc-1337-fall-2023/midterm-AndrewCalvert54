#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test get_fahrenheit function", "temperature_conversion") {
	REQUIRE(get_fahrenheit(37) == Approx(98.6));
	REQUIRE(get_fahrenheit(25) == Approx(77.0));
	REQUIRE(get_fahrenheit(0) == Approx(32.0));
}