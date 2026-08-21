from factories.windows_factory import WindowsFactory
from factories.mac_factory import MacFactory

def client_code(factory):
    button = factory.create_button()
    checkbox = factory.create_checkbox()

    button.render()
    checkbox.render()

def main():
    print("Using the Windows Factory:")
    windows_factory = WindowsFactory()
    client_code(windows_factory)

    print("\nUsing the Mac Factory:")
    mac_factory = MacFactory()
    client_code(mac_factory)

if __name__ == "__main__":
    main()