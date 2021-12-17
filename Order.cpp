#include<iostream>
#include<iomanip>
#include"Order.h"
void Order::printContentsOfOrder() const {
	std::cout << "\nOrder:";
	std::cout << "\n" << std::setw(3)<<"ID" 
		<< " | " << std::setw(20)<< "ITEM NAME" 
		<< " | "<< std::setw(8) << "PRICE"
		<< " | " << std::setw(8) << "COUNT";
	for (auto& item : itemList) {
		std::cout << item;
	}
}
void Order::printTotalPrice() const {
	std::cout << "\nTotal Order Price:";
	double price = 0.0;
	for (auto& item : itemList) {
		price += item.getItemPrice();
	}
	std::cout << price;
}

void Order::insertItem(const Item item) {
	if (itemList.size() < 10)
		itemList.push_back(item);
	else
		std::cout << "\nNo More than 10 Orders.";
}

std::vector<Item> Order::getItems() const { return itemList; }

