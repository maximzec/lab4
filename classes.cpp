//
// Created by User on 10.04.2019.
//

#include "classes.h"
//Child Class funcs
int Child::getAge() {
    return this->age;
}
std::string Child::getLastName() {
    return this->last_name;
}
std::string Child::getName() {
    return this->name;
}
void Child::setAge(int age) {
    this->age = age;
}
void Child::setLastName(std::string last_name) {
    this->last_name = last_name;
}
void Child::setName(std::string name) {
    this->name = name;
}

//Tiles Class funcs
void Tiles::getData() {
    std::cout << "brand: "<< this->brand << ", " << "width: "<< this->size_w << ", " << "height: " << this->size_h << ", " << "price:" <<this->price << std::endl;
}

//Complex Class funcs
void Complex::printComplex() {
    if(this->im >= 0) std::cout << this->re <<"+"<<this->im << "i" << std::endl;
    else std::cout << this->re <<"-"<<this->im << "i" << std::endl;
}

void Complex::getAbs() {
    std::cout << "The Abs = "<<sqrt(this->re*this->re + this->im*this->im);
}

void Complex::setData(double re , double im){
    this->re = re;
    this->im = im;
}

//Vector Class funcs
void Vector::setValues(double x, double y) {
    this->x = x;
    this->y = y;
}

double Vector::get_X() {
    return this->x;
}

double Vector::get_Y() {
    return this->y;
}

void Vector::getAbs() {
    std::cout << "The Abs = "<<sqrt(this->x*this->x + this->y*this->y);
}

void Vector::sumVector(Vector vector) {
    this->x += vector.get_X();
    this->y += vector.get_Y();
}

void Vector::diffVector(Vector vector) {
    this->x -= vector.get_X();
    this->y -= vector.get_Y();
}