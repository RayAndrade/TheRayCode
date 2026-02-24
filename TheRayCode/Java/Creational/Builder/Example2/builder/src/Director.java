public class Director {
    private MonsterBuilder builder;

    public void setBuilder(MonsterBuilder builder) {
        this.builder = builder;
    }

    public Monster buildMonster() {
        builder.createNewMonster();
        builder.buildArms();  // Step 1: Give it limbs for dramatic hugs
        builder.buildLegs();  // Step 2: So it can clumsily wobble around
        builder.buildBody();  // Step 3: Gotta have a core
        builder.buildHead();  // Step 4: So it can nod while walking
        builder.setToWalk();  // Final step: Activate awkward locomotion
        return builder.getMonster();
    }

}
