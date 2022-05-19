package org.theraycode.AbstractFactory;

public interface OSFactory {

    Phone create(ManufacturerType manufacturerType);
}
