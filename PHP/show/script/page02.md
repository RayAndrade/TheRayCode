[home](./page01.md) | [back](./page01.md) | [next](./page03.md)

The Observer is a behavioral design pattern that lets you define a subscription mechanism to notify multiple objects about any events that happen to the object they’re observing.

The object that has some interesting state is often called subject, but since it’s also going to notify other objects about the changes to its state, we’ll call it publisher. 

All other objects that want to track changes to the publisher’s state are called subscribers.

The UserRepository represents a Subject. Various objects are interested in tracking its internal state, whether it's adding a new user or removing one.

PHP has a couple of built-in interfaces related to the Observer pattern. 

The Subject owns some important state and notifies observers when the state changes. 

In real life, the list of subscribers can be stored more comprehensively (categorized by event type, etc. 

The Subject owns some important state and notifies observers when the state changes. 

For the sake of simplicity, the Subject's state, essential to all subscribers, is stored in this variable. The subscription management methods the also Trigger an update in each subscriber.

Usually, the subscription logic is only a fraction of what a Subject can really do. Subjects commonly hold some important business logic, that triggers a notification method whenever something important is about to happen (or after it).

[page 3](./page03.md)
