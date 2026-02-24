
import java.util.ArrayList;
import java.util.List;

public class PrettyWoman implements Subject {
    private List<Observer> sailors = new ArrayList<>();
    private String message;

    @Override
    public void addObserver(Observer observer) {
        sailors.add(observer);
    }

    @Override
    public void removeObserver(Observer observer) {
        sailors.remove(observer);
    }

    @Override
    public void notifyObservers(String message) {
        for (Observer sailor : sailors) {
            sailor.update(message);
        }
    }

    public void flirt() {
        message = "The pretty woman smiles at the sailors.";
        notifyObservers(message);
    }

    public void reject() {
        message = "The pretty woman ignores the sailors.";
        notifyObservers(message);
    }
}
