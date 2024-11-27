C = gcc
#CC informa qual complidor vai ser usado (gcc)
CFLAGS = -Wall -Wextra
#ajuda a encontrar erro no codigo

# -wall ativa os avisos padroes/basicos
# -Wextra ativa os asvisos extras

OBJS = main.o selection_sort/selection_sort.o quick_sort/quick_sort.o gerador_vetores/vetores.o
# cria os objetos .o
EXEC = opa              
# meu executado


all: $(EXEC)

#ele 'informa' que para executar precisa do objs


$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

#fazendo a ligacao
#$@ é o nome atual
#$^ lista de pre requisitos do objs

#regra para criar o objs
main.o: main.c selection_sort/selection_sort.h quick_sort/quick_sort.h gerador_vetores/vetores.h
	$(CC) $(CFLAGS) -c $< -o $@  
#$< primeiro pre requisito

selection_sort/selection_sort.o: selection_sort/selection_sort.c selection_sort/selection_sort.h
	$(CC) $(CFLAGS) -c $< -o $@

quick_sort/quick_sort.o: quick_sort/quick_sort.c quick_sort/quick_sort.h
	$(CC) $(CFLAGS) -c $< -o $@

gerador_vetores/vetores.o: gerador_vetores/vetores.c gerador_vetores/vetores.h
	$(CC) $(CFLAGS) -c $< -o $@  

#faz a limpeza
clean:
	rm -f $(OBJS) $(EXEC)

#obs1: esse codigo funciona apenas no linux
# para utilizar no windows é necessario mudanças
# já que não existe comandos no win como
# rm -f

#obs2:  merge_sort/merge_sort.c merge_sort/merge_sort.h
#faz com que não exista necessidade de informar
# o diretorio direto nos arquivos .c
# #include "merge_sort/merge_sort.h"