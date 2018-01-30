//
// Created by Pablo on 29/01/2018.
//

#include "InvoiceItems.h"

InvoiceItems::InvoiceItems(std::string id, std::string description, int quantity, double unitPrice) {

}

double InvoiceItems::getTotal() {
    return unitPrice*quantity;
}

std::string InvoiceItems::toString() {
    return std::__cxx11::string();
}
