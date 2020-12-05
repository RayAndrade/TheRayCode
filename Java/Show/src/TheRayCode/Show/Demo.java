package TheRayCode.Show;
import TheRayCode.Show.facade.VideoConversionFacade;

import java.io.File;

public class Demo {
    public static void main(String[] args) {

        VideoConversionFacade converter = new VideoConversionFacade();
        File mp4Video = converter.convertVideo("youtubevideo.ogg", "mp4");


        //System.out.println("The Ray Code is AWESOME!!!");
    }
}
