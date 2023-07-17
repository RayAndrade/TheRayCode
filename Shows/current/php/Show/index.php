<?php
namespace TheRayCode\Prototype;

include("Car.php);


\$engine1 = new Engine();
\$engine1->type = \"V8\";

\$car1 = new Car(\$engine1);
\$car2 = clone \$car1;

\$car2->engine->type = \"V6\";

echo (\$car1->engine->type)"