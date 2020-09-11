<?php

class Foo {
    static public $Name = "Alex Roxon";
    static public function helloWorld() {
        print "Hello world from " . self::$Name . "<br>";
    }
	public function nonStatic() {
        return self::$Name . "<br>";
    }
}


class Bar extends Foo
{
    public function notStatic() {
        print "Hi " . self::$Name . "\n";
    }
	static public function aStatic() {
        print "Hello all" . "<br>";
    }
}
print Foo::$Name . "<br>";
Foo::helloWorld() . "<br>";


$foo = new Foo();
print $foo->nonStatic() . "<br>";

$bar = new Bar();
print $bar->notStatic() . "<br>";

print $bar::helloWorld() . "<br>";
?>