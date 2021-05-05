# TheRayCode
## Proxy pattern java

**Key Points About Proxy Design Pattern** 
<ul>
<li>The Proxy pattern helps us to create an intermediary that acts as an interface to another resource and also hiding the underlying complexity of the application.</li>
<li>Proxy means ‘in place of’, representing’ or ‘on behalf of’ are dictionary meanings of proxy and that directly explains Proxy Design Pattern.</li>
<li>Consider a heavy Java object (like a JDBC connection or a Hibernate SessionFactory) that requires some initial configuration.</li>
<li>If we want such objects to be initialized on demand and once they are, we would like to reuse them for all further calls.</li>
</ul>


**When to Use Proxy Design Pattern:**
<ul>
<li>When we want to reduce the complexity of a complex or heavy object. </li>
<li>In this case, we may represent it with a skeleton object which loads the original object on demand, also called as lazy initialization. This is known as the Virtual Proxy</li>
<li>When the original object copy is present in different address spaces and we want to represent it locally.</li>
<li>We can create a proxy which does all the necessary boilerplate stuff like creating and maintaining the connection, encoding, decoding, etc., while the client accesses it as it was present in their local address space. This is called the Remote Proxy</li>
<li>When we want to add a layer of security to the original underlying object to provide controlled access based on access rights of the client. This is called Protection Proxy</li>
</ul>

[Wikipedia](https://en.wikipedia.org/wiki/Proxy_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)


