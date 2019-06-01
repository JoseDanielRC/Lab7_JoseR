run: Main.o Persona.o FireBender.o WaterBender.o AirBender.o EarthBender.o NonBender.o Poder.o Curativos.o Defensivo.o Ofensivo.o
	g++ Main.o Persona.o FireBender.o WaterBender.o AirBender.o EarthBender.o NonBender.o Poder.o Curativos.o Defensivo.o Ofensivo.o -o run
Main.o: Main.cpp Persona.h FireBender.h WaterBender.h AirBender.h EarthBender.h NonBender.h Poder.h Curativos.h Defensivo.h Ofensivo.h
	g++ -c Main.cpp
Persona.cpp.o: Persona.h Persona.cpp
	g++ -c Persona.cpp
FireBender.cpp.o: FireBender.h FireBender.cpp
	g++ -c FireBender.cpp
WaterBender.cpp.o: WaterBender.h WaterBender.cpp
	g++ -c WaterBender.cpp
AirBender.cpp.o: AirBender.h AirBender.cpp
	g++ -c AirBender.cpp
EarthBender.cpp.o: EarthBender.h EarthBender.cpp
	g++ -c EarthBender.cpp
NonBender.cpp.o: NonBender.h NonBender.cpp
	g++ -c NonBender.cpp
Poder.cpp.o: Poder.h Poder.cpp
	g++ -c Poder.cpp
Ofensivo.cpp.o: Ofensivo.h Ofensivo.cpp
	g++ -c Ofensivo.cpp
Defensivo.cpp.o: Defensivo.h Defensivo.cpp
	g++ -c Defensivo.cpp
Curativos.cpp.o: Curativos.h Curativos.cpp
	g++ -c Curativos.cpp
