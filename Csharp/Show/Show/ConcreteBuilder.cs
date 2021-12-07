namespace Show
{
    public class ConcreteBuilder: IBuilder
    {
        private Product _product = new Product();
        public void BuildPartA()
        {
            this._product.Add("PartA1");
        }
        public ConcreteBuilder()
        {
            this.Reset();
        }
        public void BuildPartB()
        {
            this._product.Add("PartB1");
        }
        public void BuildPartC()
        {
            this._product.Add("PartC1");
        }
        public void Reset()
        {
            this._product = new Product();
        }
        public Product GetProduct()
        {
            Product result = this._product;
            this.Reset();
            return result;
        }
    }
}