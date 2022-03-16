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
    Pizza pizza6("medium", "hand-tossed", 2, 5);
    Pizza pizza7("small", "deep dish", 0, 0);

    pizza1.outputDescription();
    printf ("Price of pizza1: %.2f\n", pizza1.computePrice());
    pizza2.outputDescription();
    printf ("Price of pizza2: %.2f\n", pizza2.computePrice());
    pizza3.outputDescription();
    printf ("Price of pizza3: %.2f\n", pizza3.computePrice());
    pizza4.outputDescription();
    printf ("Price of pizza4: %.2f\n", pizza4.computePrice());
    pizza5.outputDescription();
    printf ("Price of pizza5: %.2f\n", pizza5.computePrice());
    pizza6.outputDescription();
    printf ("Price of pizza6: %.2f\n", pizza6.computePrice());
    pizza7.outputDescription();
    printf ("Price of pizza7: %.2f\n", pizza7.computePrice());
}