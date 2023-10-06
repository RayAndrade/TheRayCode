[up](../README.md)

Sure, let's implement the Visitor pattern in the context of a mail delivery system.

**Concept**:
We will have various types of mail recipients, like `Person`, `Business`, and `Institution`. Each recipient will have its method to handle the mail. The `Visitor` pattern will be used to perform operations on the recipient, like printing labels, calculating postage, or performing special delivery.

**Order to Create Classes**:

1. `MailRecipient` Interface: Contains an `accept` method for objects to accept a visitor.
2. `MailVisitor` Interface: The basis for creating different types of visitor classes.
3. `Person`, `Business`, and `Institution` classes: Implement the `MailRecipient` interface.
4. `LabelPrinterVisitor` class: Implements the `MailVisitor` interface to print labels for the recipients.
5. `index.php`: Demo file.

**1. MailRecipient.php**:
```php
<?php
interface MailRecipient {
    public function accept(MailVisitor $visitor);
}
?>
```

**2. MailVisitor.php**:
```php
<?php
interface MailVisitor {
    public function visitPerson(Person $person);
    public function visitBusiness(Business $business);
    public function visitInstitution(Institution $institution);
}
?>
```

**3a. Person.php**:
```php
<?php
include_once 'MailRecipient.php';

class Person implements MailRecipient {
    private $name;

    public function __construct($name) {
        $this->name = $name;
    }

    public function getName() {
        return $this->name;
    }

    public function accept(MailVisitor $visitor) {
        $visitor->visitPerson($this);
    }
}
?>
```

**3b. Business.php**:
```php
<?php
include_once 'MailRecipient.php';

class Business implements MailRecipient {
    private $businessName;

    public function __construct($businessName) {
        $this->businessName = $businessName;
    }

    public function getBusinessName() {
        return $this->businessName;
    }

    public function accept(MailVisitor $visitor) {
        $visitor->visitBusiness($this);
    }
}
?>
```

**3c. Institution.php**:
```php
<?php
include_once 'MailRecipient.php';

class Institution implements MailRecipient {
    private $institutionName;

    public function __construct($institutionName) {
        $this->institutionName = $institutionName;
    }

    public function getInstitutionName() {
        return $this->institutionName;
    }

    public function accept(MailVisitor $visitor) {
        $visitor->visitInstitution($this);
    }
}
?>
```

**4. LabelPrinterVisitor.php**:
```php
<?php
include_once 'MailVisitor.php';

class LabelPrinterVisitor implements MailVisitor {
    public function visitPerson(Person $person) {
        echo "Label for Person: " . $person->getName() . "<br>";
    }

    public function visitBusiness(Business $business) {
        echo "Label for Business: " . $business->getBusinessName() . "<br>";
    }

    public function visitInstitution(Institution $institution) {
        echo "Label for Institution: " . $institution->getInstitutionName() . "<br>";
    }
}
?>
```

**5. index.php**:
```php
<?php
include_once 'Person.php';
include_once 'Business.php';
include_once 'Institution.php';
include_once 'LabelPrinterVisitor.php';

$john = new Person('John Doe');
$techCorp = new Business('TechCorp Ltd.');
$uni = new Institution('University of Knowledge');

$labelPrinter = new LabelPrinterVisitor();

$john->accept($labelPrinter);
$techCorp->accept($labelPrinter);
$uni->accept($labelPrinter);
?>
```

**What you should see in the browser when accessing `index.php`**:

```
Label for Person: John Doe
Label for Business: TechCorp Ltd.
Label for Institution: University of Knowledge
```

This design provides flexibility. For instance, if you later want to add a new operation to calculate postage, you can introduce another visitor class like `PostageCalculatorVisitor` without altering the existing mail recipient classes.
