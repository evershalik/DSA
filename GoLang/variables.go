package main

import (
	"fmt"
	"strconv"
)

//used fro type converting into string

// --> declaration of variables outside the main are called as package level variable declaration.
var x int = 1
var name string = "shankar"
var sname string = "malik"

//alternative
var (
	x1     int    = 12
	name1  string = "apple"
	sname1 string = ".com"
)

func main() {

	// --> variables declered inside the main functiona are called as function level variable declaration

	//Method 1:
	var a int // declaration --> NOTE : if we declare only and don't initalize it then it give error.
	a = 10    //initialization
	fmt.Println(a)

	//Method 2:
	var b int = 20
	fmt.Println(b) //declaration + initialization in one step

	// Method 3:
	c := 30 // no ned to give datatype
	fmt.Println(c)

	// NOTE :at end of println() func there is a by default end of line operator.

	//limitation of Println
	d := 40.01     //here i have provided d with float  value but when i try to print it
	fmt.Println(d) // it give int value
	// so to reduce this limitaion we use %T to give type and %v for value in Printf func.

	// NOTE : after end of fmt.Printf() func there is no by defalut end of line so we have to use \n .

	fmt.Printf("%T,%v \n", d, d) // it give exact value with datatype
	fmt.Printf("%v \n", d)       // give exact value wihtout datatype

	//printing package level variables
	fmt.Println(x, name, sname)
	fmt.Println(x1, name1, sname1)

	//Typeconversion
	var e int = 4
	var f float64
	f = float64(e)
	fmt.Printf("%T,%v \n", e, e)
	fmt.Printf("%T,%v \n", f, f)

	var s string
	s = strconv.Itoa(e)
	fmt.Printf("%T,%v \n", s, s)

	// floating point
	n := 12.23 // by default float 64
	// var n1 float32 = 12e45 // error beyond limit
	var n2 float32 = 12
	var n3 float32 = 12e34

	n = 423e45
	fmt.Println(n, n2, n3)

	// complex numbers

	var c1 complex128 = 1 + 2i
	c2 := 2 + 3i // by defalut complex128
	var c3 complex64 = complex(5, 9)
	fmt.Println(c1 + c2)
	fmt.Println(c1 - c2)
	fmt.Println(c1 * c2)
	fmt.Println(c1 / c2)
	fmt.Println(c3)

	//to print real part only
	fmt.Printf("%v \n", real(c1)) // of float type
	// to print inagionary part
	fmt.Printf("%v \n", imag(c1)) // of float type

	// string
	s1 := "Hello World"
	// s1[1] = "w"        // error bcz string is immutable in GO
	fmt.Println(s1[1]) // give ascii integer value
	fmt.Println(string(s1[1]))

	// rune i.e. char
	var r1 rune = 'c'
	fmt.Println(r1) // ascii value

}
