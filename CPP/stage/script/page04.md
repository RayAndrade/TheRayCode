[home](./page01.md) | [back](./page03.md) | [next](./page03.md)

ADD:
**1 of 6 setBread**
```
public:
void setBread(const std::string& b) {
    bread = b;
}
```
and 
**2 of 6 setMeat**
```
void setMeat(const std::string& m) {
    meat = m;
}
```

and
**3 of 6 setCheese**
```
void setCheese(const std::string& c) {
    cheese = c;
}
```

**4 of 6 addVegetable**
```
void addVegetable(const std::string& vegetable) {
    vegetables.push_back(vegetable);
}
```

**5 of 6 addCondiment**
```
void addCondiment(const std::string& condiment) {
    condiments.push_back(condiment);
}
```

**6 of 6 display**
```
void display() const {
    std::cout << "Sandwich on " << bread << " bread with " << meat << " meat and " << cheese << " cheese. Vegetables: ";
    for (const auto& vegetable : vegetables) {
        std::cout << vegetable << " ";
    }
    std::cout << ". Condiments: ";
    for (const auto& condiment : condiments) {
        std::cout << condiment << " ";
    }
    std::cout << std::endl;
}
```


[page 5](./page05.md)
