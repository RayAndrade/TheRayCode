namespace Show
{
    public class TextEditor
    {
        private string _content = "";

        public void AppendText(string text)
        {
            _content += text;
        }

        public void RemoveText(int length)
        {
            _content = _content.Substring(0, _content.Length - length);
        }

        public string GetContent()
        {
            return _content;
        }
    }
}