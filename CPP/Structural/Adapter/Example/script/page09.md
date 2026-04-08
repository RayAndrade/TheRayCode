[home](./page01.md)

[back](./page08.md)

**@ the main.cpp**


```
#include "OldPrinter.h"
#include "Document.h"
#include "PrinterAdapter.h"
```


```
OldPrinter oldPrinter;
Document doc({"Hello, World!", "Adapter Pattern Demo.", "Enjoy coding!"});

PrinterAdapter adapter(oldPrinter);
adapter.printDocument(doc);
```


[page 10](./page10.md)
