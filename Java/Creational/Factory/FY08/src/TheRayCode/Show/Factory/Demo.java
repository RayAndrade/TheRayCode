package TheRayCode.Show.Factory;

import TheRayCode.Show.Factory.phone.*;
import TheRayCode.Show.Factory.phone.OS;

public class Demo {
    public static void main(String[] args) {
        // https://www.youtube.com/watch?v=pt1IbV1aSZ4
        // Factory Design Pattern in Java
        // Telusko http://www.telusko.com
        
        OperatingSystemFactory osf = new OperatingSystemFactory();

        // time 4:32
        //OS obj = (OS) new Android();
        //OS obj = (OS) new Windows();
        //OS obj = osf.getInstance("Open");
        //OS obj = osf.getInstance("Closed");
        OS obj = osf.getInstance("xxx");

        obj.spec();

        //System.out.println("The Ray Code is AWESOME!!!.");
    }
}
