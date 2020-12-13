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


[Github](https://www.TheRayCode.com)
