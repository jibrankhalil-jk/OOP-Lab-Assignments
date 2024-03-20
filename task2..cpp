#include <iostream>
#include <string>
using namespace std;


struct ProductData
{
  string Name;
  int Price;
  int Quantity;
};

ProductData createProductData(string Name, int Price, int Quantity)
{
  // creaing a temperory ProductData variable using the paremeteres
  ProductData temp_productdata = {Name, Price, Quantity};

  return temp_productdata;
  // return {Name, Price, Quantity}; //we ca also direct return the values like this
}

void displayProductData(ProductData productdata)
{
  // print the values
  cout << "Product Details" << endl;
  cout << "Name : " << productdata.Name << endl;
  cout << "Price : " << productdata.Price << endl;
  cout << "Quantity in Stock : " << productdata.Quantity << endl;
}

int main()
{
  

  // two variable of ProductData struct
  ProductData product1, product2;


  //assigning values using createProductData
  product1 = createProductData("Tea Packet ", 740, 1);
  product2 = createProductData("Milk Pack ", 240, 3);

 // displaying the values
  displayProductData(product1);
  cout << endl;
  displayProductData(product2);

  return 0;
}