package main

import "fmt"

func main() {
	fmt.Println("Hello, World!")

	// Println = Função que imprime uma mensagem no console
	// https://pkg.go.dev/golang.org/x/tools/go/analysis/passes/printf

	var money = 7

	fmt.Println(money)

	numerodebits, erros := fmt.Println("Uma entrada de texto | ", "Outra entrada de texto |", 11111)
	fmt.Println(numerodebits, erros)

	_, erros = fmt.Println("Uma entrada de texto | ", "Outra entrada de texto |", 11111)
	fmt.Println(erros)

}
