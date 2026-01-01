//go:build debug

package main

import (
	"fmt"
)

func Debug(message string, args ...any) {
	fmt.Printf("[RS] "+message+"\n", args...)
}
