# Competitive Programming

Repositório de prática de Gabriel Violante (`SUPER_ZOIAO`).

- `Archive/<Tema>/`: acervo organizado por assunto. Inclui soluções e tentativas históricas; a presença de um arquivo não comprova aceite.
- `TREM/Week-XX/`: exercícios agrupados por semana de treinamento.
- `Workspace/solve.cpp`: arquivo de trabalho, com `Makefile` e entradas/saídas em `debug/`.
- `Workspace/In_Progress/`: tentativas explicitamente identificadas como incompletas.
- `template.cpp` e `template.py`: modelos de código.
- `.cph/`: metadados e exemplos do Competitive Programming Helper. Os cinco arquivos reorganizados têm seus metadados na pasta `.cph` junto à nova localização do código.
- [CONTEXTO_IA.md](CONTEXTO_IA.md): perfil técnico, evidências e orientações para uma IA auxiliar nos estudos.

## Organização dos novos arquivos — 02/10/2026

A classificação abaixo considera a implementação local, não tags oficiais nem veredictos do juiz.

| Arquivo | Localização | Critério |
| --- | --- | --- |
| `A_SauSaGe_Bank.cpp` | `Archive/Math/` | Fórmula com potência de dois |
| `B_Min_Matrices.cpp` | `Archive/Constructive_Algorithms/` | Construção explícita de uma matriz |
| `B_KiaKio_and_Squared_Numbers.cpp` | `Archive/Math/` | Transformação por soma dos quadrados dos dígitos e contagem de pares |
| `C_1_Marenol_easy_version.cpp` | `Archive/Strings/` | Invariantes de contagem em strings binárias e paridade das posições |
| `B_Monocarp_and_Projects.cpp` | `Workspace/In_Progress/` | Implementação parcial, sem saída quando as contagens coincidem |

Para novos problemas, mantenha rascunhos em `Workspace/In_Progress/` e arquive pelo assunto predominante da solução. Preserve os nomes e os exemplos do CPH ao mover arquivos. Mantenha o agrupamento semanal de `TREM/`.

`reorganize.py` é um utilitário legado: consulta a API do Codeforces e classifica por prioridade de tags. Ele move arquivos diretamente, não distingue tentativas incompletas e não atualiza os metadados CPH; revise antes de usá-lo. As categorias históricas não foram reclassificadas nesta organização.

## Execução local

Para compilar `Workspace/solve.cpp` em C++17 e executar com `Workspace/debug/input.txt`:

```sh
make -C Workspace
```

A saída será gravada em `Workspace/debug/output.txt`.
