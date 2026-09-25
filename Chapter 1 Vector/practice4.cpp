#include <iostream>
#include <vector>

using namespace std;

//part A
class Device{
    private:
        
        int id;
        string name;
        double price;

    public:
    
    Device(int deviceID, string deviceName, double devicePrice);
    int getID() const {
        return id;
    }
    string getName() const {
        return name;
    }
    void setPrice(const double newPrice){
        price = newPrice;
    }
    void display() const {
        cout << "ID: " << getID() << endl;
        cout << "Name: " << getName() << endl;
    }

};

int main(){

    //part B
    vector<Device*> inventory;

    Device* i1 = new Device(1, "Laptop", 899.99);
    Device* i2 = new Device(2, "Tablet", 499.99);
    Device* i3 = new Device(3, "Printer", 249.99);

    inventory.push_back(i1);
    inventory.push_back(i2);
    inventory.push_back(i3);

    inventory.insert(inventory.begin()+1, new Device(4, "Monitor", 329.99 ));

    //part C
    cout << inventory[0] << endl; //address
    cout << inventory.at(1) << endl; //address

    Device* allDevices;
    
    // allDevices->display();

    int index;

    cout << "What index do you want to see for the device?" << endl;
    cin >> index;

    // cout << inventory.at(index) << endl;
    inventory.at(index)->display();

    i2->setPrice(449.99);

    
    cout << "Displays the whole inventory:" << endl;


    //displays the whole inventory
    for(int i = 0; i < inventory.size(); i++){
        //cout << inventory.at(i) << endl;
        cout << "Index: " << i << endl;
        inventory.at(i)->display();
        cout << endl;
    }



    for(int i = 0; i < inventory.size(); i++){
        delete inventory[i];
    }
     

}

Device::Device(int deviceID, string deviceName, double devicePrice): id(deviceID), name(deviceName), price(devicePrice) {}







