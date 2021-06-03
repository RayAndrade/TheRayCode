# TheRayCode
## Observer pattern c++

The intent of the **Observer** pattern is to let you define a subscription mechanism to notify multiple objects about any events that happen to the object they're observing.
Notis that there's a lot of different terms with similar meaning associated with this pattern. 
Just remember that the **Subject** is also called the *Publisher* and the **Observer** is often called the *Subscriber* and vice versa.
Also notice the verbs "observe", "listen" or "track" usually mean the same thing.
```c++
class IObserver {
public:
    virtual ~IObserver(){};
    virtual void Update(const std::string &message_from_subject) = 0;
};
```
![Mediator](/UMLs/images/Observer/Observer-1.png)

[Wikipedia](https://en.wikipedia.org/wiki/Observer_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
