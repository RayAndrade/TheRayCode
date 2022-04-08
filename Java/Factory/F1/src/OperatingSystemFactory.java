import com.phone.OS;
import com.phone.Android;
import com.phone.IOS;
import com.phone.Windows;

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
