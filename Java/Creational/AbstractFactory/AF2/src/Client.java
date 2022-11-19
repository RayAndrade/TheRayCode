
public class Client {
    public static void main(String[] args) {
        Device dell = FactoryGenerator.getFactory(FactoryType.LABTOFACTORY).getGaget(DeviceType.DELL);

        //System.out.println(dell.getDetails());


        AbstractDeviceFactory mobileFactory= FactoryGenerator.getFactory(FactoryType.MOBILFACTORY);
        Device nokia = mobileFactory.getGaget(DeviceType.NOKIA);
        System.out.println(nokia.getDetails());
        System.out.println(nokia.toString());

        System.out.println("The Ray Code is AWESOME!!!");
    }
}
