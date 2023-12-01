class String{

  public:
    char* data;    // pointer to the character array
    int capacity;// capacity of the allocated memory
    String();
    String(const String& str);
    String(const char* str);
    int size();
    void clear();

  protected:
    int len;
/*
    //Accessors
    getValue();
    getAllocator();
    getReference();
    getPointer();
    getIterator();
    getSize();

    display();*/
};
