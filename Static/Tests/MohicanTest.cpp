#include "catch.hpp"
#include "../Mohican/Mohican.hpp"

TEST_CASE("test Mohican", "[Mohican]") {
    SECTION("test constructor"){
        Mohican *m1 = new Mohican("Iosif");
        
        REQUIRE(Mohican::last == m1);
        REQUIRE(m1->getName() == "Iosif");
        
        Mohican *m2(m1);
        
        REQUIRE(Mohican::last == m2);
        REQUIRE(m2->getName() == "Iosif");
        
        m1 = m2;
        REQUIRE(Mohican::last == m2);
    }
}
