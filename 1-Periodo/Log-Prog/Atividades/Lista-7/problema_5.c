#include <stdio.h>

int duracao (int hi, int mi, int hf, int mf){
	int tempo_f, tempo_i, dur;
	
	tempo_f = (hf * 60) + mf;
	tempo_i = (hi * 60) + mi;
	dur = tempo_f - tempo_i;
	
	if (dur <= 0){
		dur += 24 * 60;
	}
	return dur;
}

int main() {
	int hora_i, minuto_i, hora_f, minuto_f, duracao_t;
	
	printf("Digite a Hora e Minuto iniciais: ");
	scanf("%d %d", &hora_i, &minuto_i);
	printf("Digite a Hora e Minuto finais: ");
	scanf("%d %d", &hora_f, &minuto_f);
	
	duracao_t = duracao(hora_i, minuto_i, hora_f, minuto_f);
	
	printf("O jogo durou %d horas e %d minutos\n", duracao_t / 60, duracao_t % 60);
}
