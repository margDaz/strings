class String{

  public:
    char* data;    // pointer to the character array
    int capacity;// capacity of the allocated memory

    // Constructor
    String();
    String(const String& str);
    String(const char* str);
    ~String()

    //Accessors
    int String::getCapacity();
    int size();

    // Member functions
    void clear();
    String& operator=(char c);
    String operator+ (const char* rhs);
    bool isEmpty();
    void reserve(int n);

  protected:
    int size_;

};
