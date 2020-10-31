#include "catch.hpp"
#include "../Passport/Passport.hpp"


TEST_CASE("test Passport", "[Passport]") {
    SECTION("test constructor"){
        Passport p1("Sasha", "Zhoglik");
        
        REQUIRE(p1.getName() == "Sasha");
        REQUIRE(p1.getSurname() == "Zhoglik");
        REQUIRE(p1.getId() == 1);
        REQUIRE(p1.getSer() == std::make_pair('A', 'A'));
        
        Date d1 = p1.getBirth();
        REQUIRE(d1.getDay() == 12);
        REQUIRE(d1.getMonth() == 9);
        REQUIRE(d1.getYear() == 2001);
        
        Passport p2("Sasha", "Zhoglik2");
        REQUIRE(p2.getId() == 2);
        REQUIRE(p2.getSer() == std::make_pair('A', 'A'));

        Passport p3("Sasha", "Zhoglik3");
        p3.setSer(std::make_pair('A', 'B'));
        
        REQUIRE(p3.getId() == 1);
        REQUIRE(p3.getSer() == std::make_pair('A', 'B'));
    }
    
    SECTION("over MAX_ID test") {
        Passport p5("Sasha", "Zhoglik5");
        p5.setSer(std::make_pair('A', 'C'), 999999);

        REQUIRE(p5.getId() == 999999);
        REQUIRE(p5.getSer() == std::make_pair('A', 'C'));
        REQUIRE(Passport::lastId == 999999);
        REQUIRE(Passport::lastSer == std::make_pair('A', 'C'));

        Passport p6("Sasha", "Zhoglik6");
        REQUIRE(Passport::lastId == 1);
        REQUIRE(p6.getId() == 1);
        
        REQUIRE(Passport::lastSer == std::make_pair('A', 'D'));
        REQUIRE(p6.getSer() == std::make_pair('A', 'D'));
    }
    
}
