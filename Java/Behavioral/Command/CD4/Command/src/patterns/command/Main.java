package patterns.command;

//import patterns.command.commands.*;
import patterns.command.commands.KitchenLightsOffCommand;
import patterns.command.commands.KitchenLightsOnCommand;
import patterns.command.hardware.KitchenLights;
//  https://youtu.be/Ludu0Ry2_0w

public class Main {

    public static void main(String[] args) {
        //Example 1 - Empty slots
        patterns.command.AlexaDevice alexa = new patterns.command.AlexaDevice();
        System.out.println(alexa);

//      ---------------------------------------------------------------

        //Example 2 - Kitchen Lights on
//        AlexaDevice alexa = new AlexaDevice();
//
//        //Create an instance
        KitchenLights kitchenLights = new KitchenLights();
//
//        //Set the slots with new commands
        alexa.setCommand(
                0,
                (patterns.command.commands.Command) new KitchenLightsOnCommand(kitchenLights),
                (patterns.command.commands.Command) new KitchenLightsOffCommand(kitchenLights)
        );
//
        System.out.println(alexa);
//
        alexa.activateSlot(0);
        alexa.deactivateSlot(0);

//      ---------------------------------------------------------------

        //Example 3 - Everything on!
//        AlexaDevice alexa = new AlexaDevice();
//
//        //Create an instance
//        KitchenLights kitchenLights = new KitchenLights();
//        Music music = new Music();
//
//        //Set the slots with new commands
//        alexa.setCommand(
//                1,
//                new EverythingOnCommand(music, kitchenLights),
//                new EverythingOffCommand(music, kitchenLights)
//        );
//
//        System.out.println(alexa);
//
//        alexa.activateSlot(1);
//        alexa.deactivateSlot(1);

    }
}
