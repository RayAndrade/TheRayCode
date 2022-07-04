//
// Created by ray on 7/4/22.
//
//
// Created by ray on 2/19/22.
//
#include <iostream>
using namespace std;

// #include "";

class Toy {
protected:
    string name;
    float price;
public:
    virtual void prepareParts()  = 0;
    virtual void combineParts()  = 0;
    virtual void assembleParts() = 0;
    virtual void applyLabel()    = 0;
    virtual void showProduct()   = 0;
};

class Car : public Toy{
    // make all constructor privater or protected

public:
    void prepareParts() { cout<< "Preparing Car Parts" <<endl; };
    void combineParts() { cout<< "combining Car Parts" <<endl; };
    void assembleParts() { cout<< "Assembling Car Parts" <<endl; };
    void applyLabel()  { cout<< "Preparing Car Label " <<endl; name = "Applying Car Label"; price = 10; };
    void showProduct() { cout<< "Preparing Car Parts" <<endl; };

};


class Bike : public Toy{
    // make all constructor privater or protected

public:
    void prepareParts() { cout<< "Preparing Bike Parts" <<endl; };
    void combineParts() { cout<< "combining Bike Parts" <<endl; };
    void assembleParts() { cout<< "Assembling Bike Parts" <<endl; };
    void applyLabel()  { cout<< "Preparing Bike Label " <<endl; name = "Applying Bike Label"; price = 10; };
    void showProduct() { cout<< "Preparing Bike Parts" <<endl; };

};


class Plane : public Toy{
    // make all constructor privater or protected

public:
    void prepareParts() { cout<< "Preparing Plane Parts" <<endl; };
    void combineParts() { cout<< "combining Plane Parts" <<endl; };
    void assembleParts() { cout<< "Assembling Plane Parts" <<endl; };
    void applyLabel()  { cout<< "Preparing Plane Label " <<endl; name = "Applying Plane Label"; price = 10; };
    void showProduct() { cout<< "Preparing Plane Parts" <<endl; };

};

class Object{

};