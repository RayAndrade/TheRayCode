public class SheepCollection implements SheepAggregate {

    private Integer[] sheepCounts;

    public SheepCollection(Integer[] sheepCounts) {
        this.sheepCounts = sheepCounts;
    }

    @Override
    public SheepIterator createIterator() {
        return new ConcreteSheepIterator(this);
    }
    public Integer[] getSheepCounts() {
        return sheepCounts;
    }
}
