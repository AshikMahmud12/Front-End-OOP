<html>
<head>
	<title><?php echo "PHP Object Oriented Programming";?></title>
</head>
<body>
<?php


class Animal implements Singable{
	
	protected $name;
	protected $favorite_food;
	protected $sound;
	protected $id;
	

	
	public static $number_of_animals = 0;
	
	const PI = "3.14159";
		
	function getName(){
	
		return $this->name;
	
	}
		
	function __construct(){		
		
		$this->id = rand(100, 1000000); // Generate a random id between 1 and 1000000
		
		echo $this->id . " has been assigned<br />";
		
		Animal::$number_of_animals++;     		// You access static attributes with Class::$static_att
	
	}
	
	
	public function __destruct(){
	
		echo $this->name . " is being destroyed :(";
	
	}
		// use magic setters and getters which are called when an attribute is set, or if its value is asked for
	function __get($name){
		
		echo "Asked for " . $name . "<br />";
	
		return $this->$name;
		
	}
	
		
	function __set($name, $value){
	
		switch($name){
		
			case "name":
				$this->name = $value;
				break;
				
			case "favorite_food":
				$this->favorite_food = $value;
				break;
				
			case "sound":
				$this->sound = $value;
				break;
				
			default : 
				echo $name . "Not Found";
		
		}
		
		echo "Set " . $name . " to " . $value . "<br />";
	
	}
	
	
	// We will override this method in the subclass
	function run(){
		
		
		echo $this->name . " runs<br />";
		
	}
	
	
	// To keep a method from being overridden use final. You can use final on a class to keep classes from being overridden as well
	
	final function what_is_good(){
		
		echo "Running is Good<br />";
		
	}
	
	// 4. You can use __toString to define what prints when the object is called to print
	
	function __toString(){
		
		return $this->name . " says " . $this->sound .
		" give me some ". $this->favorite_food . " my id is " .
		$this->id . " total animals = " . Animal::$number_of_animals .
		"<br /><br />";
		
	}
	
	// 5. You must define any function defined in an interface
	
	public function sing(){
		
		echo $this->name . " sings 'Grrrr grr grrr grrrrrrrrr'<br />";
		
	}
	
	// static methods can be called without the need for instantiation
	
	static function add_these($num1, $num2){
		
		return ($num1 + $num2) . "<br />";
		
	}
	
}


// PHP doesn't allow muliple inheritance. You need to use interfaces to get similar results
// Interfaces allow you to define functions that must be implemented

interface Singable{
	
	public function sing();
	
}


// Inheritance occurs when you create a new class by extending another
// You will inherit all of the Attributes and Methods defined in the first
// You don't have to do anything in the class and it will still work

class Dog extends Animal implements Singable{
	
	// You can override functions defined in the superclass
	function run(){		
		echo $this->name . " runs like crazy<br />";		
	}
	
	// You must define any function defined in an interface
	
	public function sing(){
		
		echo $this->name . " sings 'Bow wow, woooow, woooooooooow'<br />";
		
	}
	
	
}

$animal_one = new Animal();

// These call __set

$animal_one->name = "Spot";
$animal_one->favorite_food = "Meat";
$animal_one->sound = "Ruff";

// The statements $animal_one->att_name call __get
// We call static attributes like this Class::$static_var 

echo $animal_one->name . " says " . $animal_one->sound .
	" give me some ". $animal_one->favorite_food . " my id is " .
	$animal_one->id . " total animals = " . Animal::$number_of_animals .
	"<br /><br />";
	
// If we defined a constant in the class we would get its
// value like this Class::CONTANT 
	
echo "Favorite Number " . Animal::PI . "<br />";
	
$animal_two = new Dog();

$animal_two->name = "Grover";
$animal_two->favorite_food = "Mushrooms";
$animal_two->sound = "Grrrrrrr";

// Even though we are referring to the Dog $number_of_animals it
// still increases even with subclasses

echo $animal_two->name . " says " . $animal_two->sound .
	" give me some ". $animal_two->favorite_food . " my id is " .
	$animal_two->id . " total animals = " . Dog::$number_of_animals .
	"<br /><br />";
	
// 2. Because of method overriding we get different results	
$animal_one->run();
$animal_two->run();

// 3. final methods can't be overriden
$animal_one->what_is_good();

// 4. Example using __toString()

echo $animal_two;

// 5. You call a method defined in an interface like all others

$animal_two->sing();

// You can also define functions that will except classes
// extending a secific class or interface

function make_them_sing(Singable $singing_animal){
	
	$singing_animal->sing();
	
}

// Polymorphism states that different classes can have different
// behaviors for the same function. The compiler is smart enough to
// just figure out which function to execute

make_them_sing($animal_one);
make_them_sing($animal_two);

echo "<br />";

function sing_animal(Animal $singing_animal){
	
	$singing_animal->sing();
	
}

sing_animal($animal_one);
sing_animal($animal_two);

// Calling a static method

echo "3+5= " . Animal::add_these(3,5);

// You can check the class type with instanceof

$is_it_an_animal = ($animal_two instanceof Animal) ? "True" : "False";

echo "It is " . $is_it_an_animal . ' that $animal_one is an Animal<br />';

// You can clone objects and even define just what you want available 
// to clone in __clone() if it is in the class definition

$animal_clone = clone $animal_one;

// You can define abstract classes and methods
// An abstract class can't be instantiated, but instead forces classes
// that implement it to override every abstract method in it

/*
	abstract class RandomClass{
		
		abstract function RandomFunction($attrib1);
		
	}
 */

 // 11. __call() if defined in a class can provide method overloading
 // but since PHP isn't strongly typed I see no reason to use it


?>
</body>
</html>