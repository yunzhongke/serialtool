#ifndef MYQCOMBOBOX_H
#define MYQCOMBOBOX_H


 #include <QComboBox>
  #include <QKeyEvent>
 class myQComboBox : public QComboBox
{
Q_OBJECT
public:
	myQComboBox ( QWidget * parent  );

		
	void keyPressEvent ( QKeyEvent * event );

    ~myQComboBox();
};

#endif
