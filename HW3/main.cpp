#include <iostream>
#include "Pizza.h"
using namespace std;

int main()
{
    Pizza pizza1;
    Pizza pizza2("medium", "deep dish", 2, 2);
    Pizza pizza3("large", "hand-tossed", 4, 1);
    Pizza pizza4("small", "pan", 1, 3);
    Pizza pizza5("large", "deep dish", 2, 0);
    Pizza pizza6("medium", "pan", 4, 3);
    Pizza pizza7("medium", "hand-tossed", 2, 5);
    Pizza pizza8("small", "deep dish", 0, 0);

    pizza1.outputDescription();
    cout << "Price of pizza1: " << pizza1.computePrice() << "\n";
    pizza2.outputDescription();
    cout << "Price of pizza2: " << pizza2.computePrice() << "\n";
    pizza3.outputDescription();
    cout << "Price of pizza3: " << pizza3.computePrice() << "\n";
    pizza4.outputDescription();
    cout << "Price of pizza4: " << pizza4.computePrice() << "\n";
    pizza5.outputDescription();
    cout << "Price of pizza5: " << pizza5.computePrice() << "\n";
    pizza6.outputDescription();
    cout << "Price of pizza6: " << pizza6.computePrice() << "\n";
    pizza7.outputDescription();
    cout << "Price of pizza7: " << pizza7.computePrice() << "\n";
    pizza8.outputDescription();
    cout << "Price of pizza8: " << pizza8.computePrice() << "\n";
}