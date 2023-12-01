class String{
  private:
    int maxSize = 100;

  public:
    char* data;    // pointer to the character array
    int size;   // current size of the string
    int capacity;// capacity of the allocated memory
    String();
    String(const String& str);
    String(const char* str);


    int max_size() const;
    void resize(int newSize,char c);
    String operator+(const String& other) const;
};
