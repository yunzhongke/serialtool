/*================================================================
 *   Copyright (C) 2018 Vertiv Tech Co Ltd. All rights reserved.
 *   
 *   文件名称：myqlineedit.cpp
 *   创 建 者：yunzhongke
 *   创建日期：2018年04月19日22时
 *   描    述：
 *
 ================================================================*/

#include "myqlineedit.h"

myQLineEdit::myQLineEdit(QWidget * parent  ):QLineEdit(parent){}


void myQLineEdit::keyPressEvent ( QKeyEvent * event ) 
{
    QString key_code;
    int key_val;
    key_val =  event->key() ;
    key_code = event->text() ;
    if( (key_code != QString("1")) && (key_code != QString("2")) && (key_code != QString("3")) && (key_code != QString("4")) && (key_code != QString("5")) && (key_code != QString("6")) && (key_code != QString("7")) && (key_code != QString("8")) && (key_code != QString("9")) && (key_code != QString("0")) && (key_val != 16777219))
        event->ignore();
    else
        QLineEdit::keyPressEvent ( event );
}

myQLineEdit::~myQLineEdit(){}
