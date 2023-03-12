class AnimalFactory {
    public static Animal getAnimal(String type) {
        if ("dog".equalsIgnoreCase(type)) {
            return new Dog();
        }
        else if ("cat".equalsIgnoreCase(type)) {
            return new Cat();
        }
        else {
            throw new IllegalArgumentException("Invalid animal type: " + type);
        }
    }
}
