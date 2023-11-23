#include <iostream>
using namespace std;

class example {
private:
int n;
public:
void print(){
    for(int i=1;i<10;i++){
        cout<<i<<endl;
    }
}
};

int main() {
    // Your code here
example e;
e.print();
    return 0;
}