#include<string>
#include<ostream>
#include<iomanip>
#include"Item.h"
Item::Item(std::string itemName,long itemId,double itemPrice,int itemStock) {
	this->itemName = itemName;
	this->itemId = itemId;
	this->itemPrice = itemPrice;
	this->itemStock = itemStock;
}
std::string Item::getItemName() const{ return itemName; }
void Item::setItemName(std::string itemName) { this->itemName = itemName; }
long Item::getItemId() const { return itemId; }
void Item::setItemId(long itemId) { this->itemId = itemId; }
double Item::getItemPrice() const { return itemPrice; }
void Item::setItemId( double itemPrice) { this->itemPrice = itemPrice; }
int Item::getItemStock() const{ return itemStock; }
void Item::setItemStock(int itemStock) { this->itemStock = itemStock; }
std::ostream& operator<<(std::ostream& out, const Item& item)
{
	out<< "\n"<<std::setw(3) << item.getItemId()
		<< " | " << std::setw(20)<< item.getItemName() 
		<< " | " << std::setw(8)<< item.getItemPrice() 
		<< " | " << std::setw(8)<<item.getItemStock();
	return out;
}
