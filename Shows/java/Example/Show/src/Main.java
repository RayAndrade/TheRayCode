public class Main {
    public static void main(String[] args) {

        InterpreterContext context = new InterpreterContext();
        InterpreterClient client = new InterpreterClient(context);

        String instruction = "clean your room";
        boolean result = client.interpret(instruction);

        if (result) {
            System.out.println("The child understood: Time to clean the room!");
        } else {
            System.out.println("The child did not understand the instruction.");
        }
    }
 }