import com.phone.OS;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;

public class FactoryMain {
    public static void main(String[] args) {


        BufferedReader scan = new BufferedReader(new InputStream() {
            @Override
            public int read() throws IOException {
                return 0;
            }
        });


        int expression = int can1;

        while (contine) {
            if (expression == 1){

            }
            if (expression == 2){

            }
            if (expression == 3){

            }
            if (expression == 0){
                break;
            }
        }



        OperatingSystemFactory osf = new OperatingSystemFactory();

        //OS obj = osf.getInstance("Android");
        //OS obj = osf.getInstance("IOS");
        OS obj = osf.getInstance("junk");
        obj.spec();
        System.out.println("The Ray Code is AWESOME!!!");
    }

}
