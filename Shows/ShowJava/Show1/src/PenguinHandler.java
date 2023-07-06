public class PenguinHandler extends AnimalHandler{
    @Override
    public void handleProblem(ProblemType problemType) {
        if (problemType == ProblemType.MISCHIEF) {
            System.out.println("Penguin: I'll bring you some snowballs to play with!");
        } else {
            System.out.println("Penguin: This problem is beyond my expertise. Let's pass it on.");
            if (successor != null) {
                successor.handleProblem(problemType);
            }
        }
    }
}
