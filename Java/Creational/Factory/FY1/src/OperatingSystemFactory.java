import systems.OS;
import systems.Android;
import systems.IOS;
import systems.Windows;

import java.util.Objects;

public class OperatingSystemFactory {
    public OS getInstance(int str){

        if(Objects.equals(str, 1)){
            return new Android();
        } else if(Objects.equals(str, 2)) {
            return new IOS();
        } else if(Objects.equals(str, 3)){
                return new Windows();
        } else
            return null;
    }
}
