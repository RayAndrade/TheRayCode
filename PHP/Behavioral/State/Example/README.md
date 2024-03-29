[up](../README.md)

### 1. State.php (The Abstract State)

**State** is an abstract class that serves as a blueprint for all possible states the context could be in.

Attributes:
- `$context`: This attribute holds a reference to the `Context` class. This allows each concrete state to interact and potentially change the current state of the context.

Methods:
- `setContext(Context $context)`: Allows setting a reference to the `Context` object for a state. This is essential for any concrete state that wishes to transition the context to another state.
  
- `handle1()`: An abstract method which defines how this state responds to the `request1` method call on the context. Concrete states will provide their own implementation.
  
- `handle2()`: Similarly, an abstract method defining the behavior for the `request2` method call on the context. Again, the concrete states will provide specific implementations.


```php
abstract class State
{
    /**
     * @var Context
     */
    protected $context;

    public function setContext(Context $context)
    {
        $this->context = $context;
    }

    abstract public function handle1(): void;

    abstract public function handle2(): void;
}
```

### 2. Context.php (The Context)

**Context** is the main class in the State pattern. It holds a reference to the current state and allows clients to trigger state transitions and behaviors.

Attributes:
- `$state`: This holds the current state of the context. It's of type `State`, so it could be an instance of any of the concrete state classes.

Methods:
- `__construct(State $state)`: The constructor initializes the context with a given state and sets it using the `transitionTo` method.
  
- `transitionTo(State $state)`: This method allows the context to change its current state. It sets the new state, updates the state's context reference, and then logs the transition.
  
- `request1()` and `request2()`: These methods delegate calls to the current state's respective `handle1` and `handle2` methods. This is where the actual state-based behavior takes place.


```php
class Context
{
    /**
     * @var State A reference to the current state of the Context.
     */
    private $state;

    public function __construct(State $state)
    {
        $this->transitionTo($state);
    }

    /**
     * The Context allows changing the State object at runtime.
     */
    public function transitionTo(State $state): void
    {
        echo "Context: Transition to " . get_class($state) . ".<br/>";
        $this->state = $state;
        $this->state->setContext($this);
    }

    /**
     * The Context delegates part of its behavior to the current State object.
     */
    public function request1(): void
    {
        $this->state->handle1();
    }

    public function request2(): void
    {
        $this->state->handle2();
    }
}
```

### 3. ConcreteStateA.php & ConcreteStateB.php (The Concrete States)

These classes represent specific states the context can be in. They extend the abstract `State` class and provide concrete implementations for its abstract methods.

**ConcreteStateA**:

Methods:
- `handle1()`: Outputs that it's handling request1 and then changes the state of the context to `ConcreteStateB`.

- `handle2()`: Outputs that it's handling request2 but doesn't change the state.

**ConcreteStateB**:

Methods:
- `handle1()`: Outputs that it's handling request1 but doesn't change the state.

- `handle2()`: Outputs that it's handling request2 and then changes the state of the context back to `ConcreteStateA`.


**ConcreteStateA.php**

```php
class ConcreteStateA extends State
{
    public function handle1(): void
    {
        echo "ConcreteStateA handles request1.<br/>";
        echo "ConcreteStateA wants to change the state of the context.<br/>";
        $this->context->transitionTo(new ConcreteStateB);
    }

    public function handle2(): void
    {
        echo "ConcreteStateA handles request2.<br/>";
    }
}
```

**ConcreteStateB.php**

```php
class ConcreteStateB extends State
{
    public function handle1(): void
    {
        echo "ConcreteStateB handles request1.<br/>";
    }

    public function handle2(): void
    {
        echo "ConcreteStateB handles request2.<br/>";
        echo "ConcreteStateB wants to change the state of the context.<br/>";
        $this->context->transitionTo(new ConcreteStateA);
    }
}
```

### 4. index.php (Client Code)

This script sets everything in motion. It includes all necessary files and then:

- Creates a new `Context` object with an initial state of `ConcreteStateA`.
  
- Calls `request1()` on the context, triggering `ConcreteStateA`'s `handle1()` method.
  
- Calls `request2()` on the context, which at this point triggers `ConcreteStateB`'s `handle2()` method due to the state transition in the previous step.

---

In essence, the design pattern shown here allows the `Context` class to change its behavior when its internal state changes, without modifying the class itself. The behavior for each state is encapsulated in the concrete state classes. The context simply delegates the requests to these state objects.


**index.php**

```php
include_once ('Context.php');
include_once ('State.php');
include_once ('ConcreteStateA.php');
include_once ('ConcreteStateB.php');

/**
 * The client code.
 */
$context = new Context(new ConcreteStateA);
$context->request1();
$context->request2();
```

what is shown in the browser

```run
Context: Transition to ConcreteStateA.
ConcreteStateA handles request1.
ConcreteStateA wants to change the state of the context.
Context: Transition to ConcreteStateB.
ConcreteStateB handles request2.
ConcreteStateB wants to change the state of the context.
Context: Transition to ConcreteStateA.
```


[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/TheRayCode/)

[The Ray Code](https://www.TheRayCode.org)

[Ray Andrade](https://www.RayAndrade.com)
