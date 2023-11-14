package main

import (
	"bufio"
	"fmt"
	"log"
	"os"
	"strconv"
)

func main() {
	file, err := os.Open("./input.txt")
	if err != nil {
		log.Fatal(err)
	}
	defer file.Close()

	sum := 0
	scanner := bufio.NewScanner(file)
	for scanner.Scan() {
		num, err := strconv.Atoi(scanner.Text()) // Read input file line by line and convert to int
		if err != nil {
			log.Fatal(err)
		}
		sum += num * num // Add the square of number to the final sum
	}

	fmt.Printf("The sum is %v", sum)

}
