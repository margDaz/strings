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
<<<<<<< HEAD
    ~String();

    //Member functions
    bool isEmpty();
=======
    int size();
    void clear();
    String& operator=(char c);
>>>>>>> 1069311dbb3a1b0d031d1f14c7cd2c6ed6d76c86

  protected:
    int len;
/*
    //Accessors
/*
    getData();
    getSize();

<<<<<<< HEAD
*/
    int getCapacity();

=======
    int max_size() const;
    void resize(int newSize,char c);
    String operator+(const String& other) const;
>>>>>>> 1069311dbb3a1b0d031d1f14c7cd2c6ed6d76c86
};
