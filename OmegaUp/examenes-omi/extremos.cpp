
void buscaExtremos(int n) {
	// FIXME
	int mayor = 1, menor = 1;
	int start = 0;
	if (n & 1){
		mayor = menor = 1;
		start = 2;
	} else {
		if (esMenor(1,2)){
			menor = 1;
			mayor = 2;
		} else {
			menor = 2;
			mayor = 1;
		}
		start = 3;
	}
	for (int i = start; i <= n; i+=2){
		if (esMenor(i, i+1)){
			if (esMenor(i, menor)){
				menor = i;
			} 
			if (esMenor(mayor, i)){
				mayor = i;
			}
		} else {
			if (esMenor(i+1, menor)){
				menor = i+1;
			} 
			if (esMenor(mayor, i+1)){
				mayor = i+1;
			}
		}
	}

	respuesta(menor, mayor);

}