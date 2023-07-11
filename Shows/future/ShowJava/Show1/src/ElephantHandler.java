public class ElephantHandler extends AnimalHandler{
    @Override
    public void handleProblem(ProblemType problemType) {
        if (problemType == ProblemType.SLEEPINESS) {
            System.out.println("Elephant: I'll give you a trunk-sized pillow!");
        } else {
            System.out.println("Elephant: I'm not the right animal to handle this. Let's find someone else.");
            if (successor != null) {
                successor.handleProblem(problemType);
            }
        }
    }
}
