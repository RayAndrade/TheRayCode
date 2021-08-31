public class FactoryGenerator {
    public static AbstractDeviceFactory getFactory(FactoryType factoryType){
            switch (factoryType){
                case LABTOFACTORY:
                    return new LabtopFactory();
                case MOBILFACTORY:
                    return new MobileFactory();
            }
            return null;

    }
}
