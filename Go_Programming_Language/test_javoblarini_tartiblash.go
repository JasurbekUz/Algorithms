// Sana: 11 12 2021 / m d y
// Dasturchi: Jasurbek Shamsitdinov
// Maqsad: belgilangan test javoblarini tartiblab chiqarish

package main

import (

	"fmt"
	"strconv"
)

const answers = "1a2a3b4c5a6c7d8a9c10d11b12b13c14d15a16b17a18a19b20a21b22a23a24b25c26a27a28b29c30d"

func main () {

	var (

		index uint8 = 0
	)

	var answersTable = make(map[uint8]string, 30)

	for index < uint8(len(answers)) {

		var order string

		if 47 < answers[index] && answers[index] < 58 {

			order = string(answers[index])

			if 47 < answers[index + 1] && answers[index + 1] < 58 {

				order += string(answers[index + 1])
				
				index++

				if answers[index + 1] > 58 {

					orderInt, _ := strconv.Atoi(order)

					answersTable[uint8(orderInt)] = string(answers[index+1])

					index++
				}

			} else {

				orderInt, _ := strconv.Atoi(order)

				answersTable[uint8(orderInt)] = string(answers[index+1])

				index++

			}
		} 

		index++
	}

	fmt.Println(answersTable)

}