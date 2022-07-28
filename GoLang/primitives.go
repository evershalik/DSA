/*
premeitve datatypes:
Boolean type
Numeric Type : integer, fioat, complex no.
Text type : strings
*/

package main

import "fmt"

func main() {
	fmt.Println("Hello World")

	// Boolean Datatype

	var b bool = false
	fmt.Printf("%T,%v\n", b, b)

	// alternative
	n1 := 1 == 1 //true
	n2 := 1 == 2 // flase
	fmt.Println(n1, n2)

	//by default false
	var n3 bool // false
	fmt.Println(n3)

	// integer types
	var i int = 12
	var i1 int8 = 12
	var i2 int16 = 12
	var i3 int32 = 12
	var i4 int64 = 12
	// NOTE : we can't do arithematic operation on variables with different bit datatype i.e int8 + int16 will give error so add these we have to type convert first and then do operations.
	fmt.Println(i, i1, i2, i3, i4)
	// fmt.Println(i+i1) // error
	fmt.Println(i + int(i1))

	//unsigned integers
	var u uint8 = 22
	fmt.Println(u)

	// Bitwise operators --> work on binary format
	var a1 int = 8
	var a2 int = 3

	fmt.Println(a1 & a2)  //and
	fmt.Println(a1 | a2)  //or
	fmt.Println(a1 ^ a2)  //xor
	fmt.Println(a1 &^ a2) // xnor
	fmt.Println(a1 << 3)  // a1*2^n where n is no of bits you want to shift
	fmt.Println(a1 >> 3)  // a1/2^n where n is no of bits you want to shift

}
