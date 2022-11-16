package TheRayCode.abstract_factory.example.factories;

import TheRayCode.abstract_factory.example.buttons.Button;
import TheRayCode.abstract_factory.example.buttons.WindowsButton;
import TheRayCode.abstract_factory.example.checkboxes.Checkbox;
import TheRayCode.abstract_factory.example.checkboxes.WindowsCheckbox;


public class WindowsFactory implements GUIFactory {
    @Override
    public Button createButton() {
        return new WindowsButton();
    }

    @Override
    public Checkbox createCheckbox() {
        return new WindowsCheckbox();
    }
}
