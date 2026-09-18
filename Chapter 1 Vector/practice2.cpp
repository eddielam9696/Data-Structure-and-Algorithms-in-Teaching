#include <iostream>
#include <vector>

using namespace std;

void showProduct(const vector<string>*, int);

int main(){

    int index;

    vector<string> products = {
        "Keyboard",
        "Mouse",
        "Monitor",
        "Webcam",
        "Headphones"
    };

    // list out all the products
    for(int i = 0; i < 5; i++){
        cout << "Product " << i << " : " << products.at(i) << endl;
    }
    cout << endl;


    //enter the product index you want to see
    cout << "Enter a product index: ";
    cin >> index;

    //a variable for the address of products
    const vector<string>* selectedProduct = &products;
    showProduct(selectedProduct, index);

}

void showProduct(const vector<string>* myProducts, int index){
    // try/catch to see if you can get the item or not from the given index.
    try{
        cout << "Product at " << index << " : " << myProducts->at(index) << endl;
    } catch(const out_of_range& e){
        cout << "Error : Product is out of range." << endl;
    }
}