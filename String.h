class String{
  private:
    int maxSize = 100;

  public:
    char* data;    // pointer to the character array
    int size;   // current size of the string
    int capacity;// capacity of the allocated memory

    // Constructors
    String();
    String(const String& str);
    String(const char* str);
    // Destructor
    ~String();

    //Member functions
    bool isEmpty();
    void reserve(int n);

    // Operators
    //void operator_eq(const char* p);

    //Accessors
    int getCapacity();
    //void resize(int newSize,char c);
};
