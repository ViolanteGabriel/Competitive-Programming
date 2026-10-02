# Contexto para uma IA — Gabriel Violante

Atualizado em 02/10/2026 a partir dos arquivos locais. Este documento usa inventário do acervo e leitura de implementações representativas, incluindo os cinco novos arquivos; não é uma auditoria de todas as soluções. Não houve consulta a submissões, rating ou veredictos online.

## Identificação e ambiente

- Os cabeçalhos identificam o autor como **Gabriel Violante**, handle Codeforces **SUPER_ZOIAO**, e mencionam a **Universidade Federal de Minas Gerais (UFMG)**. Esses dados são autodeclarados no código.
- C++ é a linguagem predominante. Há exercícios em C e um template Python; o template sozinho não demonstra prática competitiva em Python.
- O ambiente local inclui configuração do VS Code, exemplos do CPH e um workspace com compilação C++17, flags de aviso e `-DLOCAL`.
- É recorrente o uso de `bits/stdc++.h`, STL, `solve()`, múltiplos casos de teste, macros (`forn`, `all`, `endl`) e, em parte dos arquivos, `#define int long long`. O template inclui I/O rápido e depuração condicional.
- Os comentários alternam português e inglês. Português é um ponto de partida adequado para explicações, conforme esta solicitação; outras preferências didáticas ainda precisam ser confirmadas.

## Dimensão do acervo

Após esta organização: **178 arquivos C/C++ em `Archive/`**, **16 em `TREM/`** e **1 novo rascunho em `Workspace/In_Progress/`**. Não entram nessa contagem templates nem `Workspace/solve.cpp`. São contagens de arquivos, não de problemas únicos ou aceitos: existem variantes e tentativas incompletas.

| Pasta de Archive | Arquivos |
| --- | ---: |
| Math | 48 |
| Miscellaneous | 34 |
| Greedy | 20 |
| Dynamic_Programming | 16 |
| Strings | 15 |
| Implementation | 13 |
| Data_Structures | 8 |
| Binary_Search | 6 |
| Constructive_Algorithms | 5 |
| Graphs | 5 |
| Sorting | 5 |
| Bitmasks | 2 |
| Geometry | 1 |
| Two_Pointers | 0 |

As pastas históricas refletem a organização anterior por tags e não necessariamente a técnica implementada. Por exemplo, `Archive/Dynamic_Programming/A_Cut_Ribbon.cpp` enumera possibilidades, `E_Split.cpp` usa uma janela com frequências e `D_Rae_Taylor_and_Trees_easy_version.cpp` calcula mínimos de prefixo e máximos de sufixo. A pasta vazia `Two_Pointers/` não significa ausência dessa técnica no código.

## Perfil técnico observado

A leitura sugere uma base prática em implementação e raciocínio matemático, com exploração de técnicas intermediárias. Não há evidência suficiente para atribuir rating, categoria oficial, velocidade de resolução ou independência em relação a editoriais.

| Evidência local | O que demonstra |
| --- | --- |
| `Archive/Data_Structures/D_Same_Differences.cpp` | Reescrita de `a[j]-a[i]=j-i` para agrupar `a[i]-i`, uso de hash e contagem combinatória de pares |
| `Archive/Greedy/C_2_Skibidus_and_Fanum_Tax_hard_version.cpp` | Combinação de ordenação, escolha gulosa e `lower_bound` para manter viabilidade |
| `Archive/Greedy/D_Skibidus_and_Sigma.cpp` | Ordenação por soma dos blocos e acumulação de prefixos |
| `Archive/Graphs/D_Roads_not_only_in_Berland.cpp` | Lista de adjacência, exploração iterativa com pilha, componentes e identificação de arestas de ciclo |
| `Archive/Graphs/D_Arboris_Contractio.cpp` | Raciocínio com graus e folhas de uma árvore |
| `Archive/Bitmasks/E_Boneca_Ambalabu.cpp` | Contagem por posição de bit para agregar contribuições de XOR |
| `Archive/Dynamic_Programming/E_Split.cpp` | Tentativa de substituir enumeração quadrática por janela com limites de frequência; a implementação tem problema de índice citado abaixo |
| `Archive/Constructive_Algorithms/B_Min_Matrices.cpp` | Construção por etapas, preenchendo posições selecionadas e depois as restantes |
| `Archive/Strings/C_1_Marenol_easy_version.cpp` | Uso de invariantes: quantidade total de uns e quantidade em posições de uma paridade |

