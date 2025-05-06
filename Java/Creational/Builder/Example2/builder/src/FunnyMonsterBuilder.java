public class FunnyMonsterBuilder extends MonsterBuilder{
    @Override
    public void buildArms() {
        monster.setLeftArm("Slippery Noodle Arm 🍝");
        monster.setRightArm("Toaster Arm with Bread Slot 🍞");
    }

    @Override
    public void buildLegs() {
        monster.setLeftLeg("Rollerblade Leg 🛼");
        monster.setRightLeg("Peg Leg from a pirate thrift shop 🦿");
    }

    @Override
    public void buildBody() {
        monster.setBody("Fridge Body with leftover pizza inside 🍕");
    }

    @Override
    public void buildHead() {
        monster.setHead("Pumpkin Head with sunglasses 🎃🕶️");
    }

    @Override
    public void setToWalk() {
        monster.setCanWalk(true);
    }
}
