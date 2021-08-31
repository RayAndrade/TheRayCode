public class LabtopFactory extends AbstractDeviceFactory{


    @Override
    Device getGaget(DeviceType deviceType) {
        switch (deviceType) {
            case HP -> new Hp("8gb","Intel", "Nvidia" );
            case DELL -> new Hp("12gb","AMD", "Nvidia" );
        }
        return null;
    }
}
