//Bai1
int* getPointerToTen() {
   int  *p1 = new int(10);
    return p1;
}


// Bai4
void swap(int* a, int* b) {
    int* c = new int;
    *c = *a;
    *a = *b;
    *b = *c;
}

//Bai 16
bool* isHigher (int* arr, int num, int thres){
    bool* p = new bool[num];
    for(int i=0;i<num;i++) {
        if(arr[i] >= thres) p[i]=true;
        else p[i] =false;
    }
    return p;
}


