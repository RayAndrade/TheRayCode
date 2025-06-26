
# 🏖️ VacationBuilder – Builder Design Pattern in JavaScript

This project demonstrates the **Builder Design Pattern** using a vacation planner as described in *Head First Design Patterns*. It helps construct a customizable vacation package step by step, encapsulating the construction logic within a builder while keeping the final product decoupled from the assembly process.

---

## 🗂️ File Structure

```

VacationBuilder/
├── VacationPackage.js
├── VacationBuilder.js
├── FamilyVacationBuilder.js
├── VacationDirector.js
└── index.js

````

---

## 🧩 Class-by-Class Explanation

---

### 📦 `VacationPackage.js`

**Purpose**:  
Represents the final complex object being built — a complete vacation package with hotel, tickets, meals, and activities.

```javascript
// VacationPackage.js
class VacationPackage {
    constructor() {
        this.hotel = null;
        this.tickets = [];
        this.meals = [];
        this.activities = [];
    }

    setHotel(hotel) {
        this.hotel = hotel;
    }

    addTicket(ticket) {
        this.tickets.push(ticket);
    }

    addMeal(meal) {
        this.meals.push(meal);
    }

    addActivity(activity) {
        this.activities.push(activity);
    }

    showDetails() {
        console.log("Vacation Package Details:");
        console.log("Hotel:", this.hotel);
        console.log("Tickets:", this.tickets.join(", "));
        console.log("Meals:", this.meals.join(", "));
        console.log("Activities:", this.activities.join(", "));
    }
}
module.exports = VacationPackage;
````

---

### 🧱 `VacationBuilder.js`

**Purpose**:
An abstract class that defines the steps required to build a `VacationPackage`. All concrete builders implement this interface.

```javascript
// VacationBuilder.js
class VacationBuilder {
    setHotel() {}               // Step 1: set hotel
    addTickets() {}             // Step 2: add theme park tickets
    addMeals() {}               // Step 3: add meals
    addActivities() {}          // Step 4: schedule activities
    getVacationPackage() {}     // Return the final vacation object
}
module.exports = VacationBuilder;
```

---

### 👨‍👩‍👧 `FamilyVacationBuilder.js`

**Purpose**:
A concrete implementation of `VacationBuilder` that configures a family-friendly vacation package.

```javascript
// FamilyVacationBuilder.js
const VacationBuilder = require('./VacationBuilder');
const VacationPackage = require('./VacationPackage');

class FamilyVacationBuilder extends VacationBuilder {
    constructor() {
        super();
        this.package = new VacationPackage(); // Start with empty package
    }

    setHotel() {
        this.package.setHotel("ObjectVille Family Resort");
    }

    addTickets() {
        this.package.addTicket("Theme Park Family Pass");
        this.package.addTicket("Water Park Entry");
    }

    addMeals() {
        this.package.addMeal("Buffet Breakfast");
        this.package.addMeal("Pizza Lunch");
    }

    addActivities() {
        this.package.addActivity("Mini Golf");
        this.package.addActivity("Evening Parade");
    }

    getVacationPackage() {
        return this.package; // Return the complete result
    }
}
module.exports = FamilyVacationBuilder;
```

---

### 🎯 `VacationDirector.js`

**Purpose**:
The **Director** defines the construction process. It uses the builder interface to create a vacation package in a specific sequence.

```javascript
// VacationDirector.js
class VacationDirector {
    construct(builder) {
        builder.setHotel();
        builder.addTickets();
        builder.addMeals();
        builder.addActivities();
    }
}
module.exports = VacationDirector;
```

---

### 🚀 `index.js`

**Purpose**:
Entry point of the application. It creates the builder and director, constructs the vacation package, and displays the result.

```javascript
// index.js
const FamilyVacationBuilder = require('./FamilyVacationBuilder');
const VacationDirector = require('./VacationDirector');

const builder = new FamilyVacationBuilder();       // Create specific builder
const director = new VacationDirector();           // Create director

director.construct(builder);                       // Direct the build steps

const vacation = builder.getVacationPackage();     // Retrieve finished product
vacation.showDetails();                            // Display to console
```

---

## 🧪 Output

```bash
Vacation Package Details:
Hotel: ObjectVille Family Resort
Tickets: Theme Park Family Pass, Water Park Entry
Meals: Buffet Breakfast, Pizza Lunch
Activities: Mini Golf, Evening Parade
```

---

## ✅ How to Run

```bash
node index.js
```

---

## 📚 Reference

* *Head First Design Patterns*, Chapter: Builder Pattern (approx. page 600)
* Pattern: **Builder** – used to construct complex objects step-by-step

---

## 👨‍🏫 Teaching Tips

* Swap in new builders (e.g., `RomanticVacationBuilder`) to reuse `VacationDirector` logic.
* Try randomizing or extending available options to simulate real-world configurators.
* Consider storing the vacation plan to a file or displaying it in a web UI.

