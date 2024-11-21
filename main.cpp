//
// Created by Tobias Samuel Sugandi on 20.11.2024.
//

#include <iostream>
// #include <vector>
// using iterator = std::vector<int>::iterator;


// #include "vector.cpp"
#include "vector.h"

int main()
{
    Vector v(3);

    for (std::size_t i = 0; i < v.size(); i++)
        v.set(i,i);

    // Vector w= v;     // copy constructor
    Vector w(3);    // assignment
    w = v;
    for (std::size_t i = 0; i != w.size(); i++) {
        // w.set(i, i*i);
        w[i] = i*i;
    }

    for (std::size_t i = 0; i != w.size(); i++) {
        // std::cout << w.get(i) << std::endl;
        std::cout << w[i] << std::endl;
    }

    for (auto i = v.begin(); i != v.end(); i++) {
        std::cout << *i << std::endl;
    }


    // // Vector of length 10
    // std::vector<int> v(3);
    // // Input
    // for (int i= 0; i < v.size(); ++i)
    //     std::cin >> v[i];
    //
    // // Output
    // for (auto it = v.begin(); it != v.end(); ++it)
    //     std::cout<< *it << " ";
    // std::cout << std::endl;
    //
    // for (auto & x: v) {
    //     x = x * x;
    // }
    //
    // for (const auto x : v) {
    //     std::cout << x << " ";
    // }

    return 0;
}
