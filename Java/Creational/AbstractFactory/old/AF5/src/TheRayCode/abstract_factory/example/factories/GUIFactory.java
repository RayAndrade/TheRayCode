package TheRayCode.abstract_factory.example.factories;
import TheRayCode.abstract_factory.example.buttons.Button;
import TheRayCode.abstract_factory.example.checkboxes.Checkbox;

public interface GUIFactory {
    Button createButton();
    Checkbox createCheckbox();
}
