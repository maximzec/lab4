//
// Created by User on 10.04.2019.
//

#include "classes.h"
//Child Class funcs

Child::Child() {
}

Child::Child(std::string name, std::string last_name, int age) {
    this->name = name;
    this->last_name = last_name;
    this->age = age;
}
Child::Child(const Child &object) : name(object.name) , last_name(object.last_name) , age(object.age){
	std::cout << "Copied";
}

Child::~Child() = default;

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
Tiles::Tiles() {}

Tiles::Tiles(std::string brand, int size_h, int size_w, int price) {
    this->brand = brand;
    this->size_h = size_h;
    this->size_w = size_w;
    this->price = price;
}

Tiles::Tiles(const Tiles &object) : brand(object.brand) , size_h(object.size_h) , size_w(object.size_w) , price(object.price)  {
	std::cout << "It was copied";
}

Tiles::~Tiles() = default;

void Tiles::getData() {
    std::cout << "brand: "<< this->brand << ", " << "width: "<< this->size_w << ", " << "height: " << this->size_h << ", " << "price:" <<this->price << std::endl;
}










//Complex Class funcs
Complex::Complex() {}

Complex::Complex(double re, double im) {
    this->re = re;
    this->im = im;
}

Complex::Complex(const Complex &object): re(object.re) , im(object.im) {
	std::cout << "Copied";
}

Complex::~Complex() = default;

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

Vector::Vector() {}

Vector::Vector(double x, double y) {
    this->x = x;
    this->y = y;
}

Vector::Vector(const Vector &object): x(object.x) , y(object.y) {
	std::cout << "Copied";
}

Vector::~Vector() = default;
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