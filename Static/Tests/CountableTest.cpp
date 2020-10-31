#include "catch.hpp"
#include "../Countable/Countable.hpp"

TEST_CASE("test countable", "[Countable]") {
    SECTION("test constructor"){
        Countable c1;
        
        REQUIRE(Countable::amount == 1);
        
        Countable c2;
        
        REQUIRE(Countable::amount == 2);
        
        Countable c3;
        
        REQUIRE(Countable::amount == 3);
    }
}
