#include <stdlib.h>

int		main()
{
	char *str = NULL;
	*str = 3;
}

// by Bdevessi about LLDB
// gcc -g
// garder le dossier a.out.dSYM
// lldb a.out
// unr fois dans une sorte de mini shell
// cmd pour debug
// ex : Run, fr v (Frame variable, pour afficher toutes les var et leur val),
// 		p (pour eval une valeur, ex :1 + 2).
// Doc a lire 