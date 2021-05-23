namespace TheRayCode.Mediator
{
    class BaseComponent
    {
        protected Mediator _mediator;

        public BaseComponent(Mediator mediator = null)
        {
            this._mediator = mediator;
        }

        public void SetMediator(Mediator mediator)
        {
            this._mediator = mediator;
        }
    }

}