#include <iostream>
#include "classes.h"
int main() {
    int age1, age2;
    std::string name1 , name2, last_name1, last_name2;
    double re , im , x1, x2 , y1 ,y2;


    Child child1, child2;
    Tiles tiles1, tiles2;
    Vector vector1, vector2;
    Complex complex1;

    std::cout << "Enter the first child data:" ;
    std::cin >> name1 >> last_name1 >> age1;
    child1.setName(name1);
    child1.setLastName(last_name1);
    child1.setAge(age1);
    std::cout << std::endl;
    std::cout << "Name is " << child1.getName() << ", Last Name is " << child1.getLastName() << ", Age is " << child1.getAge() << std::endl;

    std::cout << "Enter the second child data:" ;
    std::cin >> name2 >> last_name2 >> age2;
    child2.setName(name2);
    child2.setLastName(last_name2);
    child2.setAge(age2);
    std::cout << std::endl;
    std::cout << "Name is " << child2.getName() << ", Last Name is " << child2.getLastName() << ", Age is " << child2.getAge()<<std::endl;

    std::cout << "Enter the first Tiles data: ";
    std::cin >> tiles1.brand >> tiles1.size_h >> tiles1.size_w >> tiles1.price;
    tiles1.getData();

    std::cout << "Enter the second Tiles data: ";
    std::cin >> tiles2.brand >> tiles2.size_h >> tiles2.size_w >> tiles2.price;
    tiles2.getData();

    std::cout << "Enter the Complex number: ";
    std::cin >> re >> im;
    complex1.setData(re, im);
    complex1.printComplex();
    complex1.getAbs();

    std::cout << "Enter the first vector: ";
    std::cin >> x1 >> y1;
    vector1.setValues(x1 , y1);

    std::cout << std::endl;

    std::cout << "Enter the second vector: ";
    std::cin >> x2 >> y2 ;
    vector2.setValues(x2 , y2);
    std::cout << std::endl;

    vector1.getAbs();
    vector2.getAbs();

    std::cout << std::endl;
    vector1.sumVector(vector2);
    std::cout << "The sum is" << vector1.get_X() <<" "<< vector1.get_Y();




    return 0;
}