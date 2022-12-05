namespace TheRayCode.Factory.DesignPatterns
{
    public class Director
    {
        private Builder _builder;
        
        public Builder Builder
        {
            set { _builder = value; } 
        }
        
        // The Director can construct several product variations using the same
        // building steps.
        public void buildMinimalViableProduct()
        {
            this._builder.BuildPartA();
        }
        
        public void buildFullFeaturedProduct()
        {
            this._builder.BuildPartA();
            this._builder.BuildPartB();
            this._builder.BuildPartC();
        }
    }


}