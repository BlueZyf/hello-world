#include <iostream>
#include <gflags/gflags.h>

DEFINE_bool(isvip,false,"If is VIP");
DEFINE_string(ip,"192.168.2.100");
DECLARE_int32(port);
DEFINE_int32(port,80,"listen port");

using namespace std;

int main(int argc, char** argv)
{
    google::ParseCommandLineFlags(&argc,&argv,true);
    cout<<"ip:"<<FLAGS_ip<<endl;
    cout<<"port:"<<FLAGS_port<<endl;
    if(FLAGS_isvip){
        cout<<"isvip:"<<FLAGS_ipvip<<endl;
    }
    google::ShutDownCommandLineFlags();
    return 0;
}