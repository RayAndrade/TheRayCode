package org.theraycode.AbstractFactory;

public class AndroidFactory implements OSFactory {

    public Phone create(ManufacturerType manufacturerType) {
        switch (manufacturerType) {
            case GOOGLE:
                return new GooglePhone();
            case ONEPLUS:
                return new OnePlus5T();

                default:
                    return null;
        }
    }
}
