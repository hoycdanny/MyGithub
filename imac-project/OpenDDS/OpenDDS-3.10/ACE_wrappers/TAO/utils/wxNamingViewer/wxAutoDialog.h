// $Id: wxAutoDialog.h 14 2007-02-01 15:49:12Z mitza $
// wxAutoDialog.h

#ifndef i_wxAutoDialog_h
#define i_wxAutoDialog_h


template <class D>
class WxAutoDialog
{
public:
  explicit WxAutoDialog( D* dialog) throw():dialog( dialog) {}
  ~WxAutoDialog() throw() { dialog->Destroy(); }

  D* operator->() const throw() { return dialog; }

protected:
  D* dialog;

private:
  // Unimplemented
  WxAutoDialog( const WxAutoDialog<D>&);
  WxAutoDialog<D>& operator=( const WxAutoDialog<D>&);
};

#endif