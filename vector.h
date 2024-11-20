//
// Created by Tobias Samuel Sugandi on 20.11.2024.
//

#ifndef VECTOR_H
#define VECTOR_H

#include <cstddef>
// #include <algorithm>


class Vector {
public:
    // Constructors
    Vector();
    explicit Vector(std::size_t size);

    ~Vector();

    Vector(const Vector& other);

    Vector & operator=(const Vector & v);

    double get(std::size_t i) const;

    void set(std::size_t i, double d);

    std::size_t size() const;

private:
    std::size_t sz;
    double * elem;

    void swap(Vector& other);

};



#endif //VECTOR_H
