public class ConcreteObserver  implements Observer {
    private String name;
    private ConcreteSubject subject;

    public ConcreteObserver(String name, ConcreteSubject subject) {
        this.name = name;
        this.subject = subject;
        subject.addObserver(this);
    }


    @Override
    public void update() {
        int newState = subject.getState();
        System.out.println(name + " received an update: State is now " + newState);
    }
}
