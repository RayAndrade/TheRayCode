import systems.OS;
import systems.OperatingSystemFactory;

import java.util.Scanner;

public class FactoryMain {

    public static void main(String[] args) {

        int os = 0;
        OperatingSystemFactory osf = new OperatingSystemFactory();
        OS obj = null;

        Scanner scan= new Scanner(System.in);

        while(os == 0) {
            System.out.println("Select 1 for Android, 2 for IOS, 3 for Windows or 4 to exit");
            os = scan.nextInt();
            switch (os) {
                case 1:
                    obj = osf.getInstance(1);
                    break;
                case 2:
                    obj = osf.getInstance(2);
                    break;
                case 3:
                    obj = osf.getInstance(3);
                    break;
                case 4:
                    obj = osf.getInstance(4);
                    break;
            }
            if(obj != null){obj.spec();}
            else {break;}
            os = 0;
        }
        
        System.out.println("The Ray Code is AWESOME!!!");
    }
}
