public abstract class AnimalHandler {
    protected AnimalHandler successor; // Reference to the next handler in the chain

    public void setSuccessor(AnimalHandler successor) {
        this.successor = successor;
    }
    public abstract void handleProblem(ProblemType problemType);
}
