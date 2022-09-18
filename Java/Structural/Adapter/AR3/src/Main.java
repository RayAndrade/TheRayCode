public class Main {
    public static void main(String[] args) {

        //PiolotPen pp = new PilotPen();
        Pen p = new PenAdapter();

        AssignmentWork aw = new AssignmentWork();
        aw.writeAssigment("I am too tired to write an assighment.");
        aw.setP(p);

        System.out.println("Hello world!");
    }
}