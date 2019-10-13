#include <iostream>

class Solution {
public:
	void fun(const char * str) {
        std::cout<<str<<std::endl;
	}
};

int main(){
    Solution S1;
    S1.fun("My Program");
    return 0;
}