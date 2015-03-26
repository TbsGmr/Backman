all:
	(pkill backman &)
	 g++ -O3 -o backman backman.cpp day_ata_glance.cpp bestellung.cpp -lwthttp -lwt
	(./backman --docroot .. --http-address 0.0.0.0 --http-port 9090 &> /dev/null &)
