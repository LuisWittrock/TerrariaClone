all:
	g++ -c src/main.cpp src/block.cpp src/game.cpp src/inventory.cpp src/physics.cpp src/player.cpp src/renderer.cpp src/sounds.cpp src/world.cpp
	g++ main.o block.o game.o inventory.o physics.o player.o renderer.o sounds.o world.o -o Terraria -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio
	
	echo "cleaning up"

	rm main.o
	rm block.o
	rm inventory.o
	rm player.o
	rm renderer.o
	rm sounds.o
	rm physics.o
	rm game.o
	rm world.o