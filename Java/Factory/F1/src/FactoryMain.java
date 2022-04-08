import com.phone.OS;

public class FactoryMain {
    public static void main(String[] args) {

        OperatingSystemFactory osf = new OperatingSystemFactory();

        //OS obj = osf.getInstance("Android");
        //OS obj = osf.getInstance("IOS");
        OS obj = osf.getInstance("junk");
        obj.spec();
        System.out.println("The Ray Code is AWESOME!!!");
    }

}
