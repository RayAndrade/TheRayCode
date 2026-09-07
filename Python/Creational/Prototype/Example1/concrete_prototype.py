import copy
from prototype import Prototype

class ConcretePrototype(Prototype):

    def __init__(self, state):
        self.state = state

    def clone(self):
        return copy.deepcopy(self)