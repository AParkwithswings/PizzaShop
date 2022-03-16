#ifndef PIZZACLASS_H
#define PIZZACLASS_H
#include <string>
class Pizza
{
public:
    // Default constructor
    Pizza();

    // Constructor with parameters
    Pizza(std::string, std::string, int, int);

    // Accessors
    std::string getSize();
    std::string getType();
    int getCheese();
    int getPepperoni();

    // Mutators (none for constants, because they don't change)
    void setCheese(int);
    void setPepperoni(int);

    // Prints a description of this pizza
    void outputDescription();

    // Computes and returns the price of this pizza
    double computePrice();

private:
    const std::string size;
    const std::string type;
    int cheese;
    int pepperoni;
};
#endif