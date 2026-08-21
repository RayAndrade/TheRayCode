from abc import ABC, abstractmethod

class AbstractCheckbox(ABC):
    @abstractmethod
    def render(self):
        pass