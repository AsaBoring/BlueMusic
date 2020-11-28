#include "ProcessModel.h"

ProcessModel::ProcessModel(View *obj)
    : QObject(obj)
{
    if(obj != nullptr)
    {
        process_handle = obj;
    }else{
        return;
    }

    initConnect();
}

ProcessModel::~ProcessModel()
{
}

void ProcessModel::initConnect()
{

}
