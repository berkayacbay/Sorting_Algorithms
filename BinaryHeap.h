class BinaryHeap{
public:
    BinaryHeap(int capacity); //constructor
    ~BinaryHeap();
    void deleteMin();  //deletes the minimum number in heap
    int getMin(); //returns the minimum number in heap
    void insert(int element); // add number to heap

private:
    void percolateDown(int hole); // it takes away the number which is not in the right location
    void swap(int i, int j); //swaps the elements in node
    int size; // size of heap
    int capacity;//capacity of heap
    int *heap; //heap pointer
    bool equal1(int k); //extra method for equals 1
};