#include<iostream>
#include <algorithm>
#include"Store.h"
void Store::printContentsOfStore() {
	std::cout << "\n\nCLASS DESIGH PART 1: SECTION C:";
	std::cout << "\n===============================";
	std::cout << "\nStore:";
	for (auto& item : itemList) {
		std::cout << "\n" << item.getItemName() << " X " << item.getItemStock();
	}
}

void Store::insertItem(const Item item) {
	if (itemList.size() < 100)
		itemList.push_back(item);
	else
		std::cout << "Item List reached Limit.";
}

void Store::processOrder(const Order order) {
	std::cout << "\n======================================================";
	std::cout << "\n\t ~ P R O C E S S I N G   O R D E R ~";
	std::cout << "\n======================================================";
	order.printContentsOfOrder();
	std::cout << "\n======================================================";
	order.printTotalPrice();

	std::vector<Item> orderedItems = order.getItems();
	for (auto &item : orderedItems) {
		for (auto& stockItem : itemList) {
			if (item.getItemName() == stockItem.getItemName()) {
				if (stockItem.getItemStock() > 0&&stockItem.getItemStock()>=item.getItemStock()) {
					stockItem.setItemStock(stockItem.getItemStock() - item.getItemStock());
				}
				break;
			}
		}
		
	}
}
