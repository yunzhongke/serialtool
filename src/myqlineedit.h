#ifndef MYQLINEEDIT_H
#define MYQLINEEDIT_H


 #include <QLineEdit>
  #include <QKeyEvent>
 class myQLineEdit  : public QLineEdit
{
Q_OBJECT
public:
	myQLineEdit( QWidget * parent);

		
	void keyPressEvent ( QKeyEvent * event );

    ~myQLineEdit();
 };

#endif
