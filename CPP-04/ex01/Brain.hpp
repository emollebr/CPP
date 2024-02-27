#pragma once
# define BRAIN_CLASS_HPP
#include <string>

class Brain {
    public:
    Brain(void);
    ~Brain();
    Brain(const Brain &copy);
    Brain& operator=(const Brain &other);

    std::string ideas[100];
    std::string& getIdea(size_t ideaIndex) const;
    void          setIdea(std::string idea);
};