Os comentários registram equações, exemplos pequenos, divisão em casos e estimativas de complexidade. Em `D_Same_Differences.cpp`, há uma derivação explícita da transformação algébrica; em `C_2_Skibidus_and_Fanum_Tax_hard_version.cpp`, a busca binária surge da necessidade de evitar examinar todas as opções. Isso sugere que conectar a observação matemática à implementação é uma forma útil de ensinar, sem assumir uma preferência já confirmada.

## Limites da evidência e pontos a consolidar

1. **Conclusão de tentativas.** `Workspace/In_Progress/B_Monocarp_and_Projects.cpp` termina sem resposta quando as contagens de uns coincidem; além disso, seu conteúdo se parece com o rascunho de Marenol, então não se deve inferir a solução de Monocarp pelo nome. Há exemplos antigos incompletos: `Archive/Graphs/B_Two_Buttons.cpp` contém função vazia e um `W` solto, e `Archive/Dynamic_Programming/C_XOR_factorization.cpp` deixa o caso de `k` par vazio. Não contabilizar esses arquivos como domínio de BFS ou de fatoração XOR.
2. **Complexidade e justificativa de limites.** `B_KiaKio_and_Squared_Numbers.cpp` aplica 10.000 transformações por elemento e compara todos os pares. Isso merece uma justificativa da dinâmica/ciclos e do custo conforme as restrições. `Archive/Binary_Search/B_Worms.cpp` expande cada minhoca individualmente; é uma oportunidade para discutir representação compacta por prefixos. São observações do código, não declarações de TLE.
3. **Tipos e precisão.** `template.cpp` declara `const int INF = 1e18` com a macro de inteiros de 64 bits desativada; o valor não cabe em `int`. Há também uso de `pow` em cálculos inteiros. Ao revisar, discutir limites, tipos explícitos e operações inteiras quando cabíveis.
4. **Limites de índices.** Em `Archive/Dynamic_Programming/E_Split.cpp`, o ramo que incrementa `r` lê `a[r]` imediatamente depois, podendo acessar `a[n]`. Usar exemplos pequenos e verificações de limites ao trabalhar janelas.
5. **DP e algoritmos de grafos.** A classificação em pastas não comprova domínio de recorrências, memoização, BFS, DSU ou caminhos mínimos. Confirmar conhecimento com uma implementação concreta e sua explicação antes de pressupor fluência.

Esses pontos são exemplos localizados, não um julgamento de todo o acervo. Os códigos foram preservados nesta organização, sem correções algorítmicas nem validação no juiz.

## Como usar este contexto ao ajudar

- Partir da familiaridade observada com C++/STL e com problemas de arrays, strings, contagens e matemática; ajustar a explicação ao problema atual.
- Separar claramente a ideia, o invariante ou argumento de correção, a complexidade e os detalhes de implementação.
- Aproveitar problemas já presentes como analogias: frequências em `Same Differences`, busca binária em `Fanum Tax`, contribuições por bit em `Boneca Ambalabu`.
- Se a solicitação for por uma dica, oferecer ajuda incremental. Se for por solução completa ou correção, respeitar esse pedido; não impor um modo de estudo.
- Ao tratar os pontos acima, começar pela tentativa existente e por um caso concreto que revele a dificuldade. Evitar reescrever tudo sem necessidade.
- Não inventar rating, histórico de aceite, tempo de estudo, autoria independente ou objetivos de competição. A letra A/B/C/D/E e os termos easy/hard não bastam para medir nível.
- Como propostas de consolidação derivadas deste código, considerar: concluir rascunhos, justificar limites de simulações, compactar contagens com prefixos/frequências, revisar índices e demonstrar recorrências e travessias completas. Isso não constitui uma meta declarada pelo autor.

## Manutenção

Ao incorporar novos problemas, atualizar as contagens e acrescentar evidências concretas de técnicas implementadas. Registrar aceite apenas quando houver confirmação. Não transformar uma solução isolada em afirmação de domínio geral, e não manter como dificuldade atual algo que uma implementação posterior demonstre ter sido superado.
