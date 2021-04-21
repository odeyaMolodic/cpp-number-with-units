/**
 * 
 * 
 * @author Odeya Lavi
 * @since 2021-04
 */
#include <string>
using namespace std;

namespace ariel{
    
    class NumberWithUnits{
        private:
            double num;
            string unit;
        
        public:
            NumberWithUnits():num(0),unit(""){}   
            NumberWithUnits(double num, string unit)
            {
                this->num = num;
                this->unit = unit;
            }
            
            ~NumberWithUnits(){}

            static void read_units(ifstream &file);
    

            //Addition
            friend NumberWithUnits operator+(const NumberWithUnits& n1 , const NumberWithUnits& n2);
            friend NumberWithUnits operator+=(NumberWithUnits& n1 ,const NumberWithUnits& n2); //&
            friend const NumberWithUnits operator+(const NumberWithUnits&n1); //&

            NumberWithUnits& operator++(); //prefix
            const NumberWithUnits operator++(int); //postfix

            //Subtraction
            friend NumberWithUnits operator-(const NumberWithUnits& n1 , const NumberWithUnits& n2);
            friend NumberWithUnits operator-=(NumberWithUnits& n1 ,const NumberWithUnits& n2); //&
            friend NumberWithUnits operator-(const NumberWithUnits&n1); //const?

            NumberWithUnits& operator--(); 
            const NumberWithUnits operator--(int); //const?

            //Comparison
            friend bool operator>(const NumberWithUnits &n1,const NumberWithUnits &n2);
            friend bool operator>=(const NumberWithUnits &n1,const NumberWithUnits &n2);
            friend bool operator<(const NumberWithUnits &n1,const NumberWithUnits &n2);
            friend bool operator<=(const NumberWithUnits &n1,const NumberWithUnits &n2);
            friend bool operator==(const NumberWithUnits &n1,const NumberWithUnits &n2);
            friend bool operator!=(const NumberWithUnits &n1,const NumberWithUnits &n2);

            //Multiplication
            friend NumberWithUnits operator*(const NumberWithUnits &n,const double &num);
            friend NumberWithUnits operator*(const double &num,const NumberWithUnits &n);

            //Input and output
            friend ostream& operator<<(ostream& out, const NumberWithUnits& t);   
            friend istream& operator>>(istream& in, NumberWithUnits& t);
    };

}

