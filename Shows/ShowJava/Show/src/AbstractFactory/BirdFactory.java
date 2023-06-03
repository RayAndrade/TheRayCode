package AbstractFactory;
public class BirdFactory implements AnimalFactory{
    @Override
    public Animal createAnimal() {
        return new Parrot();
    }
}
