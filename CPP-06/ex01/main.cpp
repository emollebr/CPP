#include "Serializer.hpp"

int main() {
    Data data;

    data.name = "data";
    data.value = 1;

    std::cout << "Is the deserialized pointer equal to the original? \n" <<
    (Serializer::deserialize( Serializer::serialize(&data)) == &data ? "Yes" : "No") << std::endl;

}