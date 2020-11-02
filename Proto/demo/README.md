# 什么是protobuf
 Google Protocol Buffer( 简称 Protobuf) 是 Google 公司内部的混合语言数据标准
 Protocol Buffers 是一种轻便高效的结构化数据存储格式，可以用于结构化数据串行化，或者说序列化。它很适合做数据存储或 RPC 数据交换格式。可用于通讯协议、数据存储等领域的语言无关、平台无关、可扩展的序列化结构数据格式。目前提供了 C++、Java、Python 三种语言的 API。


#　流程
## 建立 .proto文件
## 生成代码 protoc --cpp_out=./ project.proto 
   一般会生成两个文件 .pb.h / .pb.cc
   直接使用该对象即可。编译的时候需要把project.pb.cc编译， 并在链接的时候链接动态链接库 libprotobuf.so
## 建立demo.cpp
## 编译：project.pb.cc也需要编译， 如果是工程中， 可以单独编译， 由于只有一个文件所以就放到一块编译了
   g++ demo.cpp project.pb.cc -lprotobuf -o main

## 生成了什么
   在.proto上运行协议缓冲区编译器时，编译器用您指定的编程语言生成代码，您需要使用您在文件中描述的消息类型，
   包括获取和设置字段值，将消息序列化为输出流，以及从输入流解析消息。

   对于C++,编译器会从每个 .proto文件生成一个 .h and .cc文件, 文件中描述的每种消息类型都有一个类。

   对于Java，编译器为每个消息类型生成一个Java文件，其中包括每个类的定义，以及用于创建消息类实例的特殊
   构建器类。

   Python有点不同，Python编译器生成一个模块，其中包含中每种消息类型的静态描述符，然后与元类一起使用，
   在运行时创建必要的Python数据访问类。