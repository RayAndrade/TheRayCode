import systems.OS;
import systems.Android;
import systems.IOS;
import systems.Windows;

public class OperatingSystemFactory {
    public OS getInstance(String str){

        if(str.equals("Android")){
            return new Android();
        } else if(str.equals("IOS")){
            return new IOS();
        } else
            return new Windows();
    }
}
