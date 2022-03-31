import phone.OS;

public class FactoryMain {
    public static void main(String[] args){
        OperatingSytemFactory osf = new OperatingSytemFactory();
        // OS obj = osf.getInstance("Android");
        // OS obj = osf.getInstance("IOS");
        OS obj = osf.getInstance("any junk");
        obj.spec();
    }
}
