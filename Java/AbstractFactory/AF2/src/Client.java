///https://www.youtube.com/watch?v=j50FusMmUMw&list=PLfZqJwaRZ_4NNfQGO1lr4P2mqMX98pTcZ&index=2


public class Client {
    public static void main(String[] args) {
        Device dell = FactoryGenerator.getFactory(FactoryType.LABTOFACTORY).getGaget(DeviceType.DELL);

        System.out.println(dell.getDetails());


        AbstractDeviceFactory mobileFactory= FactoryGenerator.getFactory(FactoryType.MOBILFACTORY);
        Device nokia = mobileFactory.getGaget(DeviceType.NOKIA);
        System.out.println(nokia.getDetails());
        System.out.println(nokia.toString());
    }
}
