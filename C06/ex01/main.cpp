#include "data.hpp"

void * serialize(void)
{
	static std::string alnum = "0123456789" \
		"abcdefghijklmopqrstuvxyz" \
		"ABCDEFGHIJKLMOPQRSTUVXYZ";
	static size_t size = alnum.size();
	/* uint8_t is the same as a byte. */
	uint8_t *raw = new uint8_t[8 + 4 + 8]; // int = 4 bytes
    for (size_t i = 0; i < 8; i++)
        raw[i] = alnum[rand() % size];
    *reinterpret_cast<int*>(raw + 8) = rand();
    for (size_t i = 0; i < 8; i++)
        raw[8 + 4 + i] = alnum[rand() % size];
    return reinterpret_cast<void*>(raw);
}

Data * deserialize(void * raw)
{
	Data *data = new Data;

	data->s1 = std::string(static_cast<char*>(raw), 8);
	data->n = *reinterpret_cast<int*>(static_cast<char*>(raw) + 8);
	data->s2 = std::string(static_cast<char*>(raw) + 8 + 4, 8);
	return (data);
}

int main()
{
	srand(time(NULL));
	void *raw = serialize();
    Data *data = deserialize(raw);
    std::cout << "s1 = " << data->s1 << ", n = " << data->n << ", s2 = " << data->s2 << std::endl;
    delete[] reinterpret_cast<uint8_t*>(raw);
    delete data;
	return (0);
}
