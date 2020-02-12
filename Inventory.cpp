#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;

// constructor simply initializes member variables
Inventory::Inventory(string name, float price, int count)
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}

// sell() decrements the quantity of the item
void Inventory::sell()
{
  if (m_in_stock > 0) {
    m_in_stock--;
  } else {
    std::cout << "Sorry, that item is out of stock.\n";
  }
}

// stream extraction operator overload for convenient printing to screen
ostream& operator<<(ostream& stream, const Inventory& item)
{
  stream << item.m_name 
         << " $"
         << std::fixed << std::setprecision(2) << item.m_price;
  return stream;
}
