

#include <iostream>

template<class T>
class table {
private:
    table(const table&) = delete;
public:
    unsigned rows = 0;
    unsigned cols = 0;
    T** arr;
    table(unsigned rows_, unsigned cols_) {
        rows = rows_;
        cols = cols_;
        arr = new T * [rows];
        for (int i = 0; i < rows; ++i) {
            arr[i] = new T[cols];
        }
    }
    ~table() {
        for (int i = 0; i < rows; ++i) {
            delete[] arr[i];
        }
        delete[] arr;
    }
 

   T* operator [](unsigned a) {
       return arr[a];
   }
   const T* operator [](unsigned a) const {
       return arr[a];
   }

   T Size() {
       return rows * cols;
   }
};




int main()
{
    
    auto test = table<int>(2, 3);
   
    test[0][0] = 4;
    std::cout << test[0][0];
}


