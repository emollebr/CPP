#include "Serializer.hpp"

int main() {
    Data data;

    data.name = "data";
    data.value = 1;
    
    std::cout << "Is the deserialized pointer equal to the original? = " <<
    (Serializer::deserialize( Serializer::serialize(&data)) == &data) << std::endl;

}