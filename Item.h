#ifndef Item_HEADER
#define Item_HEADER
#include<string>
#include<ostream>
class Item {
public:
	Item(std::string, long, double, int);
	std::string getItemName() const;
	void setItemName(std::string itemName);
	long getItemId() const;
	void setItemId(long itemId);
	double getItemPrice() const;
	void setItemId(double itemPrice);
	int getItemStock() const;
	void setItemStock(int itemStock);
	friend std::ostream& operator<<(std::ostream& os, const Item &item);
private:
	std::string itemName;
	long itemId;
	double itemPrice;
	int itemStock;
};

#endif
