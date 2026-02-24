[home](./page01.md)

[back](./page07.md)

Explanation:

Projector, DVDPlayer, and Amplifier: These are individual subsystem classes, each with their own set of functionalities.

HomeTheaterFacade: This class is the facade that provides a unified interface to control the subsystems. 
It encapsulates the complexities of the individual subsystems and provides simple methods like watchMovie and endMovie for the client to use.

index.php: This is the client code. It uses the HomeTheaterFacade to control the home theater system.

Remember, the primary benefit of the Facade pattern is to offer a simplified interface to a more complex system, making it easier to use.

[page 9](./page09.md)
