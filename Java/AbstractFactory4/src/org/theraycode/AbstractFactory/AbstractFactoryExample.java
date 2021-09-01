package org.theraycode.AbstractFactory;

public class AbstractFactoryExample {
    public static void main(String[] args)
    {
        OSFactory factory = AbstractPhoneFactory.getFactory(OSType.ANDROID);
        Phone pixelPhone = factory.create(ManufactureType.GOOGLE);
        pixelPhone.display();

        OSFactory wfactory = AbstractPhoneFactory.getFactory(OSType.WINDOWS);
        Phone nokiaPhone = factory.create(ManufactureType.MICROSOFT);
        nokiaPhone.display();
    }
}
