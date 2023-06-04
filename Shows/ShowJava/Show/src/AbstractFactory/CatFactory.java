package AbstractFactory;

class CatFactory implements AnimalFactory {
    @Override
    public Animal createAnimal() {
        return new PersianCat();
    }
}
