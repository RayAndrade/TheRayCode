import systems.Android;
import systems.IOS;
import systems.OS;
import systems.Windows;

import java.util.Scanner;

import java.io.IOException;

public class FactoryMain {
    public static void main(String[] args) {
        int os = 0;
        OperatingSystemFactory osf = new OperatingSystemFactory();
        OS obj = null;

        Scanner scan= new Scanner(System.in);
        while(os == 0) {
            System.out.println("Select 1 for Android, 2 for IOS or 3 for Windows ");
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
            }
            obj.spec();
            os = 0;
        }
    }
}
