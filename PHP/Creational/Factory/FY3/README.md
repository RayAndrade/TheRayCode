hey guys what's going on it's clever
tikki and in this video we're going to
learn about the factory pattern and you
can think of design patterns as a way to
organize code so that it's easier for
you to manage and easier for other
people to understand and there are
various design patterns that we're gonna
be covering so one of the most commonly
used design patterns is the factory
pattern and in this pattern a class
simply creates the object that you want
to use so we're gonna go ahead and
create two classes one of them is going
to be the actual object that we're gonna
be creating from the factory and the
second class is going to be the actual
factory which will create our book
object so we're gonna name our factory
book Factory and it's simply going to
create the book object for us so let's
go ahead and create two private
properties one of them is gonna be the
book name and the second one is gonna be
the book author let's also go ahead and
create a constructor which will create
the variables for us and set the
properties to name and book author is
going to be the author so the
constructor is going to assign the
properties book name to the given
variable name and the book author to the
variable author which will be provided
by the user when the object is created
now let's also create a function called
get name and author and this method is
going to return the book name and author
so by creating the properties as private
they're not gonna be we're not gonna be
able to access these properties from the
outside of the class we're all gonna be
able to get these properties with a
public method get name and author
so here I'm using self BR and that's
just gonna allow us to use the constant
BR inside of the class so let's go ahead
and also add it here Const the articles
BR and that's just for the HTML breaking
tag to add the spacing and then I can
just delete this one here so I just
wanted to show you guys how to access
this constant inside of the class with a
keyword itself double column and then
the actual name of the constant okay so
now our book class is ready let's now go
ahead and create a static method inside
of the book Factory which we'll use to
create the book object so here we're
just going to add a public static
function which is our method create name
and author and then it's simply going to
return new book name and author so as
you can see by doing this the method is
going to return the object because we
create an object with a keyword new and
then book which refers to our book class
and we're also providing the name and an
author which is gonna be the name of the
book and the name of the author so that
is the that is what it's accepted within
the constructor of our book object and
that's what we're doing here so that is
what our book Factory is going to return
it's going to return the book and that's
pretty much all that the factory pattern
does it creates the class which creates
the object for us all right so now let's
go ahead and test this out let's go
ahead and create book one and we're
gonna call our book Factory and the way
to call this static method is to use a
double call
so that's what we're gonna do here we're
gonna call our create method that we
created here and then let's give our
book a name and provide the author as
well and let's go ahead and create
another book for the same way give the
name and the author all right so now we
have our book objects so let's let's try
to print out book one's name an author
by calling the method here and that's
how we access the method with them with
a dart get name an author and then
echo this out and then echo book to get
name an author so this should access the
get name and author method within our
book class and print out the book name
separated with a with a dash and the
book author as well and it's also going
to have our BR constant at the end so we
don't have to print it out here so let's
now go ahead and view this in a browser
and we have our book name the common
effect the author name and we have the
second books name and the author as well
if if we go to source code you can see
that we're also printing out the BR tag
as well okay and that's how the factory
pattern works I hope you guys liked this
video if you did please like share and
subscribe and I'll see you next time
clever take you out
