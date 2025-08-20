# Gerenciador de Agenda de Eventos em C

Exercício da disciplina **Algoritmos 2** (curso de **Sistemas de Informação**, UFMS CPTL) para gerenciar uma agenda de eventos. O programa permite cadastrar, consultar e organizar compromissos, com controle de conflitos de horários.

## Funcionalidades

- **Cadastro de eventos**  
  Permite incluir descrição, local, data de início e fim, e horário de início e fim.  

- **Detecção de conflitos**  
  Se um novo evento sobrepuser eventos existentes, o programa lista os conflitos e oferece opções:
  - Manter o evento mesmo assim  
  - Alterar o novo evento  
  - Alterar o evento antigo  
  - Não cadastrar o novo evento  
  - Remover o evento antigo  

- **Consulta de eventos em dia e horário específicos**  
  Para cada evento em andamento, mostra:
  - Descrição  
  - Horário de início  
  - Tempo decorrido desde o início  
  - Tempo restante até o término  

- **Listagem de eventos de um dia específico**  
  Apresenta todos os eventos em ordem cronológica, incluindo:
  - Descrição  
  - Horário de início e fim  
  - Duração total  
  - Indicação de sobreposição com outros eventos  

## Estrutura do Código

- Utiliza **structs** para representar eventos  
- Manipula datas e horários em formato estruturado  
- Permite gerenciar até **500 eventos** simultaneamente  

## Como Usar

1. Compile o programa:  
```bash
gcc -o agenda agenda.c
```
2. Execute o programa:
```bash
./agenda
```
3. Siga as instruções do menu para cadastrar, consultar ou listar eventos.

## Observações

- Este programa é uma versão básica de gerenciador de agenda, ideal para fins acadêmicos ou como base para projetos mais avançados.  
- Desenvolvido em **C** como exercício prático de lógica, estruturas de dados e manipulação de datas e horários.
