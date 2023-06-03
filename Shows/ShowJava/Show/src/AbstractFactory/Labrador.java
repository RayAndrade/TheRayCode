package AbstractFactory;
public class Labrador implements Animal{
    @Override
    public String getSpecies() {
        return "Labrador";
    }

    @Override
    public String makeSound() {
        return "Barks";
    }
}
