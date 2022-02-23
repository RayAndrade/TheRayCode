In this video I will be giving a demonstration of the Factory design pattern.
Let me show you the make file at te beginning.
We will later show how it change at the end of this tortial.

My CMakeList.txt file at the beginning.
```make
cmake_minimum_required(VERSION 3.21)
project(Show)

set(CMAKE_CXX_STANDARD 23)

add_executable(Show main.cpp)
```

Now I will create a file I call **Product.h**.

to this file I add the following code:
```c++
  Product{};
```
Inside of this *interface* we add the folloing code:
```c++
    public:
    virtual ~Product() {}
    virtual std::string Operation() const = 0;
```

because we are using the **std** we will to incude the iostream

```c++
 #include <iostream>
```

Now we create an interface I call **Creator**. The code for this file will be.

```c++

public:
```

```c++
    virtual ~Creator() {};
```

```c++
    virtual Product *FactoryMethod() const = 0;
```

```c++
    std::string SomeOperation() const {
```

```c++

        Product *product = this->FactoryMethod();
```

```c++
        std::string result = "Creator: The same creator's code has just worked with " + product->Operation();
```

```c++
        delete product;
```

```c++
        return result;
    }

```
