# TheRayCode
TheRayCode Java Proxy

create package **some_cool_media_library** add class **Video** 

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

Let's create **ThirdPartyYouTubeClass** a class that implements **ThirdPartyYouTubeLib**

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
```
next

```java
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
and...
```java

connectToServer("http://www.youtube.com/" + videoId);
return getSomeVideo(videoId);

```
create the **proxy** package and add the class **YouTubeCacheProxy** 

let's add the imports the imports :

```java

import TheRayCode.proxy.some_cool_media_library.ThirdPartyYouTubeClass;
import TheRayCode.proxy.some_cool_media_library.ThirdPartyYouTubeLib;
import TheRayCode.proxy.some_cool_media_library.Video;

```
the class implements **ThirdPartyYouTubeLib**
we also need to
override **HashMap** and  **Video**
add:
```java
import java.util.HashMap;
```
add
```java
private ThirdPartyYouTubeLib youtubeService;
private HashMap<String, Video> cachePopular = new HashMap<String, Video>();
private HashMap<String, Video> cacheAll = new HashMap<String, Video>();
```
finshed run! to **HashMap** add:
```java
if (cachePopular.isEmpty()) {
    cachePopular = youtubeService.popularVideos();
} else {
    System.out.println("Retrieved list from cache.");
}
return cachePopular;
```
and to **Video** add:

```java
Video video = cacheAll.get(videoId);
if (video == null) {
    video = youtubeService.getVideo(videoId);
    cacheAll.put(videoId, video);
} else {
    System.out.println("Retrieved video '" + videoId + "' from cache.");
}
return video;
```
add to the bottom:
```java
public void reset() {
 cachePopular.clear();
 cacheAll.clear();
}
```
next we go to **downloader** and add class **YouTubeDownloader** add

```java
import TheRayCode.proxy.some_cool_media_library.ThirdPartyYouTubeLib;
import TheRayCode.proxy.some_cool_media_library.Video;

import java.util.HashMap;
```
also add:
```java
private ThirdPartyYouTubeLib api;

public YouTubeDownloader(ThirdPartyYouTubeLib api) {
    this.api = api;
}

public void renderVideoPage(String videoId) {
    Video video = api.getVideo(videoId);
    System.out.println("\n-------------------------------");
    System.out.println("Video page (imagine fancy HTML)");
    System.out.println("ID: " + video.id);
    System.out.println("Title: " + video.title);
    System.out.println("Video: " + video.data);
    System.out.println("-------------------------------\n");
}

public void renderPopularVideos() {
    HashMap<String, Video> list = api.popularVideos();
    System.out.println("\n-------------------------------");
    System.out.println("Most popular videos on YouTube (imagine fancy HTML)");
    for (Video video : list.values()) {
        System.out.println("ID: " + video.id + " / Title: " + video.title);
    }
    System.out.println("-------------------------------\n");
}
```
we now go to **Demo**
```java

import TheRayCode.proxy.downloader.YouTubeDownloader;
import TheRayCode.proxy.proxy.YouTubeCacheProxy;
import TheRayCode.proxy.some_cool_media_library.ThirdPartyYouTubeClass;


public class Demo {
    public static void main(String[] args) {

        YouTubeDownloader naiveDownloader = new YouTubeDownloader(new ThirdPartyYouTubeClass());
        YouTubeDownloader smartDownloader = new YouTubeDownloader(new YouTubeCacheProxy());

        
    }

    private static long test(YouTubeDownloader downloader) {
        long startTime = System.currentTimeMillis();

        // User behavior in our app:
        downloader.renderPopularVideos();
        downloader.renderVideoPage("catzzzzzzzzz");
        downloader.renderPopularVideos();
        downloader.renderVideoPage("dancesvideoo");
        // Users might visit the same page quite often.
        downloader.renderVideoPage("catzzzzzzzzz");
        downloader.renderVideoPage("someothervid");

        long estimatedTime = System.currentTimeMillis() - startTime;
        System.out.print("Time elapsed: " + estimatedTime + "ms\n");
        return estimatedTime;

        
        }
```
add:
```java    
long naive = test(naiveDownloader);
long smart = 0;//test(smartDownloader);
System.out.print("Time saved by caching proxy: " + (naive - smart) + "ms");

```
run

[Github](https://www.github.com/RayAndrade/TheRayCode)
