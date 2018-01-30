//
// Created by Pablo on 29/01/2018.
//
#include <iostream>

#ifndef POO_PDAVILA_A04_INVOICEITEMS_H
#define POO_PDAVILA_A04_INVOICEITEMS_H


class InvoiceItems {
private:
    std::string id;
    std::string description;
    int quantity;
    double unitPrice;

public:

    InvoiceItems(std::string id, std::string description, int quantity, double unitPrice);
    double getTotal();
    std::string toString ();


};



#endif //POO_PDAVILA_A04_INVOICEITEMS_H
