# TheRayCode
## Iterator pattern java

We start by creating a package we called **profile** (TheRayCode.iterator.profile )
To this package we add the class **Profile**.
We parse the contact list from a set of "friend:email@gmail.com" pairs.
```java
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class Profile {
    private String name;
    private String email;
    private Map<String, List<String>> contacts = new HashMap<>();

    public Profile(String email, String name, String... contacts) {
        this.email = email;
        this.name = name;
        for (String contact : contacts) {
            String[] parts = contact.split(":");
            String contactType = "friend", contactEmail;
            if (parts.length == 1) {
                contactEmail = parts[0];
            }
            else {
                contactType = parts[0];
                contactEmail = parts[1];
            }
            if (!this.contacts.containsKey(contactType)) {
                this.contacts.put(contactType, new ArrayList<>());
            }
            this.contacts.get(contactType).add(contactEmail);
        }
    }
    public String getEmail() {
        return email;
    }
    public String getName() {
        return name;
    }
    public List<String> getContacts(String contactType) {
        if (!this.contacts.containsKey(contactType)) {
            this.contacts.put(contactType, new ArrayList<>());
        }
        return contacts.get(contactType);
    }
}
```

We add another package we call **iterators**.
To this package we add the interface called **ProfileIterator**.
```java
public interface ProfileIterator {
    boolean hasNext();
    Profile getNext();
    void reset();
}
```

Let's add a class to this package we call the **FacebookIterator** it will be implmented by the intertface **ProfileIterator**.
```java
import TheRayCode.iterator.profile.Profile;
import TheRayCode.iterator.social_networks.Facebook;

import java.util.ArrayList;
import java.util.List;

public class FacebookIterator implements ProfileIterator {
    private Facebook facebook;
    private String type;
    private String email;
    private int currentPosition = 0;
    private List<String> emails = new ArrayList<>();
    private List<Profile> profiles = new ArrayList<>();

    public FacebookIterator(Facebook facebook, String type, String email) {
        this.facebook = facebook;
        this.type = type;
        this.email = email;
    }

    private void lazyLoad() {
        if (emails.size() == 0) {
            List<String> profiles = facebook.requestProfileFriendsFromFacebook(this.email, this.type);
            for (String profile : profiles) {
                this.emails.add(profile);
                this.profiles.add(null);
            }
        }
    }

    @Override
    public boolean hasNext() {
        lazyLoad();
        return currentPosition < emails.size();
    }

    @Override
    public Profile getNext() {
        if (!hasNext()) {
            return null;
        }

        String friendEmail = emails.get(currentPosition);
        Profile friendProfile = profiles.get(currentPosition);
        if (friendProfile == null) {
            friendProfile = facebook.requestProfileFromFacebook(friendEmail);
            profiles.set(currentPosition, friendProfile);
        }
        currentPosition++;
        return friendProfile;
    }

    @Override
    public void reset() {
        currentPosition = 0;
    }
}
```

We create another iterator class called the **LinkedInIterator**.
It too is implemented with the **ProfileIterator**.

```java
import TheRayCode.iterator.profile.Profile;
import TheRayCode.iterator.social_networks.LinkedIn;

import java.util.ArrayList;
import java.util.List;

public class LinkedInIterator implements ProfileIterator {
    private LinkedIn linkedIn;
    private String type;
    private String email;
    private int currentPosition = 0;
    private List<String> emails = new ArrayList<>();
    private List<Profile> contacts = new ArrayList<>();

    public LinkedInIterator(LinkedIn twitter, String type, String email) {
        this.linkedIn = twitter;
        this.type = type;
        this.email = email;
    }

    private void lazyLoad() {
        if (emails.size() == 0) {
            List<String> profiles = linkedIn.requestRelatedContactsFromLinkedIn(this.email, this.type);
            for (String profile : profiles) {
                this.emails.add(profile);
                this.contacts.add(null);
            }
        }
    }

    @Override
    public boolean hasNext() {
        lazyLoad();
        return currentPosition < emails.size();
    }

    @Override
    public Profile getNext() {
        if (!hasNext()) {
            return null;
        }

        String friendEmail = emails.get(currentPosition);
        Profile friendContact = contacts.get(currentPosition);
        if (friendContact == null) {
            friendContact = linkedIn.requestContactInfoFromLinkedIn(friendEmail);
            contacts.set(currentPosition, friendContact);
        }
        currentPosition++;
        return friendContact;
    }

    @Override
    public void reset() {
        currentPosition = 0;
    }
}
```



We create a package we call *social_networks*.
To this package we add the interface we call **SocialNetwork**.

```java
import TheRayCode.iterator.iterators.ProfileIterator;

public interface SocialNetwork {
    ProfileIterator createFriendsIterator(String profileEmail);
    ProfileIterator createCoworkersIterator(String profileEmail);
}
```

Next we add the class for **Facebook**.
In the method **requestProfileFriendsFromFacebook** we POST a request to one of the Facebook API endpoints.
Instead, we emulates long network connection, which you would expect in the real life and return test data.

