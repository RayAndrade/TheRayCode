[home](./page01.md)

[back](./page07.md)

**PrinterAdapter.cpp**

```
PrinterAdapter
```

```
#include "PrinterAdapter.h"
```

```
PrinterAdapter::PrinterAdapter(OldPrinter& printer) : printer(printer) {}
```

```
void PrinterAdapter::printDocument(const Document& doc) {  }
```

add a for loop

```
for (const auto& line : doc.getLines()) {
        printer.printString(line);
    }
```


[page 9](./page09.md)
