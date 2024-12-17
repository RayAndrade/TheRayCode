public class ConcretePrototype implements Prototype{
    private String name;
    private int id;
    private String favoriteJoke;

    public ConcretePrototype(String name, int id, String favoriteJoke) {
        this.name = name;
        this.id = id;
        this.favoriteJoke = favoriteJoke;
    }
    @Override
    public Prototype clone() {
        System.out.println("Cloning student: " + name + " (ID: " + id + ")");
        return new ConcretePrototype(this.name, this.id, this.favoriteJoke);
    }
    public void displayStudentDetails() {
        System.out.println("Student Details -> Name: " + name + ", ID: " + id + ", Joke: " + favoriteJoke);
    }
    public String getName() {
        return this.name;
    }

}
