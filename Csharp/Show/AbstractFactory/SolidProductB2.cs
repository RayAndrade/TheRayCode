namespace AbstractFactory
{
    class SolidProductB2:ProductB
    {
        public string UsefulFunctionB()
        {
            return "The result of the product B2.";
        }

        public string AnotherUsefulFunctionB(ProductA collaborator)
        {
            var result = collaborator.UsefulFunctionA();
            return $"The result of the B2 collaborating with the ({result})";
        }
    }
}