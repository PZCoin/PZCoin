#pragma once

#include <string>
#include <vector>

class Block {
private:
	long long block_id, ntime, version;
	std::string prevhash, merkle_root, nonce, hash;
	std::vector<std::string> txs;
public:
};

class Blockchain {
private:
	std::vector<Block> blocks;
public:
	Block get_block(long long);
};
