#ifndef PROCESSMODEL_H
#define PROCESSMODEL_H

#include "View.h"
#include "Common.h"

class ProcessModel : public QObject
{
    Q_OBJECT
public:
    ProcessModel(View * obj);
    ~ProcessModel();

private:
    View * process_handle = nullptr;

    void initConnect();
};


#endif // PROCESSMODEL_H
