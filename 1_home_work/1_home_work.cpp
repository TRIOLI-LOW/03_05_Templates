
#include <iostream>
#include <vector>


template<class T>
T  sqr (T  a) {
   
    return a * a;
};

template <class T>
std::vector<T> sqr(const std::vector<T> arr) {
    std::vector<T> res;
    res.reserve(arr.size());
    for (const auto& i : arr) {
       res.push_back(i * i);
    }
    return res;
}



int main()
{
    auto a = 5.6;
    std::cout << sqr(a);
    std::cout << std::endl;

    std::vector <int> arr = { -1, 2, 3, 4 };
    for (int i : sqr(arr)) {
        std::cout << i << "\t";
    }
}

