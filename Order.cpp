#include "Order.h"
#include <iostream>
#include <cstring>
#define SIZE 2
using namespace std;

Order::Order()
{
  c[0] = new Courier(101,"");
  c[1] = new Courier(102,"");
  pay[0] = new Payment("",00,0.0);
  pay[1] = new Payment("",00,0.0);
}

Order::Order(int oID, float amnt, Order_details *o1, Order_details *o2, char address[], char status[], int cid1, int cid2, char cname1[], char cname2[], char type1[], char type2[], int p1, int p2, float a1, float a2)
{
  order[0] = o1;
  order[1] = o2;
  c[0] = new Courier(cid1,cname1);
  c[1] = new Courier(cid2,cname2);
  pay[0] = new Payment(type1, p1, a1);
  pay[1] = new Payment(type2, p2, a2);
  strcpy(orderAddress,address);
  strcpy(orderStatus,status);
  orderID = oID;
  orderAmount = amnt;
}

void Order::assignCourier()
{
  
}

void Order::displayOrder()
{
  
}

Order::~Order()
{
  for (int i=0; i <SIZE; i++) 
  {
    delete c[i];
    delete pay[i]; 
  }
    
}
