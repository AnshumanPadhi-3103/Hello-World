#include<iostream>
using namespace std;

/*

2 Rules for Binary Heap
- Its a complete tree. -> So you can use an array
- Either a max-heap or min-heap. 

Array Implementation 
Root - A[0]

Parent Node : Arr[(i-1)/2]
Left Child  : Arr[(2*i)+1]
Right Child : Arr[(2*i)+2]

Functions:
1. GetMin()
2. ExtractMin()
3. DecreaseKey()
4. Insert()
5. Delete()
6. Display()

*/


class BinaryHeap
{
    public:
    // Pointer to array of elements
    int * hArr;
    // Maximum possible size of array
    int mSize;
    // Current size of array 
    int cSize;

    BinaryHeap(int mSize)
	{
        // Constructor 
        hArr = new int[mSize];
        this->mSize = mSize;//data member maximum size limit is initialized
        cSize = 0;// current size is initialized to zero.
    }
	//swap function
    void swap(int a, int b)
	{
        // Swap elements ... 
        hArr[a]=hArr[a]+hArr[b];
        hArr[b]=hArr[a]-hArr[b];
        hArr[a]=hArr[a]-hArr[b];
    }

    int parent(int i)
	{ 
		return (i-1)/2;
	}
    int left(int i)
	{ 
		return (i*2)+1;
	}
    int right(int i)
	{ 
		return (i*2)+2;
	}

    int getMin()
	{ 
		return hArr[0]; 
	}

    void insert(int value)
	{
        // Base case. for Heap Overflow
		if(cSize==mSize)
        cout<<"Heap Overflow";
        // Insert the new key at the end.
		else
        {
            hArr[cSize++]=value;//value given to new key
            int i=cSize-1;
            //Check it for all hierarchy with loop
            while(i>0&&hArr[i]<hArr[parent(i)])
            {
            	//Check if it breaks the heap property and fix it.
                swap(i,parent(i));//if the hierarchy is broken then swap elements and reach the root
                i=parent(i);
            }
        } 
    }
    void display()
    {
    	display1(0,0);
	}
    void display1(int i, int spa)
	{
        // Display the array
        if(i<cSize)//if the end of the tree
        {
            display1(right(i),++spa);//the right subtree is displayed with an increased  space
            cout<<endl;
            for(int i=1;i<spa;i++)//for loop to print the correct number of spaces
            cout<<"      ";
            cout<<hArr[i]<<endl;//the value at the current node
            display1(left(i),spa);//the left subtree is displayed
        }
    }

    int extractMin() 
    { 
        // Base case for Empty Heap
        if(cSize==0)
        return -5555;
        // Base case for Heap with 1 value.
		else if(cSize==1)
		return hArr[cSize--];
		else
        {
            int min=getMin();//the minimum of the heap is stored
            hArr[0]=hArr[--cSize]; // Copy the last element to the root. 
            MinHeapify(0);// Call MinHeapify on root. 
            return min;//the deleted element is returned
        }	
    }

    void decreaseKey(int i) 
    { 
        // Algorithm for what happens when I reduce the value of an element indexed at i to new_val. You can assume new_val to be less than the present value of the element. 
        // Loop for correcting the Property 2.
        // Compare with parent and move up till i == 0 or there is no violation.
		hArr[i]=getMin()-1;
        while(i>0&&hArr[i]<hArr[parent(i)])
        {
            swap(i,parent(i));
            i=parent(i);
        } 

    } 
    // Deletes the element indexed at i. 
    void deleteKeyAt(int i) 
    { 
        // Decrease the value to INT_MIN at index i use decreaseKey()
        decreaseKey(i);
        // Call ExtractMin
        i=extractMin();
    }

    void MinHeapify(int i) 
    { 
    // Compare with left and right 
    	int least=i;//stores the index of the child with the minimum value
        if(left(i)<cSize&&hArr[left(i)]<hArr[least])//the relation of the left child with the parent is checked
        least=left(i);
        if(right(i)<cSize&&hArr[right(i)]<hArr[least])//the relation of the right child with the parent is checked
        least=right(i);    
        if(least!=i)//if the rule is not satisfied
        {
            swap(i,least);//they are swapped
            MinHeapify(least);// Call MinHeapify at the replaced child. 
   		}	
    } 
};


int main(){
    BinaryHeap bh1(20);
    for(int i = 10; i >0 ; i--){
        cout << "Inserting " << i << endl;
        bh1.insert(i);
        bh1.display();
    }
    cout<<"**********************************************"<<endl;
    bh1.extractMin();
    bh1.display();
    cout<<"**********************************************"<<endl;
    bh1.deleteKeyAt(3);
    bh1.display();
    cout << endl;
}
