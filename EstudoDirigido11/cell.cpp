/*
 Exemplo1101 - v0.0. - __ / __ / _____
 Author: ________________________
*/
// dependencias
#include <iostream> // std::cin, std::cout, std:endl
#include <limits>   // std::numeric_limits
#include <string>   // para cadeias de caracteres

#include "cell.hpp"

// ----------------------------------------------- classes / pacotes
void pause(std::string text)
{
    std::string dummy;
    std::cin.clear();
    std::cout << std::endl
              << text;
    std::cin.ignore();
    std::getline(std::cin, dummy);
    std::cout << std::endl
              << std::endl;
} // end pause ( )
#include "myarray.hpp"
using namespace std;
int main(int argc, char **argv)
{
    ref_int_Cell first = nullptr;
    intCell *a = new intCell ();
        if (a!=nullptr)
        {
            std::cout << a-> getValue () << std::endl;
        }
    std::cout << std::endl;
    intCell *b = new intCell (1);
        if (b!= nullptr)
        {
            b->print();
        }
        if (a!= nullptr && b != nullptr)
        {
            a -> setLink (b);
            a -> print ();
        }
    std::cout << std::endl;
    intCell *c = new intCell (2);
    if (b!=nullptr)
    {
        b -> connect (c);
        a->print ();
    }
    std::cout << std::endl;
    int x = 0;
    for (x = 3; x <= 6; x++)
    {
        a -> append (x);
        a -> print ();
        std::cout << std::endl;
        std::cout << "length = " << a->getLength() << std::endl;
        std::cout << std::endl;
    }
    
    while (a!=nullptr)
    {
        b = a->getLink();
        a -> connect (b);
        a = b;
        a -> print ();
    }

    /*while (a!= nullptr)
    {
    b = a->getLink();
    a->disconnect (b);
    a=b;
    std::cout << std::endl;
    a->print();
    std::cout << std::endl;
    }*/
    // encerrar
    pause("Apertar ENTER para terminar");
    return (0);
} // fim main( )