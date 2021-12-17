#ifndef Order_HEADER
#define Order_HEADER
#include<vector>
#include"Item.h"
class Order{
public:
	void printContentsOfOrder() const;
	void printTotalPrice() const;
	void insertItem(const Item item);
	std::vector<Item> getItems() const;
private:
	std::vector<Item> itemList;
};
#endif