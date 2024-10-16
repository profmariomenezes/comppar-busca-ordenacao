# Algoritmos de Busca e Ordenação

Nesta atividade vamos implementar as versões paralelas de *um* dos seguintes algoritmos de ordenação: Ordenação por Seleção e o MergeSort. 
Além destes dois algoritmos, você deverá escolher *um* segundo algoritmo de ordenação dentre os seguintes: IBR Bitonic Sort, QuickSort, Radix Sort.

Ou seja, no total, você vai implementar *dois* algoritmos de ordenação paralelos.

Para as implementações, vc deve estudar os códigos seriais fornecidos e depois então projetar o seu algoritmo paralelo.

Execute alguns experimentos para analisar o resultado do seu algoritmo paralelo:

* Utilize tamanhos crescentes do vetor: 100000, 300000, 600000, 900000, 1200000
* Utilize mais threads: 2, 4, e 8 threads.
* Calcule o speedup para cada execução
* Elabore gráficos mostrando os seus resultados

Ao realizar o experimento, atente para situações em que o tempo paralelo seja maior que o tempo serial; caso ocorra, forneça uma explicação satisfatória.

## O que submeter:

* Os códigos paralelos implementados de acordo com a(s) tecnologia(s) indicada(s) pelo professor (**OpenMP**);
* Os relatórios de implementação (discutindo abordagens, dificuldades, contribuição de cada componente do grupo, etc);
* Os relatórios de execução (tabela com os resultados dos tempos de execução, gráficos dos speedups, prints das telas, em PDF);
* Pelo menos 5 vetores utilizados nos experimentos de busca; os vetores devem ter tamanhos grandes, como mostrado acima.

