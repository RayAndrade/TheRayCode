namespace Demo
{
    class FactoryDataItem
    {
        public FactoryDataItem(object dataItem)
        {
            _dataItem = dataItem;
        }
        private object _dataItem;
        public object DataItem
        {
            get { return _dataItem; }
        }
    }
}