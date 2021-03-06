//最大堆的类定义maxheap.h
#define HeapSIZE 15
#define MaxHeapSize 100

class maxheap
{private:
  ElemType *heapArray;
  int maxheapSize;
  int heapsize;
 public:
//构造一个空堆S
  maxheap(int);
//堆存在则堆被销毁
  void Destroyheap();
//堆存在则清为空堆
  void Clearheap();
//堆空则返回true,否则false
  bool heapEmpty();
//堆满则返回true,否则false
  bool heapFull();
// 堆存在则返回堆的元素个数,即堆的长度
  int heapLength();
//堆存在且非空则返回堆的堆顶元素
  ElemType GetTop();
// 插入后的堆调整,使之符合最大堆的定义
  void FilterUp();
//删除后的堆调整,使之符合最大堆的定义
  void FilterDown();
//堆插入
  void heapInsert(ElemType item);
//堆删除
  ElemType heapDelete();
};

