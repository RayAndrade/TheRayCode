//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Director director = new Director();
        MonsterBuilder funnyBuilder = new FunnyMonsterBuilder();

        director.setBuilder(funnyBuilder);
        Monster monster = director.buildMonster();

        monster.showParts(); // Watch your back, the monster is loose!

    }
}