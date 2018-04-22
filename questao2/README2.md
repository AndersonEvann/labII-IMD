# labII-IMD
# turma: LP1
# professor: Silvio Costa Sampaio

# Aluno: Anderson Evangelista da Silva
# Matricula: 20160115963

#Uso do GDB no arquivo testeGDB.cpp

#compilação: g++ -g -Wall -pedantic -std=c++11 -o teste testeGDB.cpp
#execução: gdb teste

#Comandos que utilizei apos a execução:
#b 9
#b 20
#b 27
#b 41
#todos os b numero acima servem para criar um ponto de parada no fim de cada função inclusive a main.

#run
#para rodar o programa ate o primeiro breakpoint.

#bt f
#para ver a cada breakpoint o valor atual das variaveis na ultima linha de cada função inclusive a main.

#c
#para o programar continuar apos observar e anotar o valor de cada variavel em cada breakpoint.

#q
#para finalizar o gdb.
