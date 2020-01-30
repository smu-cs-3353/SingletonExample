#include <iostream>
#include "PrinterSingleton.h"

int main() {

    //Trying to make a Printer Singleton Object will not even compile
    //PrinterSingleton p;


    PrinterManager* thePrinter = PrinterSingleton::getPrinterManager();
    thePrinter -> doPrint();
    thePrinter -> doPrint();

    PrinterManager* anotherPrinter = PrinterSingleton::getPrinterManager();
    anotherPrinter -> doPrint();
    anotherPrinter -> doPrint();



    std::cout << "Hello, World!" << std::endl;
    return 0;
}
