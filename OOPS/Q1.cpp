// Class Product has properties product_name and product_price. Class GST has property gst_rate. Both the classes have properties to to set their respective methods. Function finalPrice, outside both the classes and friend of both the classes, calculate the total price of a product and displays it along with the product name.
#include <iostream>
using namespace std;
class GST;
class Product{
    private:
        string product_name;
        double price;
    public:
        //constructor
        Product(string n, double p):product_name(n),price(p){};
        //getter&setter
        void setn(string n){
            product_name=n;
        }
        void setn(double p){
            price=p;
        }
        string getn(){
            return product_name;
        }
        double getp(){
            return price;
        }
        friend void finalPrice(Product p, GST g);

};
class GST{
    private:
        double gst_rate;
    public:
        //constructor
        GST(double a):gst_rate(a){};
        //setter&getter
        void setg(double a){
            gst_rate=a;
        }
        double getg(){
            return gst_rate;
        }
        friend void finalPrice(Product p, GST g);

};
void finalPrice(Product p, GST g){
    double tp= p.getp() + (p.getp() * g.getg()/100);
    cout << "Product Name "<< p.getn()<<endl;
    cout<< "Total Price "<< tp<<endl;
}
int main(){
    string product_name;
    double price,gst_rate;
    cout << "Enter the product name" << endl;
    cin >> product_name;
    cout << "Enter the product price" << endl;
    cin >> price;
    cout << "Enter GST rate" << endl;
    cin >> gst_rate;
    Product p(product_name,price);
    GST g(gst_rate);
    finalPrice(p,g);
    return 0;

}