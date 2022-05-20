#pragma once
#include "Order_details.h"
#include "Payment.h"
#include "Courier.h"
#define SIZE 2

class Order
{
private:
  Courier *c[SIZE];
  Payment *pay[SIZE];
  Order_details *order[SIZE];
  int orderID;
  float orderAmount;
  char orderAddress[50];
  char orderStatus[20];

public:
  Order();
  Order(int oID, float amnt, Order_details *o1, Order_details *o2, char address[], char status[], int cid1, int cid2, char cname1[], char cname2[], char type1[], char type2[], int p1, int p2, float a1, float a2);
  void assignCourier();
  void displayOrder();
  ~Order();
};
