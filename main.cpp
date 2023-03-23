#include <iostream>

namespace operations {
    template <typename T>
    const T& min (const T& a, const T& b) {
        return (a < b) ? a : b;
    }

    template <typename T>
    T min (std::initializer_list<T> initlist) {
        T min_val = *initlist.begin();
        for (const T& val : initlist) {
            if (val < min_val) {
                min_val = val;
            }
        }
        return min_val;
    }

    template <typename T>
    const T& max (const T& a, const T& b) {
        return (a > b) ? a : b;
    }

    template <typename T>
    T max (std::initializer_list<T> initlist) {
        T max_val = *initlist.begin();
        for (const T& val : initlist) {
            if (val > max_val) {
                max_val = val;
            }
        }
        return max_val;
    }
}

int main() {
    std::cout << " min(int a, int b) = "<< operations::min(20, 24) << std::endl;

    std::cout << " --------------------- " << std::endl;

    std::initializer_list <int> ilist = {1, 2, 3, 4, 5};

    std::cout << " min({1, 2, 3, 4, 5}) = "<< operations::min(ilist) << std::endl;

    std::cout << " max(int a, int b) = "<< operations::max(20, 24) << std::endl;

    std::cout << " --------------------- " << std::endl;

    std::cout << " max({1, 2, 3, 4, 5}) = "<< operations::max(ilist) << std::endl;

    return 0;
}
