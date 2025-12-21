Projet TIC TAC TOE C++

J'ai partagé mon code en une structure claire avec :
Game.cpp pour la logique du jeu
Board.cpp qui gère tout élément lié au plateau
Player pour la gestion et la création des joueurs

Ainsi mon Main.cpp est allégé.

Les plus grosses améliorations du code se sont faites à travers la création d'une structure Board qui comporte les fonctions create_board(), draw_game_board(), entree(), case_vide() et gagner().
Les plus gros changements ont été faits sur les fonction entree() et gagner() qui n'étaient pas du tout optimisées bien que fonctionnelles.
Plutôt que de tout détailler ligne par ligne j'ai utilisé une boucle ce qui rend le code beaucoup plus lisible. Cependant même si ce n'était pas la meilleure des techniques, écrire dans un premier temps la logique de victoire et d'assignation de l'entrée du joueur de manière ultra détaillée m'a permis de vraiment comprendre pour ensuite repasser dessus et d'optimiser le code un maximum.

J'ai également créé la fonction convert_choix() qui permet de convertir un choix entre 1-9 en coordonnées ligne/colonne.

J'ai alors ajouté de nombreuses fonctions telles que case_vide() qui m'a été utile notamment pour le mode IA

La fonction move a permis à la fonction play_game() d'être plus courte et plus lisible mais également d'utiliser cette fonction à la fois pour le mode 2 joueurs et pour le mode IA.
