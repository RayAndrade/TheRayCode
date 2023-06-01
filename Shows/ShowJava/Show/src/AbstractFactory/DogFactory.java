package AbstractFactory;

class DogFactory implements AnimalFactory {
    @Override
    public Animal createAnimal() {
        return new Labrador();
    }
}
