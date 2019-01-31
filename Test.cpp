#include <iostream>
#include"ThreadPool.h"
void func(int i){
    cout<<"task finish"<<"------>"<<i<<endl;
}
int main()
{

    ThreadPool q ;
    q.start(N);
    int i=0;
    while(1){
        i++;
        //调整线程之间cpu调度
       this_thread::sleep_for(chrono::seconds(1));
        auto task = bind(func,i);
        q.addTask(task);
    }
    q.finish();
    return 0;
}

