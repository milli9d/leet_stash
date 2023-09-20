#define BASE 16u

class Solution {
public:
    string toHex(int num) {
        /* converting to hex is dividing by 6 unless 0 */
        std::ostringstream os{};
        uint32_t temp = num;
        if(temp == 0u) {
            os << "0";
        }
        while(temp) {
            int rem = temp % BASE;
            temp = temp / BASE;
            char c = rem >= 10 ? rem - 10u + 'a' : rem + '0';
            os << c;
        }
        std::string out = os.str();
        std::reverse(out.begin(), out.end());
        return out;
    }
};