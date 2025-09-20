#include <iostream>
using namespace std;

class ShoppingCart {
private:
    int cart_id;
    string customer_name;
    int item_count;

public:
    // Constructor
    ShoppingCart() {
        cart_id = 0;
        customer_name = "Unknown";
        item_count = 0;
    }
    ShoppingCart(int id, string name, int count) {
        cart_id = id;
        customer_name = name;
        item_count = count;
    }
    void setData(int x , string n , int l){
        cart_id=x;
        customer_name = n ;
        item_count = l ;
    }

    // Destructor
    ~ShoppingCart() {
        cout << "Thank you, " << customer_name << endl;
    }

    // Function to display cart details
    void display_cart() {
        cout << "Cart ID: " << cart_id << endl;
        cout << "Customer Name: " << customer_name << endl;
        cout << "Number of Items in Cart: " << item_count << endl;
    }
};

int main(){
    int n ;
    cout<<"Enter the number of shopping carts : ";
    cin>>n;
    ShoppingCart* carts = new ShoppingCart[n];
        for (int i = 0; i < n; i++) {
        int id, count;
        string name;

        cout << "\nEnter details for customer " << i + 1 << ":\n";
        cout << "Cart ID: ";
        cin >> id;
        cout << "Customer Name: ";
        cin >> name;
        cout << "Number of Items: ";
        cin >> count;

        carts[i].setData(id, name, count);
    }

    // Display all carts
    cout << "\n--- Shopping Carts ---\n";
    for (int i = 0; i < n; i++) {
        carts[i].display_cart();
        cout << "----------------------\n";
    }

    // Free the memory
    delete[] carts;

    return 0;

}

// always make a default constructor while making an array of objects 