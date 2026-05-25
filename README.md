# 💻 Atividade em C++ / Linguagem C

## 📌 Descrição

Este projeto foi desenvolvido como atividade acadêmica com o objetivo de praticar conceitos básicos de programação, utilizando `struct`, variáveis, strings, atribuição de dados e estrutura de repetição `do while`.

O programa cria um registro contendo informações como nome, endereço, nota e faltas. Em seguida, exibe esses dados no console e executa uma contagem utilizando uma estrutura de repetição.

---

## ⚙️ Funcionalidades

✔ Criação de uma estrutura chamada `registro`;  
✔ Armazenamento do nome da aluna;  
✔ Armazenamento do endereço;  
✔ Registro da nota;  
✔ Registro da quantidade de faltas;  
✔ Exibição das informações no console;  
✔ Utilização da estrutura de repetição `do while`;  
✔ Contagem automática de 0 até 9.  

---

## 🛠️ Tecnologias Utilizadas

➤ Linguagem C / C++  
➤ Biblioteca `stdlib.h`  
➤ Biblioteca `stdio.h`  
➤ Biblioteca `locale.h`  
➤ Biblioteca `string.h`  

---

## 🧩 Estrutura do Código

O código é composto por:

✦ Inclusão de bibliotecas;  
✦ Criação da estrutura `registro`;  
✦ Declaração da função principal `main`;  
✦ Uso da função `setlocale`;  
✦ Atribuição de valores com `strcpy`;  
✦ Impressão de dados com `printf`;  
✦ Estrutura de repetição `do while`;  
✦ Comando `system("pause")` para pausar o programa no Windows.  

---

## 📂 Estrutura `registro`

```c
struct registro {
    char nome[100];
    char endereco[100];
    int nota;
    int faltas;
};
