// This may look like C, but it's really -*- C++ -*-

//=============================================================================
/**
 *  @file    ClientApp.h
 *
 *  $Id: ClientApp.h 935 2008-12-10 21:47:27Z mitza $
 *
 *  @author  Tim Bradley <bradley_t@ociweb.com>
 */
//=============================================================================
#ifndef CLIENTAPP_H
#define CLIENTAPP_H

#include "TestInf/TestAppBase.h"
#include "TestInf/ClientEngine.h"
#include "tao/ORB.h"
#include "ace/SString.h"


class ClientApp : public TestAppBase
{
  public:

    ClientApp();
    virtual ~ClientApp();


  protected:

    virtual int run_i(int argc, ACE_TCHAR* argv[]);


  private:

    // These are all called, in order, by the run_i() method.
    int init(int argc, ACE_TCHAR* argv[]);
    void client_setup(void);
    int  run_engine(void);
    void cleanup();

    // Helper methods used by the methods above.
    int parse_args(int argc, ACE_TCHAR* argv[]);

    int set_arg(unsigned&   value,
                 const ACE_TCHAR* arg,
                 char        opt,
                 const char* name,
                 int         min = 0);

    void usage_statement();
    int arg_dependency_checks();


    CORBA::ORB_var      orb_;
    ACE_TString         exe_name_;
    ACE_TString         ior_;
    ClientEngine_Handle engine_;
    unsigned            client_id_;
    unsigned            num_loops_;
};

#endif
