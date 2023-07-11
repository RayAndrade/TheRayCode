public class Main {
    public static void main(String[] args) {
        // Let's create the chain of responsibility

        AnimalHandler monkey = new MonkeyHandler();
        AnimalHandler elephant = new ElephantHandler();
        AnimalHandler penguin = new PenguinHandler();

        monkey.setSuccessor(elephant);
        elephant.setSuccessor(penguin);

        // Let's simulate some problems
        monkey.handleProblem(ProblemType.HUNGER);
        monkey.handleProblem(ProblemType.SLEEPINESS);
        monkey.handleProblem(ProblemType.MISCHIEF);
        monkey.handleProblem(ProblemType.HUNGER);
    }
}