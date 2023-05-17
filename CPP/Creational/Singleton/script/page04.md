[home](./page01.md)

[back](./page03.md)

The Singleton class is defined in Singleton.h. It has a private constructor, which ensures that the class cannot be directly instantiated. The copy constructor and assignment operator are deleted to prevent copying.

In the Singleton.cpp file, the instance is initialized to nullptr and the getInstance() function checks if instance is nullptr. If it is, it creates a new Singleton object and assigns it to instance. If it isn't nullptr, then it just returns the existing instance.

In the Demo.cpp file, the main() function gets two instances of the Singleton class. It then prints out the memory addresses of these two instances. Since the Singleton pattern ensures that there's only one instance of the Singleton class, these two addresses should be the same.

Please note that this basic Singleton implementation is not thread-safe. If you are working in a multithreaded environment, you should use mechanisms such as std::call_once or double-checked locking to ensure that only one instance of the Singleton class is created.

[page 5](./page05.md)
