from concrete_prototype import ConcretePrototype
from client import Client

prototype = ConcretePrototype("Original State")

clone1, clone2 = Client.demonstrate(prototype)

print(prototype.state)
print(clone1.state)
print(clone2.state) 