[script](script/page01.md)

### `Target.php`
- **Interface `Target`:** This represents the interface that the client expects or needs. In the context of the Adapter Pattern, it defines the domain-specific interface that the system (or client) is expecting.

  - **`request()`:** This is a method declaration that expects any class implementing the `Target` interface to have a `request()` method that returns a string.

```
interface Target
{
    public function request(): string;
}
```


### `Adaptee.php`
- **Class `Adaptee`:** This is the class that the client wishes to use, but its interface is incompatible with what the client is expecting. It represents a component that already exists in the system and its methods don't match the `Target` interface.

  - **`specificRequest()`:** This is the method of `Adaptee` that does something specific. The client can't use this method directly because it expects a method named `request()`, hence the need for an adapter.

```
class Adaptee
{
    public function specificRequest(): string
    {
        return "Specific request from Adaptee.";
    }
}
```


### `Adapter.php`
- **Class `Adapter`:** This is the adapter itself. It's the class that allows the interface of an existing class (`Adaptee`) to be used as another interface (`Target`). It combines the capabilities of an independent interface with the `Adaptee`.

  - **`$adaptee`:** A private variable in the `Adapter` class. It's an instance of the `Adaptee` class and represents the component that needs adapting.

  - **`__construct(Adaptee $adaptee)`:** This is the constructor of the `Adapter` class. It initializes the `$adaptee` variable. The adapter is being composed with an instance of `Adaptee`.

  - **`request()`:** This is the method of `Adapter` that implements the `request()` method of the `Target` interface. It internally calls the `specificRequest()` method of `Adaptee` to get the work done, but presents it under the expected `request()` method.

```
class Adapter implements Target
{
    private $adaptee;

    public function __construct(Adaptee $adaptee)
    {
        $this->adaptee = $adaptee;
    }

    public function request(): string
    {
        return "Adapter: " . $this->adaptee->specificRequest();
    }
}
```


### `index.php`

Where we put it together

- **`clientCode(Target $target)`:** A function that accepts any object that implements the `Target` interface. This function represents the client code that interacts with the target interface.

- **`$adaptee`:** An instance of the `Adaptee` class. It demonstrates the client directly calling a method on the `Adaptee` without an adapter.

- **`$adapter`:** An instance of the `Adapter` class, created by passing the `$adaptee` object to its constructor. This demonstrates how the client can use the `Adapter` to interact with the `Adaptee` through the expected `Target` interface.

```
require_once 'Target.php';
require_once 'Adaptee.php';
require_once 'Adapter.php';

use TheRayCode\Adapter\Adaptee;
use TheRayCode\Adapter\Adapter;

// The client code can work with any class that follows the Target interface.
function clientCode(Target $target)
{
    echo $target->request();
}

echo "Client code with Adaptee:\n";
$adaptee = new Adaptee();
echo $adaptee->specificRequest();
echo "\n\n";

echo "Client code with Adapter:\n";
$adapter = new Adapter($adaptee);
clientCode($adapter);
```
The key idea behind the Adapter Pattern is to provide a wrapper (or adapter) that can translate method calls from one interface (`Target`) to methods of another existing interface (`Adaptee`). This enables objects with incompatible interfaces to work together.
