#include<iostream>
using namespace std;
class GST;
class Product{
    private:
    string product_name;
    double product_price;
    public:
    Product(string n="",double p=0): product_name(n),product_price(p) {};
    void setn(string n){
        product_name=n;
    }
    void p(double p){
        product_price=p;
    }
    string getn(){
        return product_name;
    }
    double getp(){
        return product_price;
    }
    friend void finalprice(Product p, GST g);
};

class GST{
    private:
    double gst_rate;
    public:
    GST(double a=0):gst_rate(a){};
    void setg(double a)
    {
        gst_rate=a;
    }
    double getg(){
        return gst_rate;
    }
    friend void finalprice(Product p, GST g);
};
void finalprice(Product p, GST g){
    double tp = p.getp() + (p.getp() * g.getg() /100);
    cout << "Product Name " << p.getn() << endl;
    cout << "Total Price "<< tp << endl;
}
int main(){
    string product_name;
    double product_price, gst_rate;
    cout << "Enter the product name" << endl;
    cin >> product_name;
    cout << "Enter the product price" << endl;
    cin >> product_price;
    cout << "Enter GST rate"<< endl;
    cin >> gst_rate;
    Product p(product_name, product_price);
    GST g(gst_rate);
    finalprice(p,g);
    return 0;
}
