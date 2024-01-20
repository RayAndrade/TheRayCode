public class CleanRoomExpression  implements Expression{

    private String action;

    public CleanRoomExpression(String action) {
        this.action = action;
    }
    @Override
    public boolean interpret(InterpreterContext context) {
        return context.getTranslation(action).equals("CLEAN_ROOM");
    }
}
