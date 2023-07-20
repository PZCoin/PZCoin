// main.cpp for PZCoin-cli

#include <iostream>
#include <filesystem>
#include <fstream>
#include <unistd.h>

#include "blockchain/blockchain.hpp"

int main(int argc, char *argv[]) {
	if (!std::filesystem::exists(".pzcoin")) {
		std::cout << "Running PZCoin CLI for the first time. Setting up...\n";
		// make .pzcoin directory
		std::filesystem::create_directory(".pzcoin");
		std::cout << "Made .pzcoin directory\n";
		// make peers.txt file
		std::ofstream peers_file(".pzcoin/peers.txt");
		peers_file << ""; /// TODO: add default peers
		peers_file.close();
		std::cout << "Made peers.txt file\n";
		// make blockchain.dat file
		std::ofstream blockchain_file(".pzcoin/blockchain.dat");
		blockchain_file << ""; /// TODO: add genesis block
		blockchain_file.close();
		std::cout << "Made blockchain.dat file\n";
		// make config.txt file
		std::ofstream config_file(".pzcoin/config.txt");
		config_file << "rpcport=32174\nrpcuser=pzcoinrpc\nrpcpassword=pzcoinrpcpassword\n";
		config_file << "walletaddr=\n";
		config_file.close();
		std::cout << "Made config.txt file\n";
		std::cout << "Done! Clearing screen in 3 seconds...\n";
		sleep(3);
		std::cout << "\033[2J\033[1;1H";
	}
	// connect to peers and sync blockchain
	
	// start json-rpc server

	// if ran with "pzcoin-cli mine", start mining
	if (argc == 2 && std::string(argv[1]) == "mine") {
		
	}
	return 0;
}