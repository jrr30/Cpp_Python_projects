//============================================================================
// Name        : Translate_Morse_Main.cpp
// Author      : Jesus Rodriguez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include <stdio.h>
#include <stdlib.h>
#include "TextToMorse.h"

int main(void) {
   TexttoMorse MiPrimerPrueba;
   MiPrimerPrueba.Catch();
   MiPrimerPrueba.Translate();
   MiPrimerPrueba.Print();
	return EXIT_SUCCESS;
}