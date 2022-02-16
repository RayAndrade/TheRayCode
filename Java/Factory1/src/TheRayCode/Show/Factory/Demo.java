package TheRayCode.Show.Factory;

import TheRayCode.Show.Factory.phone.*;
import TheRayCode.Show.Factory.phone.OS;

public class Demo {
    public static void main(String[] args) {

        //https://www.youtube.com/watch?v=pt1IbV1aSZ4
        
        OperatingSystemFactory osf = new OperatingSystemFactory();

        //OS obj = osf.getInstatnce("Open");
        //OS obj = osf.getInstatnce("Closed");
        OS obj = osf.getInstatnce("xxx");

        obj.spec();


        //System.out.println("The Ray Code is AWESOME!!!.");
    }
}
