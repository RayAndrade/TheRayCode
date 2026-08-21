from factories.abstract_factory import AbstractFactory
from products.windows_button import WindowsButton
from products.windows_checkbox import WindowsCheckbox

class WindowsFactory(AbstractFactory):
    def create_button(self):
        return WindowsButton()

    def create_checkbox(self):
        return WindowsCheckbox()