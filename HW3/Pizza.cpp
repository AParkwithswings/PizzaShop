#include <iostream>
#include "Pizza.h"
using namespace std;

// Default constructor
Pizza::Pizza() : size("small"), type("hand-tossed")
{
    cheese = 1;
    pepperoni = 0;
}

// NOT a class function! Purely for use within this file
string validateSize(string selectSize)
{
    if (selectSize != "small" && selectSize != "medium" & selectSize != "large")
    {
        throw "Size invalid.";
    }
    return selectSize;
}

// NOT a class function! Purely for use within this file
string validateType(string selectType)
{
    if (selectType != "hand-tossed" && selectType != "deep dish" & selectType != "pan")
    {
        throw "Type invalid.";
    }
    return selectType;
}

// Constructor with parameters
Pizza::Pizza(string selectSize, string selectType, int selectCheese, int selectPepperoni) : size(validateSize(selectSize)), type(validateType(selectType))
{
    if (selectCheese < 0 || selectCheese > 99)
    {
        throw "selectCheese invalid.";
    }
    cheese = selectCheese;

    if (selectPepperoni < 0 || selectPepperoni > 99)
    {
        throw "selectPepperoni invalid.";
    }
    pepperoni = selectPepperoni;
}

// Accessors
string Pizza::getSize()
{
    return size;
}
string Pizza::getType()
{
    return type;
}
int Pizza::getCheese()
{
    return cheese;
}
int Pizza::getPepperoni()
{
    return pepperoni;
}

// Mutators (none for constants, because they don't change)
void Pizza::setCheese(int selectCheese)
{
    cheese = selectCheese;
}
void Pizza::setPepperoni(int selectPepperoni)
{
    pepperoni = selectPepperoni;
}

// Prints a description of this pizza
void Pizza::outputDescription()
{
    cout << size << " " << type << " pizza with " << cheese << " cheese and " << pepperoni << " pepperoni.\n";
}

// Computes and returns the price of this pizza
double Pizza::computePrice()
{
    double price = 0;
    if (size == "small")
    {
        price += 10.0;
    }
    else if (size == "medium")
    {
        price += 14.0;
    }
    else if (size == "large")
    {
        price += 17.0;
    }
    price += (2 * cheese) + (2 * pepperoni);

    return price;
}
