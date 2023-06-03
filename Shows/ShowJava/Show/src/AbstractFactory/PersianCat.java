package AbstractFactory;
public class PersianCat implements Animal{
    @Override
    public String getSpecies() {
        return "Persian Cat";
    }

    @Override
    public String makeSound() {
        return "Meows";
    }
}
