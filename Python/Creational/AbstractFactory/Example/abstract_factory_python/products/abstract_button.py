from abc import ABC, abstractmethod

class AbstractButton(ABC):
    @abstractmethod
    def render(self):
        pass