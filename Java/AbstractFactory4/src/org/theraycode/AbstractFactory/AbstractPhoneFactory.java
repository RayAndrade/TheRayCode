package org.theraycode.AbstractFactory;

import org.theraycode.AbstractFactory.PhoneType;

public abstract class AbstractPhoneFactory {

    //WindowsFactory
    //AndroidFactory
    //OSFactory

    public static OSFactory getFactory(OSType osType){
        switch (osType){
            case ManufactureType.ANDROID:
                return new AndroidFactory();
            case ManufactureType.WINDOWS:
                return new WindowsFactory();
            default:
                return null;
        }
    }
}
