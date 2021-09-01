package org.theraycode.AbstractFactory;
import org.theraycode.AbstractFactory.PhoneType;

public class AndroidFactory implements OSFactory{

    @Override
    public Phone create(ManufactureType manufactureType)
    {
        switch (manufactureType) {
            case GOOGLE:
                return new GooglePhone();
            case ONEPLUS:
                return new OnePlus5T();
            default:
                return null;
        }
    }
}
