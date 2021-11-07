// Sana: 11 07 2021
// Dasturchi: Jasurbek Shamsitdinov
// Maqsad: e'on qilingan ikki o'zgaruvhilarning qiymatlarini almashtirish (go syntax)


package main

import (

	"fmt"
)

func main () {

	var a, b = 5, 7

	fmt.Println(a, ", ", b)

	a, b = b, a

	fmt.Println(a, ", ", b)
}