#pragma once
# define BRAIN_CLASS_HPP
#include <string>

class Brain {
    protected:
    std::string _ideas[100];
    size_t      _nIdeas;

    public:
    Brain(void);
    ~Brain();
    Brain(const Brain &copy);
    Brain& operator=(const Brain &other);

    std::string   getIdea(size_t ideaIndex) const;
    void          setIdea(std::string idea);
};