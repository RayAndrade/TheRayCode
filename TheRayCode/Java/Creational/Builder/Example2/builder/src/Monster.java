public class Monster {
    private String leftArm;
    private String rightArm;
    private String leftLeg;
    private String rightLeg;
    private String body;
    private String head;
    private boolean canWalk;

    public void setLeftArm(String part) { this.leftArm = part; }
    public void setRightArm(String part) { this.rightArm = part; }
    public void setLeftLeg(String part) { this.leftLeg = part; }
    public void setRightLeg(String part) { this.rightLeg = part; }
    public void setBody(String part) { this.body = part; }
    public void setHead(String part) { this.head = part; }
    public void setCanWalk(boolean status) { this.canWalk = status; }

    public void showParts() {
        System.out.println("🧟 MONSTER ASSEMBLY:");
        System.out.println(" Left Arm: " + leftArm);
        System.out.println(" Right Arm: " + rightArm);
        System.out.println(" Left Leg: " + leftLeg);
        System.out.println(" Right Leg: " + rightLeg);
        System.out.println(" Body: " + body);
        System.out.println(" Head: " + head);
        if (canWalk)
            System.out.println("✅ Monster is now walking... or at least trying!");
        else
            System.out.println("❌ Monster can't walk yet. Maybe add some legs?");
    }

}
