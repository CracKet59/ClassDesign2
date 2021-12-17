#ifndef Store_HEADER
#define Store_HEADER
#include<string>
#include<vector>
#include"Item.h"
#include"Order.h"
class Store {
public:
	void printContentsOfStore();
	void insertItem(const Item item);
	void processOrder(const Order order);
private:
	std::vector<Item> itemList;
};
#endif