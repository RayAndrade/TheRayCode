public class Parrot implements Animal{
    @Override
    public String getSpecies() {
        return "Parrot";
    }

    @Override
    public String makeSound() {
        return "Poly wants a cracker";
    }
}
