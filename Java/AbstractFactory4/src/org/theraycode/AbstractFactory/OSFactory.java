package org.theraycode.AbstractFactory;

public interface OSFactory {
    Phone create(ManufactureType manufactureType);
}
