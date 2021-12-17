// ClassDesignPart2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "WebURL.h"
#include "CameraImage.h"
#include "Store.h"
#include "Order.h"
int main()
{
	// CLASS DESIGH PART - I SECTION A 
	const WebURL url("https", "example.com", "");    // CREATING WebURL object
	std::cout << url; // calling ostream overload function to print url object.
	// CLASS DESIGN PART - I SECTION B
	// folloing line create CameraImage object
	CameraImage cameraImage("myPhoto", "JPEG", getCurrentDate(), 34.66, "John", "34 X 35", "f/33", "1/1000", 600, true);
	std::cout<<cameraImage; // calling non member function with ostream overload function.

	 //CLASS DESIGN PART - I SECTION C
	Store store;   // create store object
	Order order; // creating Order object;
	 // inserting item objects in store list of items.
	Item book("Book", 1, 123.12, 12);
	Item coloredPencil("Colored Pencils", 2, 234.23, 15);
	Item coloringPaper("Coloring Paper", 3, 345.34, 20);
	Item marker("Markers", 4, 456.45, 50);
	Item crayon("Crayons", 5, 567.56, 3);
	Item staple("Staples", 6, 678.67, 7);
	store.insertItem(book);
	store.insertItem(coloredPencil);
	store.insertItem(coloringPaper);
	store.insertItem(marker);
	store.insertItem(crayon);
	store.insertItem(staple);

	// printing available items of store by calling non member function.
	store.printContentsOfStore();


	Item coloredPencils("Colored Pencils", 2, 234.23, 3);
	Item coloringPapers("Coloring Paper", 3, 345.34, 2);
	Item markers("Markers", 4, 456.45, 5);
	Item crayons("Crayons", 5, 567.56, 1);

	order.insertItem(coloredPencils);
	order.insertItem(coloringPaper);
	order.insertItem(markers);
	order.insertItem(crayons);

	store.processOrder(order);

	store.printContentsOfStore();
}

