#include <iostream>
#include <vector>
#include <algorithm>

class Functor {
private:
    int count = 0;
    int sum = 0;
public:
    void operator()(int a) {
            if (a % 3 == 0) {  
                sum += a;
                ++count;
            }
    }
    int get_sum() {
        return sum;
    }
    int get_count() {
        return count;
    }
};

int main() {
    std::vector<int> arr = { 4, 1, 3, 6, 25, 54 };
    Functor f = std::for_each(arr.begin(), arr.end(), Functor());
    ;

    std::cout << f.get_sum() << std::endl;
    std::cout << f.get_count();


}