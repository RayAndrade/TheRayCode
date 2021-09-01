package org.theraycode.AbstractFactory;

public class WindowsFactory implements OSFactory {

    @Override
    public Phone create(ManufactureType manufactureType) {
        switch (manufactureType)
        {
            case LENOVO:
                new LenovoPhone();
            case MICROSOFT:
                new MicrosoftPhone();
        }
        return null;
    }
}
