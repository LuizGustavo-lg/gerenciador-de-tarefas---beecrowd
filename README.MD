# Lista Ligada 
## beecrowd 5458


### Descrição
Você foi contratado para desenvolver um sistema simples de gerenciamento de tarefas utilizando uma lista encadeada. O sistema deve permitir que o usuário insira, remova e liste tarefas.

Cada tarefa possui apenas um identificador único (id) e uma descrição (descricao). As operações devem ser realizadas conforme os comandos recebidos, garantindo que as tarefas sejam exibidas na ordem em que foram adicionadas.



### Entrada
A entrada consiste em:

1. Um número inteiro N (1≤ N ≤105 ) representando o número de comandos.
2. N linhas seguintes, cada uma contendo um comando. Os comandos podem ser:
**ADD id descricao**: Adiciona uma nova tarefa com o identificador id e a descrição descricao. O identificador é um número inteiro positivo (1 ≤ id ≤ 109 ), e a descrição é uma string sem espaços (1 ≤ tamanho da descricao ≤ 50). Caso uma tarefa com o mesmo id já exista, ignore o comando.
**REMOVE id**: Remove a tarefa com o identificador id. Se não houver uma tarefa com esse identificador, ignore o comando.
**LIST**: Exibe todas as tarefas na ordem em que foram adicionadas. Se não houver tarefas, exiba a mensagem "NO TASKS".



### Saída
Para cada comando LIST, exiba uma lista de tarefas na ordem de inserção, onde cada linha contém:

```id descricao```

Se não houver tarefas, exiba a mensagem **"NO TASKS"**.