[home](./page01.md)

[back](./page04.md)


.h file

```
Document
```

```
#include <vector>
#include <string>
```

```
class Document { };
```

```
public:
    Document(const std::vector<std::string>& lines);
    const std::vector<std::string>& getLines() const;
```


```
private:
    std::vector<std::string> lines;
```


[page 6](./page06.md)
