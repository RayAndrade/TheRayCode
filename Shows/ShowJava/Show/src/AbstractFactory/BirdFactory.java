package AbstractFactory;

class BirdFactory implements AnimalFactory {
    @Override
    public Animal createAnimal() {
        return new Parrot();
    }
}
