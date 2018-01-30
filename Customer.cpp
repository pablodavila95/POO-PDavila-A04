//
// Created by Pablo on 29/01/2018.
//

#include "Customer.h"
#include <iostream>

int Customer::getId()  {
    return id;
}

std::string &Customer::getName()  {
    return name;
}

double Customer::getDiscount()  {
    return discount;
}

void Customer::setDiscount(double discount) {
    //Discount is 10%
    discount = 0.90;
    Customer::discount = discount;
}

void Customer::Customer(int id, std::string name, double discount) {
    Customer::id = id;
    Customer::name = name;
    Customer::discount = discount;
}

std::string Customer::toString(std::string name, int id) {
    // Here we will output a string with name (ID)

    //getName();
    //getId();
    //std::string nameString = name + " (" + id + ")";
    //return nameString;
}

Customer::Customer() {

}
