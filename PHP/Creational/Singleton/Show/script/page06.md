[home](./page01.md)

[back](./page05.md)

 Private **Magic** Methods:
 
```
 private function __clone() {
    // prevent cloning
}

private function __wakeup() {
    // prevent unserializing
}
```

These are magic methods in PHP used to prevent cloning and unserializing of the singleton object. 

Cloning would create a copy of the object, and unserializing would create a new instance from a serialized string, both of which would violate the Singleton pattern.



[page 7](./page07.md)
