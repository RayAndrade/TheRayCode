//
// Created by ray on 9/14/23.
//

#ifndef EXAMPLE_PRINTERADAPTER_H
#define EXAMPLE_PRINTERADAPTER_H

#include "OldPrinter.h"
#include "Document.h"

class PrinterAdapter {
public:
    PrinterAdapter(OldPrinter& printer);
    void printDocument(const Document& doc);

private:
    OldPrinter& printer;
};

#endif //EXAMPLE_PRINTERADAPTER_H
