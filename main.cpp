#include <iostream>
#include <stdlib.h>

using namespace std;
class Product{
    public:
    void addProduct( double ProductID, string ProductName ,int price ,double Price,string ExpirationDate);
    void displayProducts();
    double addProduct(void);
    char answer;
    Product();
    private:
    string ProductName;
    string manufacturer;
    int price;
    string ExpirationDate;
    double ProductID;
};

 Product::Product(void){
     string answer;

    cout << "Hello USER!"<< endl;
do {
    cout << "Please Enter the following : "<< endl;
    cout << "Product ID : ";
    cin >> ProductID;
    cout << "Enter Product Name :";
    cin >> ProductName;
    cout << "Enter the Price :" ;
    cin >> price;
    cout << "Manufacturer of the Product : ";
    cin >> manufacturer;
    cout << " Expiration date of the Produuct : ";
    cin >>ExpirationDate;
    cout << "Do you wish to Enter more product? Y/N?"<< endl;
    cin >> answer;
}
 while (answer == "Y" || answer == "y");
 }



void Product :: displayProducts(){
       system ("CLS");
    cout << "Your Product ID is : "<< ProductID<< endl;
    cout << "Your Product Name is :"<< ProductName << endl;
    cout << "Your Product Price :"<< price << endl;
    cout << "Your Product Manufacturer is :"<< manufacturer << endl;
    cout << "Your Product Expiration Date is  :"<< ExpirationDate << endl;


}


int main()
{
    Product product;

    product.displayProducts();

    return 0;

}

