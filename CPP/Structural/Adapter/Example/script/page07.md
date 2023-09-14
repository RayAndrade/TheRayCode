[home](./page01.md)

[back](./page06.md)

**PrinterAdapter.h**

```
PrinterAdapter
```

```
#include "OldPrinter.h"
#include "Document.h"
```

```
class PrinterAdapter {  };
```

```
public:
    PrinterAdapter(OldPrinter& printer);
    void printDocument(const Document& doc);
```

```
private:
    OldPrinter& printer;
```


[page 8](./page08.md)
