#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "doctest.h"
#include "NumberWithUnits.hpp"

using namespace std;
using namespace ariel;

TEST_CASE("test") {
    ifstream units_file{"units.txt"};
    NumberWithUnits::read_units(units_file);

    NumberWithUnits a{2, "km"};
    stringstream out;
    out << a;
    CHECK(out.str()=="2[km]");
    
    CHECK((-a)==NumberWithUnits(-2, "km"));
    CHECK((-NumberWithUnits(0, "km"))==NumberWithUnits(0, "km"));
    
    CHECK((3*a)==NumberWithUnits(6, "km"));
    CHECK((a*0)==NumberWithUnits(0, "km"));

    NumberWithUnits b{300, "m"};
    CHECK((a+b)==NumberWithUnits(2.3, "km"));
    CHECK((b-a)==NumberWithUnits(-1700, "m"));

    CHECK(a>b);
    CHECK_FALSE(a<=b);
    CHECK(a==NumberWithUnits{2000, "m"});

    istringstream sample_input{"700 [ kg ]"};
    sample_input >> a;
    CHECK(a==NumberWithUnits(700, "kg"));
    CHECK((a += NumberWithUnits{1, "ton"})==NumberWithUnits(1700, "kg"));
    out << a;
    CHECK(out.str()=="1700[kg]"); //Note that a has changed.
    
    CHECK_THROWS(a+b);

    istringstream wrong_input1{"10[usa]"};
    CHECK_THROWS(wrong_input1 >> a);

    istringstream wrong_input{"23[year]"};
    CHECK_THROWS(wrong_input >> a);

    NumberWithUnits c1{1, "hour"};
    NumberWithUnits c3{22, "sec"};

    CHECK((c3+c1)==NumberWithUnits(3622, "hour")); //Transativity
    
    c1++;
    out << c1;
    CHECK(out.str()=="2[hour]");
    CHECK(out.str()=="2[hour]");
    CHECK(out.str()=="2[hour]");
    

}