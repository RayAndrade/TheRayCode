namespace ChainOfResponsibility
{
    class MouseHandler : AbstractHandler
    {
        public override object Handle(object request)
        {
            if ((request as string) == "Cheese")
            {
                return $"Mouse: I'll eat the {request.ToString()}.\n";
            }
            else
            {
                return base.Handle(request);
            }
        }
    }
}