```java
import TheRayCode.iterator.iterators.FacebookIterator;
import TheRayCode.iterator.iterators.ProfileIterator;
import TheRayCode.iterator.profile.Profile;

import java.util.ArrayList;
import java.util.List;

public class Facebook implements SocialNetwork {
    private List<Profile> profiles;
    public Facebook(List<Profile> cache) {
        if (cache != null) {
            this.profiles = cache;
        } else {
            this.profiles = new ArrayList<>();
        }
    }
    public Profile requestProfileFromFacebook(String profileEmail) {
        simulateNetworkLatency();
        System.out.println("Facebook: Loading profile '" + profileEmail + "' over the network...");
        return findProfile(profileEmail);
    }

    public List<String> requestProfileFriendsFromFacebook(String profileEmail, String contactType) {
        simulateNetworkLatency();
        System.out.println("Facebook: Loading '" + contactType + "' list of '" + profileEmail + "' over the network...");
        Profile profile = findProfile(profileEmail);
        if (profile != null) {
            return profile.getContacts(contactType);
        }
        return null;
    }

    private Profile findProfile(String profileEmail) {
        for (Profile profile : profiles) {
            if (profile.getEmail().equals(profileEmail)) {
                return profile;
            }
        }
        return null;
    }

    private void simulateNetworkLatency() {
        try {
            Thread.sleep(2500);
        } catch (InterruptedException ex) {
            ex.printStackTrace();
        }
    }

    @Override
    public ProfileIterator createFriendsIterator(String profileEmail) {
        return new FacebookIterator(this, "friends", profileEmail);
    }

    @Override
    public ProfileIterator createCoworkersIterator(String profileEmail) {
        return new FacebookIterator(this, "coworkers", profileEmail);
    }

}
```

We also add a class for LinkedIn called **LinkedIn**.
It too is implemented with the **SocialNetwork** interface.
The **Profile requestContactInfoFromLinkedIn** method would be a POST request to one of the LinkedIn API endpoints.
Instead, we emulates long network connection, which you would expect in the real life and return test data.

The **List<String> requestRelatedContactsFromLinkedIn** method would be a POST request to one of the Titter API endpoints.
Instead, we also emulate a long network connection, which you would expect in the real life and return test data

```java
import TheRayCode.iterator.iterators.LinkedInIterator;
import TheRayCode.iterator.iterators.ProfileIterator;
import TheRayCode.iterator.profile.Profile;

import java.util.ArrayList;
import java.util.List;

public class LinkedIn implements SocialNetwork {
    private List<Profile> contacts;
    public LinkedIn(List<Profile> cache) {
        if (cache != null) {
            this.contacts = cache;
        } else {
            this.contacts = new ArrayList<>();
        }
    }
    public Profile requestContactInfoFromLinkedIn(String profileEmail) {
        simulateNetworkLatency();
        System.out.println("LinkedIn: Loading profile '" + profileEmail + "' over the network...");
        return findContact(profileEmail);
    }

    public List<String> requestRelatedContactsFromLinkedIn(String profileEmail, String contactType) {
        simulateNetworkLatency();
        System.out.println("LinkedIn: Loading '" + contactType + "' list of '" + profileEmail + "' over the network...");
        Profile profile = findContact(profileEmail);
        if (profile != null) {
            return profile.getContacts(contactType);
        }
        return null;
    }

    private Profile findContact(String profileEmail) {
        for (Profile profile : contacts) {
            if (profile.getEmail().equals(profileEmail)) {
                return profile;
            }
        }
        return null;
    }

    private void simulateNetworkLatency() {
        try {
            Thread.sleep(2500);
        } catch (InterruptedException ex) {
            ex.printStackTrace();
        }
    }

    @Override
    public ProfileIterator createFriendsIterator(String profileEmail) {
        return new LinkedInIterator(this, "friends", profileEmail);
    }

    @Override
    public ProfileIterator createCoworkersIterator(String profileEmail) {
        return new LinkedInIterator(this, "coworkers", profileEmail);
    }
}
```

