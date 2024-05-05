# Sistema de Verificação de Senha

Este é um programa simples em C que verifica a senha inserida pelo usuário e permite acesso ao sistema se a senha estiver correta.

## Funcionamento

O programa solicita ao usuário que insira uma senha. Se a senha inserida for igual a "2312", o sistema é liberado. O usuário tem três tentativas para inserir a senha correta. Se todas as três tentativas forem usadas sem sucesso, o sistema é bloqueado.

## Como Executar

1. Certifique-se de ter um compilador C instalado em seu sistema.
2. Abra um terminal na pasta onde está o arquivo fonte (`verificar_senha.c`).
3. Compile o programa usando o compilador C. Por exemplo, usando o GCC:
   ```bash
   gcc -o verificar_senha verificar_senha.c
   ```
4. Execute o programa:
   ```bash
   ./verificar_senha
   ```

## Exemplo de Uso

```
Digite sua senha: 1234
Digite sua senha: 5678
Digite sua senha: 2312
Sistema Liberado!
```

## Contribuição

Contribuições são bem-vindas! Sinta-se à vontade para abrir uma issue ou enviar um pull request.

## Licença

Este projeto está licenciado sob a [Licença MIT](LICENSE).
