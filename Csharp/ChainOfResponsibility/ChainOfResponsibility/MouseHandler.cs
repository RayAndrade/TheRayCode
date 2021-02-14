namespace ChainOfResponsibility
{
    class MouseHandler : AbstractHandler
    {
        public override object Handle(object request)
        {
            if (request.ToString() == "Cheese")
            {
                return $"Mouse: I love {request.ToString()}.\n";
            }
            else
            {
                return base.Handle(request);
            }
        }
    }
}