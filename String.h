
class String{
  protected :
    char value;
    Allocator allocator;
    char& reference;
    char* pointer;
    char iterator;
    size_t size_type;

  public :
    String();

    //Accessors
    getValue();
    getAllocator();
    getReference();
    getPointer();
    getIterator();
    getSize();

    display();
};
