package Factory;

import Factory.Systems.OS;
import Factory.Systems.Android;
import Factory.Systems.IOS;
import Factory.Systems.Windows;

import java.util.Objects;
public class OSFactory {
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
