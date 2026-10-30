#include <iostream>
#include <vector>

using namespace std;

int main(){

    // Start
    vector<int> quantities = {12, 8, 15, 6, 20};

    // Part A

    cout << "Number of items: " << quantities.size() << endl;

    for(int i = 0; i < quantities.size(); i++){
        cout << quantities.at(i) << " ";
    }
    cout << endl;

    // Part B

    quantities[1] = quantities[1] + 2;
    quantities[3] = quantities[3] + 3;

    for(int i = 0; i < quantities.size(); i++){
        cout << quantities.at(i) << " ";
    }
    cout << endl;

    // Part C

    for(int &quantity : quantities){
        quantity += 1;
    }

    
    

    for(const int &quantity : quantities){
        cout << quantity << " ";
    }

    cout << endl;

    // Part D

    vector<int>::iterator it = quantities.begin();

    while(it != quantities.end()){
        cout << *it << " ";
        it = it + 1;
    }

    // Part E

    quantities.pop_back();
    quantities.erase(quantities.begin() + 1);

    // Part F

    if(quantities.empty() == true){
        cout << "The inventory vector is empty." << endl;
    } else {
        cout << "The inventory vector is not empty." << endl;
    }

}