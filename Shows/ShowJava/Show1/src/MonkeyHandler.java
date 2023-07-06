public class MonkeyHandler extends AnimalHandler{
    @Override
    public void handleProblem(ProblemType problemType) {
        if (problemType == ProblemType.HUNGER) {
            System.out.println("Monkey: I'll peel some bananas for you!");
        } else {
            System.out.println("Monkey: I can't help with this problem. Let's ask someone else.");
            if (successor != null) {
                successor.handleProblem(problemType);
            }
        }
    }
}
