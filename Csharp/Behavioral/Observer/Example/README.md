# TheRayCode
## Observer pattern c#


Receive update from subject, we create an *interface* we call **IObserver**.
```c#
public interface IObserver
{
    // Receive update from subject
    void Update(ISubject subject);
}
```
We create another *interface* we call the **ISubject**.
The method of this *interface* are **Attach**, **Detach** and **Notify**.
**Attach** attaches the observer to the subject.
**Detach** detaches them.
**Notify** will notify of the process.
```c#
public interface ISubject
{
    void Attach(IObserver observer);
    void Detach(IObserver observer);
    void Notify();
}
```
Let's create a couple of Observers we call **Observer1** and **Observer2**.

Concrete *Observers* react to the updates issued by the **Subject** they had been attached to.
```c#
class Observer1 : IObserver
{
    public void Update(ISubject subject)
    {            
        if ((subject as Subject).State < 3)
        {
           Console.WriteLine("Concrete Observer1: Reacted to the event.");
        }
    }
}
```

Let's also create the second Observer **Observer2**.
```c#
class Observer2 : IObserver
{
    public void Update(ISubject subject)
    {
        if ((subject as Subject).State == 0 || (subject as Subject).State >= 2)
        {
            Console.WriteLine("Observer2: Reacted to the event.");
        }
    }
}
```

Now let's put this all together in the **Main** method found in the **Program** *class*.
```c#
static void Main(string[] args)
{
    var subject = new Subject();
    var observer1 = new Observer1();
    subject.Attach(observer1);
    var observer2 = new Observer2();
    subject.Attach(observer2);

    subject.SomeBusinessLogic();
    subject.SomeBusinessLogic();
    subject.Detach(observer2);
    subject.SomeBusinessLogic();
    }
}
```
When we compiled this and run it, we should get
```run
Subject: Attached an observer.
Subject: Attached an observer.

Subject: I'm doing something important.
Subject: My state has just changed to: 1
Subject: Notifying observers...
Concrete Observer1: Reacted to the event.

Subject: I'm doing something important.
Subject: My state has just changed to: 4
Subject: Notifying observers...
Observer2: Reacted to the event.
Subject: Detached an observer.

Subject: I'm doing something important.
Subject: My state has just changed to: 6
Subject: Notifying observers...

```

The Ray Code is AWESOME!!!


[Wikipedia](https://en.wikipedia.org/wiki/Observer_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
