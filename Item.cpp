#include "Item.h"
#include <iostream>
using namespace std;

// 4. Implement Default Constructor Implementation
Item::Item()
{
  itemCode = 0;
  unitPrice = 0;
  discount = 0;
}
// 5. Implement Overloaded Constructor Implementation
Item::Item(int pitemCode, float punitPrice)
{
  itemCode = pitemCode;
  unitPrice = punitPrice;
}
// 6. Implement Destructor (display "Destructor Called")
Item::Item(){
  cout<<"Destructor called"<<endl;
}

void Item::setDiscount(float pdiscount) {
  discount = pdiscount;
}

float Item::getDiscount() {
  return discount;
}

float Item::discountedPrice() {
   return unitPrice - unitPrice * discount/100;
}

void Item::display() {
  cout << "Item : " << itemCode << endl;
  cout << "Discounted Price " << discountedPrice() << endl;
}
