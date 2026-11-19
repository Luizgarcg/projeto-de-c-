# Sistema Ferralog - Controle Logístico e Inventário em C

Projeto desenvolvido em linguagem **C** no contexto acadêmico de lógica e programação, simulando um sistema de inventário, controle logístico, produção, auditoria de qualidade e backup de ferramentas.

---

## Funcionalidades do Menu

* **`[1]` Cadastrar nova ferramenta:** Coleta nome, QR Code, valor de compra e status de garantia (com alerta de alto risco para itens acima de `R$ 1.000,00` sem garantia).
* **`[2]` Consultar ferramenta por setor:** Módulo em desenvolvimento.
* **`[3]` Verificar status da garantia:** Módulo em desenvolvimento.
* **`[4]` Sair do sistema:** Encerra o loop principal do programa.
* **`[5]` Cadastro em lote:** Permite registrar várias ferramentas em sequência utilizando laço `for`.
* **`[6]` Painel de produção (Matriz 3x3):** Exibe uma tabela de produção com 3 máquinas e 3 turnos (`Manhã`, `Tarde` e `Noite`), calculando subtotais por máquina e o total geral da fábrica.
* **`[7]` Inspetor de Qualidade (Martelo M1):** Utiliza `struct Ferramenta` e a função `auditar_peso` para verificar se o peso aferido (em gramas) está dentro da faixa aceitável (`490.0g` a `510.0g`).
* **`[8]` Backup da Ferramenta (Arquivo `.txt`):** Salva código, nome (sem espaços) e preço de uma ferramenta no arquivo `backup_ferramenta.txt` usando `FILE` e `fprintf`[cite: 2, 3].

---

## Estrutura do Código

* **`struct Ferramenta`:** Agrupa os dados das ferramentas (identificação, código, nome, peso, preço e status de aprovação)[cite: 2, 3].
* **`auditar_peso()`:** Recebe uma cópia da `struct Ferramenta`, avalia a faixa de peso e retorna a estrutura atualizada.
* **`painel_producao()`:** Percorre a matriz `3x3` com laços aninhados para consolidar a produção.
* **`exibir_abertura()` e `exibir_menu()`:** Controlam a tela inicial com barra de progresso e a leitura da opção escolhida pelo usuário.
* **`main()`:** Gerencia o fluxo principal com `do-while` e `switch`.

---

## Como Compilar e Executar (Windows)

O código utiliza bibliotecas específicas do Windows (`<windows.h>`), como `Sleep()` e `system("cls")`.

1. Salve o código em um arquivo, por exemplo `ferralog.c`.
2. Compile usando o `gcc` no terminal:

```bash
gcc ferralog.c -o ferralog.exe
