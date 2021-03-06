struct Stash{
    int size; //Size of each space
    int quantity; // Number of storage spaces
    int next; //Next empty space
    unsigned char* storage;
    void initialize(int size);
    void cleanup();
    int add(const void* element);
    void* fetch(int index);
    int count(s);
    void inflate(int increase);
};

