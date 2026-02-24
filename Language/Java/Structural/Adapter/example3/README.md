**Pen.java**

```
public interface Pen {
    void write(String str);
}
```

**PilotPen.java**

```
public class PilotPen {
    void write(String str){
        System.out.println("Hello world!");
    }
}
```

**PenAdapter.java**

```
public class PenAdapter implements Pen {
    PilotPen pp = new PilotPen();
    @Override
    public void write(String str) {
        pp.write("something");
    }
}
```

**AssignmentWork.java**

```
public class AssignmentWork {
    private Pen p;

    public Pen getP(){
        return p;
    }

    public void setP(Pen p){
        this.p = p;
    }

    public void writeAssigment(String str)
    {
        p.write(str);
    }
}
```

**Main.java**

```
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
```
