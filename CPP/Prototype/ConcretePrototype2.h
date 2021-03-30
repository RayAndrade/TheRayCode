#ifndef PROTOTYPE_CONCRETEPROTOTYPE2_H
#define PROTOTYPE_CONCRETEPROTOTYPE2_H


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


#endif //PROTOTYPE_CONCRETEPROTOTYPE2_H
