//
// Created by Tobias Samuel Sugandi on 20.11.2024.
//
#ifndef VECTOR_CPP
#define VECTOR_CPP

#include "vector.h"

// #include <cstddef>
#include <algorithm>

// class Vector {
// public:
// constructors
Vector::Vector(): sz{0}, elem{nullptr} {};
Vector::Vector(std::size_t s) : sz{s}, elem{new double[s] }{}

// copy constructor (deep copy)
Vector::Vector(const Vector &v): Vector(v.sz) {
    std::copy(v.elem, v.elem + v.sz, elem);
}

// destructor
Vector::~Vector() {
    delete[] elem;
}

// assignment operator
Vector& Vector::operator=(const Vector& v) {
    // if (v.elem == elem) return *this;
    // if (elem != nullptr) delete [] elem;
    // sz = v.sz;
    // elem = new double[sz];
    // std::copy(v.elem, v.elem+v.sz, elem);

    // -- Copy and Swap Idiom --
    Vector cpy(v);
    swap(cpy);
    return *this;
}

//getter
double Vector::get(std::size_t i) const {
    return elem[i];
}

// setter
void Vector::set(std::size_t i, double d) {
    elem[i] = d;
}

double& Vector::operator[](std::size_t i) {
    return elem[i];
}

const double& Vector::operator[](std::size_t i) const {
    return elem[i];
}

double* Vector::begin() {
    return elem;
}

double* Vector::end() {
    return elem + sz;
}

const double* Vector::begin() const {
    return elem;
}

const double* Vector::end() const {
    return elem + sz;
}

// size property
std::size_t Vector::size() const {
    return sz;
}


// private:
    // std::size_t sz;
    // double* elem;

void Vector::swap(Vector& v) {
    std::swap(sz, v.sz);
    std::swap(elem, v.elem);
}
// };

#endif