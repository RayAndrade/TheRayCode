package TheRayCode.Show.factory;

import TheRayCode.Show.buttons.Button;
import TheRayCode.Show.buttons.WindowsButton;
import TheRayCode.Show.checkboxes.Checkbox;
import TheRayCode.Show.checkboxes.WindowsCheckbox;

public class WindowsFactory implements GUIFactory{
    @Override
    public Button createButton() {
        return new WindowsButton();
    }

    @Override
    public Checkbox createCheckbox() {
        return new WindowsCheckbox();
    }
}
