[top](../README.md)

Here's a **humorous Java implementation** of the **Builder Design Pattern**, inspired by the **Gang of Four**, with a monstrous twist. You will build a silly monster step-by-step—arms, legs, body, and head—before setting it off to walk!

---

### 🧟‍♂️ Builder Design Pattern in Java - MONSTER EDITION

**Pattern Category**: Creational
**Theme**: Build-a-Monster Workshop
**Audience**: Java beginners and students learning GoF Builder Pattern

---

## 🧰 Purpose

This Java example shows how to use the Builder Pattern to **construct a complex object step-by-step**. Here, our **Monster** is that complex object, and the builder provides methods to **attach arms**, **legs**, **a body**, **a head**, and eventually set the monster **walking (with wobbly style)**.

---

## 📦 Class Breakdown and Code

---

### 🔨 `Monster.java`

Represents the complex object being built.

```java
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
```

---

### 🧱 `MonsterBuilder.java`

Abstract builder that defines the monster-building steps.

```java
// This abstract builder defines all the steps needed to build a Monster
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
```

---

### ⚙️ `FunnyMonsterBuilder.java`

Concrete builder with some humor in the build steps.

```java
// This concrete builder builds a monster with silly parts and some snarky comments
public class FunnyMonsterBuilder extends MonsterBuilder {

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
```

---

### 🎩 `Director.java`

The director controls the order of building steps.

```java
// The director controls the construction process
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
```

---

### 🧪 `Main.java`

Demo class to build the monster.

```java
// Main demo where our monster is built and released into the wild (console)
public class Main {
    public static void main(String[] args) {
        Director director = new Director();
        MonsterBuilder funnyBuilder = new FunnyMonsterBuilder();

        director.setBuilder(funnyBuilder);
        Monster monster = director.buildMonster();

        monster.showParts(); // Watch your back, the monster is loose!
    }
}
```

---

## ✅ How to Compile and Run

```bash
javac Main.java Monster.java MonsterBuilder.java FunnyMonsterBuilder.java Director.java
java Main
```

result:
```
🧟 MONSTER ASSEMBLY:
 Left Arm: Slippery Noodle Arm 🍝
 Right Arm: Toaster Arm with Bread Slot 🍞
 Left Leg: Rollerblade Leg 🛼
 Right Leg: Peg Leg from a pirate thrift shop 🦿
 Body: Fridge Body with leftover pizza inside 🍕
 Head: Pumpkin Head with sunglasses 🎃🕶️
✅ Monster is now walking... or at least trying!

```


---

## 🧠 Summary

| Component             | Role                                        |
| --------------------- | ------------------------------------------- |
| `Monster`             | Product being built                         |
| `MonsterBuilder`      | Abstract builder interface                  |
| `FunnyMonsterBuilder` | Concrete builder with some monster humor    |
| `Director`            | Controls construction sequence              |
| `Main`                | Client code that triggers the build process |

