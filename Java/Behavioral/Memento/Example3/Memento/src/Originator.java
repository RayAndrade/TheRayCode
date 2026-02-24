public class Originator {
    private String state;

    // Creates memento and stores the current state
    public Memento saveStateToMemento() {
        return new Memento(state);
    }

    // Get the state from the memento and set it to the current state
    public void getStateFromMemento(Memento memento) {
        state = memento.getState();
    }

    public void setState(String state) {
        this.state = state;
    }

    public String getState() {
        return state;
    }
}
