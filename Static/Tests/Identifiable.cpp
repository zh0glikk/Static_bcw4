#include "catch.hpp"
#include "../Identifiable/Identifiable.hpp"

TEST_CASE("test Identifiable", "[Identifiable]") {
    SECTION("test constructor"){
        Identifiable i1;
        
        REQUIRE(Identifiable::lastId == 1);
        
        Identifiable i2(i1);
        
        REQUIRE(Identifiable::lastId == 2);
        REQUIRE(i2.getId() == 2);
        
        i1 = i2;
        REQUIRE(i1.getId() == 1);
        REQUIRE(i2.getId() == 2);
    }
}
