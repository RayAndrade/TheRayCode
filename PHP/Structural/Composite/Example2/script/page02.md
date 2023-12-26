[home](/page01.md) | [next page](/page03.md) | [back](/page01.md)

In the Composite pattern, you typically have a component interface, leaf objects, and composite objects. 
The component interface defines default behavior for all objects, leaf objects perform actual operations, 
and composite objects store child components (which can be leaf or composite objects).

Let's create a simple example: a file system with directories and files. Directories can contain files or other directories.

Create php file **interface**
```
FileComponent
```
The component interface declares common operations for both simple and complex objects of a composition.
```
public function getSize();
public function getName();
```

