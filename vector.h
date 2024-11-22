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
    Vector(); // Default constructor
    explicit Vector(std::size_t size); // Constructor2

    ~Vector(); // Destructor

    Vector(const Vector& other); // Copy constructor

    Vector(Vector&& other);

    Vector & operator=(const Vector & v); // Assignment Operator

    Vector& operator=(Vector&& v);

    double get(std::size_t i) const;

    void set(std::size_t i, double d);

    double& operator[](std::size_t i); // Subscript operator (r/w)

    const double& operator[](std::size_t i) const; // Subscript operator

    double* begin(); // iterator

    double* end();

    const double* begin() const;

    const double* end() const;

    std::size_t size() const;

private:
    std::size_t sz;
    double * elem;

    void swap(Vector& other);

};



#endif //VECTOR_H
