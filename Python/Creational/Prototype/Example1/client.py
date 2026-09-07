class Client:

    @staticmethod
    def demonstrate(prototype):
        clone1 = prototype.clone()
        clone2 = prototype.clone()

        clone1.state = "State A"
        clone2.state = "State B"

        return clone1, clone2