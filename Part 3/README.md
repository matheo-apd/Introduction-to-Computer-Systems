# SOBRE O JOGO EM ASSEMBLY:

COMO RODAR?

O professor Eduardo do Valle Simões disponibilizou um simulador de um processador feito no ICMC da USP - São Carlos. Eis o guia:


"Nossa disciplina irá usar um simulador para desenvolver programas em linguagem Assembly que poderá ser encontrado para Windows, Linux e MacOS em: https://github.com/simoesusp/Processador-ICMC/blob/master/Install_Packages/

Para Windows, fiz um link super fácil de instalar: https://github.com/simoesusp/Processador-ICMC/blob/master/Install_Packages/Simulador_Windows_Tudo_Pronto_F%C3%A1cil%20(1).zip

Esse zip já vem inclusive com o sublime configurado para escrever o software (incluindo a sintaxe highlight) e o montador e o simulador já configurado para ser chamado com a tecla F7
Para instalar basta fazer o download na area de trabalho ou na pasta Documentos
Entrar na pasta ..\Simulador\Sublime Text 3
Executar o sublime: "sublime_text.exe"
Se ele pedir, NÃ0 FAÇA O UPDATE !!!!!!!!!!!!!!!
Vá em File - Open File e volte uma pasta para ..\Simulador\
Abra o sw em Assembly chamado Hello4.ASM
Teste se está tudo funcionando chamando o MONTADOR e o SIMULADOR com a tecla F7
Apartir daí pode-se salvar o sw com outro nome e fazer novos programas
Apenas preste atenção para estar na pasta ..\Simulador\
Se der o erro: [Decode error - output not utf-8] é porque você não está na pasta ..\Simulador\
... Ou basta mudar o formato para utf-8 e salvar..."


# FERRAMENTAS DE DESENVOLVIMENTO

Talvez você tenha reparado que temos tanto um código fonte do jogo em ASM, quanto em .C; Mais do que isso, é possível que você tenha reparado que o código fonte em C é estranho, comparado ao C tradicional. Isso é porque usamos um compilador, disponível em  < https://github.com/simoesusp/Processador-ICMC/tree/master/compiler >


# COMO USAR O COMPILADOR

Sim, esse compilador é uma dor de cabeça, mas é bem melhor que escrever 6.000 linhas de código em assembly.

Antes de tudo, caso você use o Windows, encorajamos que você PARE! Caso não seja possível parar de usar WINDOWS, você pode usar um simulador de linux para windows, chamado WSL. Eu já passei por essa fase e já fiquei horas tentando instalar o WSL. Para que você não tenha que passar pelo mesmo que eu passei, eis aqui um tutorial completíssimo de instalação do WSL < https://www.youtube.com/watch?v=X-DHaQLrBi8&t=64s&ab_channel=ProgrammingKnowledge2 >

Uma vez que você instalou corretamente o wsl, hora de fazer a mágica funcionar. Aqui estão os comandos, em ordem:

sudo apt-get install update
sudo apt-get install upgrade
sudo apt-get istall update         //Isso é lógica de pendrive, que você precisa ficar girando a posição até ele se encaixar

git clone https://github.com/simoesusp/Processador-ICMC.git

cd Processador-ICMC
cd compiler




" Você precisa que o arquivo do seu jogo esteja nesse diretório, para tal você pode abrir o vscode com o comando "code .", ou você pode acessar o arquivo correspondente ao wsl no seu windows. Para tal, você precisará pesquisar "%localappdata%" no pesquisador windows, abrir a pasta "packages", lá estará uma pasta com o nome da sua distro. No meu caso, essa pasta se chama "CanonicalGroupLimited.Ubuntu20.04LTS_79rhkp1fndgsc". Abra esta pasta, vá para "LocalState" e então para "rootfs". Em "rootfs" você encontrará a pasta home, e dentro dela estará outra pasta com seu nome de usuário wsl. Abra os diretórios do "Processador-ICMC" e "compiler". Lá, você poderá inserir o arquivo.c do seu jogo. Mas seu trabalho ainda não acabou. Voltando para seu wsl, use o comando "chmod 777 arquivo.c"

uma vez que temos o compilador e o arquivo.c, ainda temos alguns comandos:

sudo apt install bison flex g++

make

Por fim, para compilar seu jogo de C para assembly, use o comando

./parser arquivo.c > arquivo.asm

#Como rodar o jogo?

Lembra do simulador do processador? Se você instalou ele, basta abrir o "sublime_text.exe", lá você poderá "abrir um projeto". A maneira mais rápida de fazer o jogo rodar é abrindo o projeto "Hello4.asm", na pasta do processador, substituir seu conteúdo pelo código assembly que você gerou, ou pelo código assembly de nosso jogo, apertar as teclas "f7" e, assim que terminar de carregar, a tecla "home".

Está pronto o sorvetinho.
 
Obs: você pode colocar um arquivo.asm na pasta do simulador e abrir ela no sublime_text.exe, a sugestão dada é apenas para tornar o processo mais rápido

#VIDEO DO JOGO RODANDO
< https://github.com/Gustavo-Blois/INTRODU-O-A-SISTEMAS-COMPUTACIONAIS/blob/main/Video%20do%20Jogo%20para%20ISC.mkv >
