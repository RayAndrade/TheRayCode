//
// Created by ray on 9/14/23.
//

#include "PrinterAdapter.h"

PrinterAdapter::PrinterAdapter(OldPrinter& printer) : printer(printer) {}

void PrinterAdapter::printDocument(const Document& doc) {
    for (const auto& line : doc.getLines()) {
        printer.printString(line);
    }
}