
The setup story:

After working hard for many years you managed to get a job at uber.
You also are asked to implement a vehicle service.
Users can choose between low cost and luxurious vehicles.

Again you see a pattern low cost and luxurious are the same service but, of course the type of the car changes.
We can see right away that we need 2 differnt classes. 
One for low cost and the other luxurious.

This one is the simple factory
and the classes we need for this case
are
low cost
and let me quickly
set this up so this is the namespace
this is now simplefactory
and then we have the class which is low
cost and this is everything for the low
cost for now
i will copy this and do the same for
luxuries
let's create an abstract vehicle class
because we can see that these are two
classes that represent
a car service so let's do it like this
let's create an abstract
vehicle class
so this is an abstract clause
the end user can call for a car
so we can have an abstract public
function
call
also we can have a list of cars that the
user can call and we initialize that
list inside the constructor of course we
have to save them somewhere so we have a
protected
cars array
and then inside the constructor
we initialize
that array
inside the classes low cost and look
serious we can now
extend that abstract class
extends abstract
vehicle
of course we have to implement the call
method
and we can simply return a string for
now so this is a
dot
[Music]
we can access the array so these cars
and we can get a random a random car so
array random
from
the cars array
car
is coming to get you
and we can specify the service which in
this case is low cost
now we can do the same for the luxurious
one so again extends
abstract vehicle
implement
the
call method
and this is very similar so i'm just
going to copy this
return and paste it for the luxurious
one
the only difference though
is that
we have to change at the end the type so
this is now look serious
let me bring this down so it is
easier to read
okay
for the factory now
let me first create that class
so vehicle
factory
we have a public
static function
which we can call get vehicle
and it accepts the type of the vehicle
we want to get and this will return an
abstract vehicle which means that it
will return a luxurious or a low cost
car
and the the way it works is that
low-cost
anti-luxurious extend the abstract
vehicle so they are pretty much the same
type
so back to the factory now
we can have a switch statement
that according to the type we can get
the
the car so this is case
luxurious so if it is a luxurious
service
then we want to return a new
luxurious car and we can pass a couple
of
brands for example mercedes is one of
them bmw
and
let's say
then play
for the low cost car we can actually do
the same
except that the array is different so
return
new
low cost
and for the array we can have fiat and
renault
no offense to people that have
these cars
it is just the service this is how the
service works
now regarding some errors we can have a
default
so default we can throw a new exception
and we can say type is not valid in case
we pass something that is not look
serious or low cost
okay now let's go to the index which is
the client that runs the code and let's
create a new function
for
simple
factory
now we can create a luxurious
car or we can actually get the luxurious
service by calling vehicle factory
and then we call the static method which
is get vehicle and we pass
the text luxuries which is the type
let me import this so we don't get that
namespace
and we can echo
luxurious
and we can call it so we call the car
and then we can add the vr to have some
space and we can do the same for low
cost
again
we call the factory we get a vehicle
that is low cost
and again we can have an echo
look serious call
and add vr
so if i go now back to
my browser and i reload
of course we have to call this simple
factory and i reload as you can see we
get a bentley cars coming to get you and
we do the same for the second one so it
looks like we have a small error of
course
we are not calling the low cost there so
now this
so now we have a bmw car is coming to
get you which is the luxurious service
and then we have a fiat cars coming to
get you which is a low-cost service and
of course no matter how many times you
reload the first one is always luxurious
and the second one is low cost and also
we get a random car it is not that we
actually specify the car
anyways now the last one the last thing
that i want to try is to actually call
something that does not exist
so does not exist
let's say an airplane so we want to get
an airplane well
of course this is not going to work so
it does not exist we call that we go
back
as you can see it throws the error the
exception which is type is not valid
