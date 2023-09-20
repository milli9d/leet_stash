#include <stdlib.h>
#define BASE 7


class Solution {
public:
    string convertToBase7(int num) {
        
        if(num == 0) {return "0";}
        
        std::ostringstream os{};        
        bool neg = false;
        
        /* if number is negative , mark negative and take absolute value */
        if(num < 0) {
            num = abs(num);
            neg = true;
        }
        
        /* convert to base */
        while(num) {
            int rem = num % BASE;
            num /= BASE;
            os << rem;
        }
        
        /* append negation sign */
        if(neg) {
            os << '-';
        } 

        std::string out = os.str();
        std::reverse(out.begin(), out.end());
        return out;
    }
};