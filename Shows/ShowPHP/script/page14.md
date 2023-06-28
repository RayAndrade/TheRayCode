[home](./page01.md)

[back](./page13.md)

In this example, **Model** is a simple class which contains a name. 

**Vehicle** now takes a **Model** object, and its method getModel() returns the name of the model. 

**Car** is the same as before but with an overridden __clone() method, where it creates a deep copy by cloning the model object when a **Car** object is cloned. 

This ensures that when the model of car2 **is** changed, car1 remains unaffected.

In the browser, you will see the models of car1 and car2 displayed, demonstrating that they are different and showing the use of the Prototype pattern with deep copying.



The End

[Start over](./page01.md)
