// stdafx.cpp : ֻ������׼�����ļ���Դ�ļ�
// ProtobufTool.pch ����ΪԤ����ͷ
// stdafx.obj ������Ԥ����������Ϣ

#include "stdafx.h"


#ifdef _DEBUG
#pragma comment(lib,"..\\proto_2_6_0_vs2013_LIB\\Debug\\libprotobuf.lib")
#pragma comment(lib,"..\\proto_2_6_0_vs2013_LIB\\Debug\\libprotobuf-lite.lib")
#pragma comment(lib,"..\\proto_2_6_0_vs2013_LIB\\Debug\\libprotoc.lib")
#else
#pragma comment(lib,"..\\proto_2_6_0_vs2013_LIB\\Release\\libprotobuf.lib")
#pragma comment(lib,"..\\proto_2_6_0_vs2013_LIB\\Release\\libprotobuf-lite.lib")
#pragma comment(lib,"..\\proto_2_6_0_vs2013_LIB\\Release\\libprotoc.lib")
#endif