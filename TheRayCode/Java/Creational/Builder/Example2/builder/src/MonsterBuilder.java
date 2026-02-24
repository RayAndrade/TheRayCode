public abstract class MonsterBuilder {
    protected Monster monster;

    public void createNewMonster() {
        monster = new Monster();
    }

    public Monster getMonster() {
        return monster;
    }

    public abstract void buildArms();
    public abstract void buildLegs();
    public abstract void buildBody();
    public abstract void buildHead();
    public abstract void setToWalk();

}
