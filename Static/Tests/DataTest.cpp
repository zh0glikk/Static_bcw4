#include "catch.hpp"
#include "../Passport/Date.h"

TEST_CASE("date test", "[Date]") {
    Date date(12, 9, 2001);
    
    SECTION("constuctor") {
        REQUIRE(date.getDay() == 12);
        REQUIRE(date.getYear() == 2001);
        REQUIRE(date.getMonth() == 9);
    }
}
