import systems.Android;
import systems.OS;
import systems.OperatingSytemFactory;

public class Demo {
    public static void main(String[] args) {
        OperatingSytemFactory osf = new OperatingSytemFactory();
        osf.getInstance("Android").spec();
        osf.getInstance("IOS").spec();
        osf.getInstance("any other").spec();
    }
}
