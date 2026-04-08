#include "OldPrinter.h"
#include "Document.h"
#include "PrinterAdapter.h"


int main() {
    OldPrinter oldPrinter;
    Document doc({"Hello, World!", "Adapter Pattern Demo.", "Enjoy coding!"});

    PrinterAdapter adapter(oldPrinter);
    adapter.printDocument(doc);
    return 0;
}