
package TheRayCode.iterator.example;

import TheRayCode.iterator.example.profile.Profile;
import TheRayCode.iterator.example.social_networks.Facebook;
import TheRayCode.iterator.example.social_networks.Twitter;
import TheRayCode.iterator.example.social_networks.SocialNetwork;
import TheRayCode.iterator.example.spammer.SocialSpammer;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;


/**
 * Demo class. Everything comes together here.
 */
public class Demo {
    public static Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        System.out.println("Please specify social network to target spam tool (default:Facebook):");
        System.out.println("1. Facebook");
        System.out.println("2. Twitter");
        String choice = scanner.nextLine();

        SocialNetwork network;
        if (choice.equals("2")) {
            network = new Twitter(createTestProfiles());
        }
        else {
            network = new Facebook(createTestProfiles());
        }

        SocialSpammer spammer = new SocialSpammer(network);
        spammer.sendSpamToFriends("TheRayCode@RayAndrade.com",
                "Hey! This is Ray's friend Junk. Can you do me a favor and like this post TheRayCode.org?");
        spammer.sendSpamToCoworkers("TheRayCode@RayAndrade.com",
                "Hey! This is Ray's boss Support. Ray told me you would be interested in TheRayCode.org.");
    }

    public static List<Profile> createTestProfiles() {
        List<Profile> data = new ArrayList<Profile>();
        data.add(new Profile("TheRayCode@RayAndrade.com", "Ray1 Smith", "friends:mad_max@ya.com", "friends:catwoman@yahoo.com", "coworkers:sam@amazon.com"));
        data.add(new Profile("mad_max@ya.com", "Maximilian", "friends:TheRayCode@RayAndrade.com", "coworkers:sam@amazon.com"));
        data.add(new Profile("bill@microsoft.eu", "Billie", "coworkers:avanger@ukr.net"));
        data.add(new Profile("avanger@ukr.net", "John Day", "coworkers:bill@microsoft.eu"));
        data.add(new Profile("sam@amazon.com", "Sam Kitting", "coworkers:TheRayCode@RayAndrade.com", "coworkers:mad_max@ya.com", "friends:catwoman@yahoo.com"));
        data.add(new Profile("catwoman@yahoo.com", "Liza", "friends:TheRayCode@RayAndrade.com", "friends:sam@amazon.com"));
        return data;
    }
}