Now let's create the **SocialSpammer**.
We place it in a package we call **TheRayCode.iterator.spammer**.
```java
import TheRayCode.iterator.example.iterators.ProfileIterator;
import TheRayCode.iterator.example.profile.Profile;
import TheRayCode.iterator.example.social_networks.SocialNetwork;

public class SocialSpammer {
    public SocialNetwork network;
    public ProfileIterator iterator;
    public SocialSpammer(SocialNetwork network) {
        this.network = network;
    }
    public void sendSpamToFriends(String profileEmail, String message) {
        System.out.println("\nIterating over friends...\n");
        iterator = network.createFriendsIterator(profileEmail);
        while (iterator.hasNext()) {
            Profile profile = iterator.getNext();
            sendMessage(profile.getEmail(), message);
        }
    }
    public void sendSpamToCoworkers(String profileEmail, String message) {
        System.out.println("\nIterating over coworkers...\n");
        iterator = network.createCoworkersIterator(profileEmail);
        while (iterator.hasNext()) {
            Profile profile = iterator.getNext();
            sendMessage(profile.getEmail(), message);
        }
    }
    public void sendMessage(String email, String message) {
        System.out.println("Sent message to: '" + email + "'. Message body: '" + message + "'");
    }
}
```
We put this all together in a class called **Demo**.
Everything comes together here.
The code for **Demo** is:
```java
import TheRayCode.iterator.profile.Profile;
import TheRayCode.iterator.social_networks.Facebook;
import TheRayCode.iterator.social_networks.LinkedIn;
import TheRayCode.iterator.social_networks.SocialNetwork;
import TheRayCode.iterator.spammer.SocialSpammer;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
public class Demo {
    public static Scanner scanner = new Scanner(System.in);
    public static void main(String[] args) {
        System.out.println("Please specify social network to target spam tool (default:Facebook):");
        System.out.println("1. Facebook");
        System.out.println("2. LinkedIn");
        String choice = scanner.nextLine();
        SocialNetwork network;
        if (choice.equals("2")) {
            network = new LinkedIn(createTestProfiles());
        }
        else {
            network = new Facebook(createTestProfiles());
        }
        SocialSpammer spammer = new SocialSpammer(network);
        spammer.sendSpamToFriends("TheRayCode@RayAndrade.com",
                "Hey! This is Ray's friend Junk. Can you do me a favor and like this post TheRayCode.org?");
        spammer.sendSpamToCoworkers("TheRayCode@RayAndrade.com",
                "Hey! This is Ray's boss Support, Ray told me you would be interested in TheRayCode.org.");
    }
    public static List<Profile> createTestProfiles() {
        List<Profile> data = new ArrayList<Profile>();
        data.add(new Profile("TheRayCode@RayAndrade.com", "Ray Smith", "friends:mad_max@ya.com", "friends:catwoman@yahoo.com", "coworkers:sam@amazon.com"));
        data.add(new Profile("mad_max@ya.com", "Maximilian", "friends:TheRayCode@RayAndrade.com", "coworkers:sam@amazon.com"));
        data.add(new Profile("bill@microsoft.eu", "Billie", "coworkers:avanger@ukr.net"));
        data.add(new Profile("avanger@ukr.net", "John Day", "coworkers:bill@microsoft.eu"));
        data.add(new Profile("sam@amazon.com", "Sam Kitting", "coworkers:TheRayCode@RayAndrade.com", "coworkers:mad_max@ya.com", "friends:catwoman@yahoo.com"));
        data.add(new Profile("catwoman@yahoo.com", "Liza", "friends:TheRayCode@RayAndrade.com", "friends:sam@amazon.com"));
        return data;
    }
}
```

We now compile and run.
We should get:
```run
Please specify social network to target spam tool (default:Facebook):
1. Facebook
2. LinkedIn
1

Iterating over friends...

Facebook: Loading 'friends' list of 'TheRayCode@RayAndrade.com' over the network...
Facebook: Loading profile 'mad_max@ya.com' over the network...
Sent message to: 'mad_max@ya.com'. Message body: 'Hey! This is Ray's friend Junk. Can you do me a favor and like this post TheRayCode.org?'
Facebook: Loading profile 'catwoman@yahoo.com' over the network...
Sent message to: 'catwoman@yahoo.com'. Message body: 'Hey! This is Ray's friend Junk. Can you do me a favor and like this post TheRayCode.org?'

Iterating over coworkers...

Facebook: Loading 'coworkers' list of 'TheRayCode@RayAndrade.com' over the network...
Facebook: Loading profile 'sam@amazon.com' over the network...
Sent message to: 'sam@amazon.com'. Message body: 'Hey! This is Ray's boss Support, Ray told me you would be interested in TheRayCode.org.'
```

When we select **2** we get
```run
Iterating over friends...

LinkedIn: Loading 'friends' list of 'TheRayCode@RayAndrade.com' over the network...
LinkedIn: Loading profile 'mad_max@ya.com' over the network...
Sent message to: 'mad_max@ya.com'. Message body: 'Hey! This is Ray's friend Junk. Can you do me a favor and like this post TheRayCode.org?'
LinkedIn: Loading profile 'catwoman@yahoo.com' over the network...
Sent message to: 'catwoman@yahoo.com'. Message body: 'Hey! This is Ray's friend Junk. Can you do me a favor and like this post TheRayCode.org?'

Iterating over coworkers...

LinkedIn: Loading 'coworkers' list of 'TheRayCode@RayAndrade.com' over the network...
LinkedIn: Loading profile 'sam@amazon.com' over the network...
Sent message to: 'sam@amazon.com'. Message body: 'Hey! This is Ray's boss Support, Ray told me you would be interested in TheRayCode.org.'
```
The Ray Code is AWESOME!!!


[Wikipedia](https://en.wikipedia.org/wiki/Iterator_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
