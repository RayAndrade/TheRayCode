# TheRayCode
TheRayCode Java Proxy

in package **some_cool_media_library** create class **Video** 

```java

public class Video {
    public String id;
    public String title;
    public String data;

    Video(String id, String title) {
        this.id = id;
        this.title = title;
        this.data = "Random video.";
    }
}
```

Let's create an **interface** called **ThirdPartyYouTubeLib**

```java

import java.util.HashMap;

public interface ThirdPartyYouTubeLib {
    HashMap<String, Video> popularVideos();

    Video getVideo(String videoId);
}

```

Let's **create** a class that implements **ThirdPartyYouTubeLib**

```java
import java.util.HashMap;

public class ThirdPartyYouTubeClass  implements ThirdPartyYouTubeLib { 

}
```
next you need to overide **HashMap** and **Video**

```java

    @Override
    public HashMap<String, Video> popularVideos() {
        
    }

    @Override
    public Video getVideo(String videoId) {
        
    }


connectToServer("http://www.youtube.com/" + videoId);
return getSomeVideo(videoId);
```



    // -----------------------------------------------------------------------
    // Fake methods to simulate network activity. They as slow as a real life.

    private int random(int min, int max) {
        return min + (int) (Math.random() * ((max - min) + 1));
    }

    private void experienceNetworkLatency() {
        int randomLatency = random(5, 10);
        for (int i = 0; i < randomLatency; i++) {
            try {
                Thread.sleep(100);
            } catch (InterruptedException ex) {
                ex.printStackTrace();
            }
        }
    }

    private void connectToServer(String server) {
        System.out.print("Connecting to " + server + "... ");
        experienceNetworkLatency();
        System.out.print("Connected!" + "\n");
    }

    private HashMap<String, Video> getRandomVideos() {
        System.out.print("Downloading populars... ");

        experienceNetworkLatency();
        HashMap<String, Video> hmap = new HashMap<String, Video>();
        hmap.put("catzzzzzzzzz", new Video("sadgahasgdas", "Catzzzz.avi"));
        hmap.put("mkafksangasj", new Video("mkafksangasj", "Dog play with ball.mp4"));
        hmap.put("dancesvideoo", new Video("asdfas3ffasd", "Dancing video.mpq"));
        hmap.put("dlsdk5jfslaf", new Video("dlsdk5jfslaf", "Barcelona vs RealM.mov"));
        hmap.put("3sdfgsd1j333", new Video("3sdfgsd1j333", "Programing lesson#1.avi"));

        System.out.print("Done!" + "\n");
        return hmap;
    }

    private Video getSomeVideo(String videoId) {
        System.out.print("Downloading video... ");

        experienceNetworkLatency();
        Video video = new Video(videoId, "Some video title");

        System.out.print("Done!" + "\n");
        return video;
    } 
   }

```

replace the nulls with:

```java
connectToServer("http://www.youtube.com");
return getRandomVideos();
```

and ...

```java
end in code
```


[Github](https://www.TheRayCode.com)
