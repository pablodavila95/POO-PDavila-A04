//
// Created by Pablo on 29/01/2018.
//

#include "Invoice.h"

const std::string &Invoice::getId() const {
    return id;
}

const Customer &Invoice::getCustomer() const {
    return customer;
}

double Invoice::getAmount() const {
    return amount;
}

Invoice::Invoice(std::string id, int customerID, std::string name, double discount) {

}

void Invoice::setCustomer(const Customer &customer) {
    Invoice::customer = customer;
}

Invoice::Invoice(std::string id, Customer customer) {

}

bool Invoice::findItem() {
    return false;
}

void Invoice::recalculateAmount() {

}

double Invoice::getAmountAfterDiscount() {
    return 0;
}

std::string Invoice::getCustomerName() {
    return std::__cxx11::string();
}

bool Invoice::addItem(std::string id, std::string description, int quantity, double unitPrice) {
    recalculateAmount();
    return true;
}

bool Invoice::addItem(InvoiceItems item) {
    recalculateAmount();
    return true;
}

bool Invoice::removeItem(std::string id) {
    recalculateAmount();
    return true;
}

bool Invoice::removeItem(InvoiceItems item) {
    recalculateAmount();
    return true;
}

void Invoice::updateItem(std::string id, std::string description) {
    recalculateAmount();
}

bool Invoice::updateItem(std::string id, int quantity) {
    recalculateAmount();
    return true;
}

bool Invoice::updateItem(std::string id, double unitPrice) {
    recalculateAmount();
    return true;
}

bool Invoice::updateItem(InvoiceItems item) {
    recalculateAmount();
    return true;
}

std::string Invoice::toString() {
    return std::__cxx11::string();
}
