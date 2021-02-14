namespace ChainOfResponsibility
{
    class BearHandler : AbstractHandler
    {
        public override object Handle(object request)
        {
            if (request.ToString() == "Honey")
            {
                return $"Bear: Oh my!! I'll eat the {request.ToString()}.\n";
            }
            else
            {
                return base.Handle(request);
            }
        }
    }
}