# 42 São Paulo - Libft

-----

Olá\! Este é o repositório da minha primeira biblioteca em C, desenvolvida como parte do currículo da **42 São Paulo**. O objetivo deste projeto é recriar, do zero, várias funções da biblioteca padrão do C (`<string.h>`, `<stdlib.h>`, etc.), além de adicionar algumas funções auxiliares úteis.

## O que é a Libft?

A **Libft** é um projeto fundamental na 42, pois serve como a base de todos os projetos futuros. Ao recriar funções essenciais, a gente aprende a fundo como a linguagem C funciona, manipulando alocação de memória, ponteiros e *strings*.

## Por que este projeto é importante?

  * **Familiaridade com C:** Demonstra um entendimento sólido da linguagem, incluindo a gestão manual de memória, o uso de ponteiros e a manipulação de dados em baixo nível.
  * **Atenção aos detalhes:** Cada função foi implementada seguindo rigorosos requisitos de teste, garantindo que o comportamento seja idêntico ao das funções originais.
  * **Habilidades de Engenharia de Software:** O projeto exige uma organização de código clara, modularidade e a criação de uma biblioteca estática (`.a`), um conceito-chave na engenharia de *software*.

## Funções Implementadas

Aqui estão algumas das funções que eu recriei, divididas por categoria:

### Funções da `libc`

  * `ft_strlen`: Calcula o comprimento de uma *string*.
  * `ft_bzero`: Zera uma área de memória.
  * `ft_memset`: Preenche uma área de memória com um valor constante.
  * `ft_memcpy`: Copia uma área de memória para outra.
  * `ft_strchr`: Procura a primeira ocorrência de um caractere em uma *string*.
  * `ft_strdup`: Duplica uma *string* alocando memória.

### Funções Adicionais

  * `ft_substr`: Extrai uma sub-*string* de uma *string*.
  * `ft_strjoin`: Concatena duas *strings* com alocação de memória.
  * `ft_split`: Divide uma *string* em um *array* de *strings* usando um delimitador.
  * `ft_itoa`: Converte um número inteiro para uma representação em *string*.
  * `ft_putnbr_fd`: Escreve um número inteiro em um *file descriptor*.

Para uma lista completa, veja o arquivo `libft.h` na pasta raiz.

## Como Usar a Libft

1.  **Clone o repositório:**
    ```bash
    git clone https://github.com/seu-usuario/libft.git
    ```
2.  **Compile a biblioteca:**
    ```bash
    cd libft
    make
    ```
    Isso vai gerar o arquivo `libft.a`.
3.  **Inclua a biblioteca em seu projeto:**
    Ao compilar seu código, inclua a flag `-L.` para o diretório da biblioteca e a flag `-lft` para o nome da biblioteca. Exemplo:
    ```bash
    gcc main.c -L. -lft -o my_program
    ```

-----

Sinta-se à vontade para explorar o código. Estou aberto a **novas oportunidades** e a conexões que me ajudem a crescer profissionalmente.

**Conecte-se comigo:**

  * [LinkedIn](https://www.google.com/search?q=https://www.linkedin.com/in/jcopari)
  * [Email](mailto:jcopari@gmail.com)

Agradeço a sua visita\!

