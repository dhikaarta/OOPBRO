EXECUTABLE_FILENAME = main
ALL_SRCS := $(wildcard *.cpp)
SRCS     := $(filter-out check.cpp, $(ALL_SRCS))
CC = g++.exe

all : compile run

compile :
	$(CC) ./Kendaraan/Minibus.cpp ./Kendaraan/Bus.cpp ./Kendaraan/Mobil.cpp \
	./Kendaraan/Kendaraan.cpp ./KoleksiKendaraan/KoleksiKendaraan.cpp\
	 -std=c++17 -o $(EXECUTABLE_FILENAME) $(SRCS)

run : ./main