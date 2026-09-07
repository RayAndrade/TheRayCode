# Import ABC support.
from abc import ABC

# Import abstractmethod support.
from abc import abstractmethod

# Import the Product participant.
from Product import Product


# Define the Creator participant.
class Creator(ABC):
    @abstractmethod
    def FactoryMethod(self) -> Product:
        pass

    def AnOperation(self):
        product = self.FactoryMethod()
        product.Operation()
        return product