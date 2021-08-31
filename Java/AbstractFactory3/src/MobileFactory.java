public class MobileFactory extends AbstractDeviceFactory{

    @Override
    Device getGaget(DeviceType deviceType) {
        switch (deviceType) {
            case ONEPLUS -> new OnePlus("8gb","qualcomm");
            case NOKIA -> new Nokia("12gb","Intel");
        }
        return null;
    }
}
