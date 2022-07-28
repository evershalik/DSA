package main

import "fmt"

// iota :-> an increment counter
const (
	b = iota // 0
	c = iota //1
	d = iota //2
)

const (
	e = iota // 0 again
)

func main() {
	fmt.Println("hello world")
	// costants
	const a int = 12
	fmt.Println(a)
	// a = 13 // error

	// iota
	fmt.Println(b, c, d, e)

}



