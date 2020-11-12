package TheRayCode.abstract_factory.example.factories;

import TheRayCode.abstract_factory.example.buttons.Button;
import TheRayCode.abstract_factory.example.buttons.MacOSButton;
import TheRayCode.abstract_factory.example.checkboxes.Checkbox;
import TheRayCode.abstract_factory.example.checkboxes.MacOSCheckbox;

public class MacOSFactory implements GUIFactory {
    @Override
    public Button createButton() {
        return new MacOSButton();
    }

    @Override
    public Checkbox createCheckbox() {
        return new MacOSCheckbox();
    }
}
