package TheRayCode.Show.factory;

import TheRayCode.Show.buttons.Button;
import TheRayCode.Show.buttons.MacOSButton;

import TheRayCode.Show.checkboxes.Checkbox;
import TheRayCode.Show.checkboxes.MacOSCheckbox;

public class MacOSFactory implements GUIFactory{
    @Override
    public Button createButton() {

        return new MacOSButton();
    }

    @Override
    public Checkbox createCheckbox() {

        return new MacOSCheckbox();
    }
}
