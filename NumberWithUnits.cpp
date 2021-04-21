#include "NumberWithUnits.hpp"
namespace ariel{

void NumberWithUnits::read_units(ifstream &file){}
    
//Addition
NumberWithUnits operator+(const NumberWithUnits& n1 , const NumberWithUnits& n2){return NumberWithUnits();}
NumberWithUnits operator+=(NumberWithUnits& n1 ,const NumberWithUnits& n2){return NumberWithUnits();}
const NumberWithUnits operator+(const NumberWithUnits&n1){return NumberWithUnits();}

NumberWithUnits& NumberWithUnits::operator++(){return *this;}
const NumberWithUnits NumberWithUnits::operator++(int){return *this;}

//Subtraction
NumberWithUnits operator-(const NumberWithUnits& n1 , const NumberWithUnits& n2){return NumberWithUnits();}
NumberWithUnits operator-=(NumberWithUnits& n1 ,const NumberWithUnits& n2){return NumberWithUnits();}
NumberWithUnits operator-(const NumberWithUnits&n1){return NumberWithUnits();}

NumberWithUnits& NumberWithUnits::operator--(){return *this;}
const NumberWithUnits NumberWithUnits::operator--(int){return *this;}

//Comparison
bool operator>(const NumberWithUnits &n1, const NumberWithUnits &n2){
    return false;}
bool operator>=(const NumberWithUnits &n1, const NumberWithUnits &n2){return false;}
bool operator<(const NumberWithUnits &n1, const NumberWithUnits &n2){return false;}
bool operator<=(const NumberWithUnits &n1, const NumberWithUnits &n2){return false;}
bool operator==(const NumberWithUnits &n1, const NumberWithUnits &n2){return false;}
bool operator!=(const NumberWithUnits &n1, const NumberWithUnits &n2){return false;}

//Multiplication
NumberWithUnits operator*(const NumberWithUnits &n, const double &d){return NumberWithUnits();}
NumberWithUnits operator*(const double &d, const NumberWithUnits &n){return NumberWithUnits();}

//Input and output
ostream& operator<<(ostream& out, const NumberWithUnits& n){return out;}   
istream& operator>>(istream& in, NumberWithUnits& n){return in;}
}