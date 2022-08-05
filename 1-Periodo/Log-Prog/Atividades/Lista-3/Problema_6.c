#include <stdio.h>

int main() {
	int h_inicial, h_final, m_inicial, m_final, total;
	
	scanf("%d %d %d %d", &h_inicial, &m_inicial, &h_final, &m_final);
	
	total = ((h_final * 60) + m_final) - ((h_inicial * 60) + m_inicial);
	if (total <= 0)
		total += 24 * 60;
		
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", total / 60, total % 60);
}
