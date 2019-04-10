//
// Created by User on 10.04.2019.
//

#ifndef LAB3_CLASSES_H
#define LAB3_CLASSES_H
#include <math.h>
#include <iostream>

class Child{
    private:
        std::string name;
        std::string last_name;
        int age;
    public:
       Child();
       Child(std::string name , std::string last_name , int age);
       Child(const Child& object);
       ~Child();
       int getAge();
       std::string getName();
       std::string getLastName();
       void setName(std::string name );
       void setLastName(std::string last_name);
       void setAge(int age);
};

class Tiles{
    public:
        std::string brand;
        int size_h;
        int size_w;
        int price;

        Tiles();
        Tiles(std::string brand , int size_h , int size_w , int price);
        Tiles(const Tiles& object);
        ~Tiles();
        void getData();
};

class Complex{
    private:
        double re;
        double im;
    public:
        Complex();
        Complex(double re , double im);
        Complex(const Complex& object);
        ~Complex();
        void setData(double re , double im);
        void getAbs();
        void printComplex();
};

class Vector{
    private:
        double x;
        double y;
    public:
        Vector();
        Vector(double x , double y);
        Vector(const Vector& object);
        ~Vector();
        void getAbs();
        void sumVector(Vector vector);
        void diffVector(Vector vector);
        void setValues(double x , double y);
        double get_X();
        double get_Y();
};

#endif //LAB3_CLASSES_H
