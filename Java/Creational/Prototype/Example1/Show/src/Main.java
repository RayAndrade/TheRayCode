public class Main {
    public static void main(String[] args) {
        System.out.println("Prototype Pattern Demo - Let's Clone Some Students!");

        // Create an original object
        ConcretePrototype originalStudent = new ConcretePrototype("John Doe", 123, "Why don't scientists trust atoms? Because they make up everything!");
        System.out.println("\nOriginal Student Created:");
        originalStudent.displayStudentDetails();

        ConcretePrototype clonedStudent = (ConcretePrototype) originalStudent.clone();

        System.out.println("\nCloned Student:");
        clonedStudent.displayStudentDetails();

        Client.compareObjects(originalStudent, clonedStudent);

        System.out.println("\nCreating a brand-new student (the manual way):");
        ConcretePrototype newStudent = new ConcretePrototype("Jane Smith", 456, "Why don't skeletons fight each other? They don't have the guts.");
        newStudent.displayStudentDetails();

        System.out.println("\nDemo Finished! Students cloned successfully. No rebellions yet!");
    }
}
