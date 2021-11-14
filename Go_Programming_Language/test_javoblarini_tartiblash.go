// Sana: 11 12 2021 / m d y
// Dasturchi: Jasurbek Shamsitdinov
// Maqsad: belgilangan test javoblarini tartiblab chiqarish

package main

import (

	"fmt"
	"strconv"
)

const str = "1a2a3b4c5a6c2  4b25c26a2  7a28b2  9c30d14d15a16b17a18a19b20a21b7d8a9c10d11b12b13c23a22a"

func main () {

	var (

		index uint8 = 0
		answers string
	)

	for _, byts := range str {

		if string(byts) == " "  {

			continue
		}

		answers += string(byts)
	}

	var answersTable = make(map[uint8]string, 30)

	for index < uint8(len(answers)) {

		var order string

		if 47 < answers[index] && answers[index] < 58 {

			order = string(answers[index])

			if 47 < answers[index + 1] && answers[index + 1] < 58 {

				order += string(answers[index + 1])
				
				index++

				if answers[index + 1] > 58 {

					index++

					orderInt, _ := strconv.Atoi(order)

					answersTable[uint8(orderInt)] = string(answers[index])
					
				}

			} else {

				index++

				orderInt, _ := strconv.Atoi(order)

				answersTable[uint8(orderInt)] = string(answers[index])
			}
		} 

		index++
	}

	fmt.Println(answersTable)
}
