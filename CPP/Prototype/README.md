# TheRayCode
## Prototype pattern c++

The prototype pattern is a creational design pattern in software development. 
It is used when the type of objects to create is determined by a prototypical instance, which is cloned to produce new objects. 
This pattern is used to avoid subclasses of an object creator in the client application, like the factory method pattern does.
It is also used to avoid the inherent cost of creating a new object in the standard way (e.g., using the 'new' keyword) when it is prohibitively expensive for a given application.

The Prototype pattern delegates the cloning process to the actual objects that are being cloned. 
The pattern declares a common interface for all objects that support cloning. 
This interface lets you clone an object without coupling your code to the class of that object. Usually, such an interface contains just a single clone method.

We start by creating an **enum** to list our types **PROTOTYPE_1** and **PROTOTYPE_2**:
```c++
enum Type {
  PROTOTYPE_1 = 0,
  PROTOTYPE_2
};
```
The example class that has cloning ability. 
We'll see how the values of field with different types will be cloned.
```c++
class Prototype {
 protected:
  string prototype_name_;
  float prototype_field_;

 public:
  Prototype() {}
  Prototype(string prototype_name)
      : prototype_name_(prototype_name) {
  }
  virtual ~Prototype() {}
  virtual Prototype *Clone() const = 0;
  virtual void Method(float prototype_field) {
    this->prototype_field_ = prototype_field;
    std::cout << "Call Method from " << prototype_name_ << " with field : " << prototype_field << std::endl;
  }
};
```
ConcretePrototype1 is a Sub-Class of Prototype and implement the Clone Method.
In this example all data members of Prototype Class are in the Stack. 
If you have pointers in your properties for ex: String* name_ ,you will need to implement the Copy-Constructor to make sure you have a *deep copy* from the **clone method**
```c++
class ConcretePrototype1 : public Prototype {
private:
    float concrete_prototype_field1_;

public:
    ConcretePrototype1(std::string prototype_name, float concrete_prototype_field)
            : Prototype(prototype_name), concrete_prototype_field1_(concrete_prototype_field) {
    }

    Prototype *Clone() const override {
        return new ConcretePrototype1(*this);
    }
};
```
Notice that Clone method return a Pointer to a new **ConcretePrototype1** replica. so, the client (who call the clone method) has the responsability to free that memory. 
If you have smart pointer knowledge you may prefer to use unique_pointer here.
```c++
class ConcretePrototype2 : public Prototype {
private:
    float concrete_prototype_field2_;

public:
    ConcretePrototype2(std::string prototype_name, float concrete_prototype_field)
            : Prototype(prototype_name), concrete_prototype_field2_(concrete_prototype_field) {
    }
    Prototype *Clone() const override {
        return new ConcretePrototype2(*this);
    }
};
```

In Factory you have two concrete prototypes, one for each concrete prototype class, so each time you want to create a bullet , you can use the existing ones and clone those.

 Be carefull of free all memory allocated. 
 Again, if you have smart pointers knowelege will be better to use it here.

```c++
class Factory {
private:
    std::unordered_map<Type, Prototype *, std::hash<int>> prototypes_;

public:
    Factory() {
        prototypes_[Type::PROTOTYPE_1] = new ConcretePrototype1("PROTOTYPE_1 ", 50.f);
        prototypes_[Type::PROTOTYPE_2] = new ConcretePrototype2("PROTOTYPE_2 ", 60.f);
    }

    ~Factory() {
        delete prototypes_[Type::PROTOTYPE_1];
        delete prototypes_[Type::PROTOTYPE_2];
    }

    Prototype *CreatePrototype(Type type) {
        return prototypes_[type]->Clone();
    }
};
```
Be carefull of free all memory allocated. 
Again, if you have smart pointers knowelege will be better to use it here.

Notice here that you just need to specify the type of the prototype you want and the method will create from the object with this type.

Now we go to main and add some client function 
```c++
void Client(Factory &prototype_factory) {
    std::cout << "Let's create a Prototype 1\n";

    Prototype *prototype = prototype_factory.CreatePrototype(Type::PROTOTYPE_1);
    prototype->Method(90);
    delete prototype;

    std::cout << "\n";

    std::cout << "Let's create a Prototype 2 \n";

    prototype = prototype_factory.CreatePrototype(Type::PROTOTYPE_2);
    prototype->Method(10);

    delete prototype;
}
```
Now in the main method we run this **Client** function.
```c++
int main() {
    Factory *prototype_factory = new Factory();
    Client(*prototype_factory);
    delete prototype_factory;

    return 0;
}
```

When we comile and run this we should get:
```
Let's create a Prototype 1
Call Method from PROTOTYPE_1  with field : 90

Let's create a Prototype 2 
Call Method from PROTOTYPE_2  with field : 10

Process finished with exit code 0

```
[Wikipedia](https://en.wikipedia.org/wiki/Prototype_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
