#pragma once
#include "item.h"
class Order_details
{
private:
  int quantity;
  item *i1;
public:
  Order_details();
  Order_details(int q);
  void viewItems();
  void calcSubtotal();
  ~Order_details();
};
