from factories.abstract_factory import AbstractFactory
from products.mac_button import MacButton
from products.mac_checkbox import MacCheckbox

class MacFactory(AbstractFactory):
    def create_button(self):
        return MacButton()

    def create_checkbox(self):
        return MacCheckbox()