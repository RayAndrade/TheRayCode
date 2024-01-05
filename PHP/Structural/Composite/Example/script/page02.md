[strart](./page01.md) | [back](./page01.md) | [next](./page03.md)

In the Composite pattern, you typically have a component interface, leaf objects, and composite objects. 

The **component interface** defines default behavior for all objects, leaf objects perform actual operations, 
and composite objects store child components (which can be leaf or composite objects).

Let's create the **interface** **File Component**
```
FileComponent
```
with a requierment to have a **get Size and getName** method
```
public function getSize();
public function getName();
```
method requirements
