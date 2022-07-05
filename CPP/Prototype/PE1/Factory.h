#ifndef PROTOTYPE_FACTORY_H
#define PROTOTYPE_FACTORY_H
#include <unordered_map>
/**
 * In Factory you have two concrete prototypes, one for each concrete
 * prototype class, so each time you want to create a bullet , you can use the
 * existing ones and clone those.
 */

class Factory {
private:
    std::unordered_map<Type, Prototype *, std::hash<int>> prototypes_;

public:
    Factory() {
        prototypes_[Type::PROTOTYPE_1] = new ConcretePrototype1("PROTOTYPE_1 ", 50.f);
        prototypes_[Type::PROTOTYPE_2] = new ConcretePrototype2("PROTOTYPE_2 ", 60.f);
    }

    /**
     * Be carefull of free all memory allocated. Again, if you have smart pointers
     * knowelege will be better to use it here.
     */

    ~Factory() {
        delete prototypes_[Type::PROTOTYPE_1];
        delete prototypes_[Type::PROTOTYPE_2];
    }

    /**
     * Notice here that you just need to specify the type of the prototype you
     * want and the method will create from the object with this type.
     */
    Prototype *CreatePrototype(Type type) {
        return prototypes_[type]->Clone();
    }
};
#endif //PROTOTYPE_FACTORY_H
