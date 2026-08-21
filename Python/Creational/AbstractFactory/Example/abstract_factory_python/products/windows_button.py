from products.abstract_button import AbstractButton

class WindowsButton(AbstractButton):
    def render(self):
        print("Rendering a Windows button.")