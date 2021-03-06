#include "oauth2.h"
#include <QDebug>
#include <QApplication>
#include <QSettings>
#include <QMessageBox>
//--------------------新添加



OAuth2::OAuth2(QWidget* parent)
{
    //You need to login to Google, so first you need to create simple
    //Google account. Then you can visit the page
    //
    // https://code.google.com/apis/console
    //
    //there you can create your application. You need to check access to Calendar API.
    //
    //Then  you can see credentials of your application.
    //You need to copy and paste Client_ID and Redirect_URI to the strings below.
    //
    //m_strEndPoint = "https://accounts.google.com/o/oauth2/auth";

    m_strEndPoint = "https://accounts.google.com/o/oauth2/auth";
    m_strScope = "https://www.googleapis.com/auth/calendar"; //Access to Calendar service
    m_strClientID = "771316829106-67att75gkbno2rar05pt38d2h5de20vb.apps.googleusercontent.com";
    m_strRedirectURI = "http://127.0.0.1:8000/";
    m_strResponseType = "token";

    m_googleoauth = new GoogleOAuth(parent);
    m_pParent = parent;
    m_googleoauth->show();
    connect(m_googleoauth, SIGNAL(accessTokenObtained()), this, SLOT(accessTokenObtained()));

}

void OAuth2::accessTokenObtained()
{
    QSettings settings("ICS", "Google API Calendar Client");
    m_strAccessToken = m_googleoauth->accessToken();
    //m_strAccessToken = googleAuth.accessToken();
    settings.setValue("access_token", m_strAccessToken);
    //m_pLoginDialog->setLoginUrl("");-------------------改
    emit loginDone();

}


QString OAuth2::loginUrl()
{
    QString str = QString("%1?client_id=%2&redirect_uri=%3&response_type=%4&scope=%5").arg(m_strEndPoint).arg(m_strClientID).
            arg(m_strRedirectURI).arg(m_strResponseType).arg(m_strScope);
    qDebug() << "Login URL" << str;
    return str;
}

QString OAuth2::accessToken()
{
    return m_strAccessToken;
}

bool OAuth2::isAuthorized()
{
    return m_strAccessToken != "";
}

void OAuth2::startLogin(bool bForce)
{
    qDebug() << "OAuth2::startLogin";
    //QSettings settings("ICS", "Google API Calendar Client");
    //QString str = settings.value("access_token", "").toString();

    //qDebug() << "OAuth2::startLogin, token from Settings" << str;

    if(m_strClientID == "YOUR_CLIENT_ID_HERE" || m_strRedirectURI == "YOUR_REDIRECT_URI_HERE")
    {
        QMessageBox::warning(m_pParent, "Warning",
                             "To work with application you need to register your own application in <b>Google</b>.\n"
                             "Learn more from <a href='http://code.google.com/p/qt-google-calendar/wiki/HowToRegisterYourApplicationInGoogle'>here</a>");
        return;
    }
    if(m_strAccessToken.isEmpty() || bForce)
    {
        //LoginDialog* dlg = new LoginDialog(parent);
        //m_pLoginDialog->setParent(parent);
        //m_pLoginDialog->setLoginUrl(loginUrl());-------------------改
        m_googleoauth->show();
//        int res=m_googleoauth->exec();
//        int res = dlg.exec();
//        if(res == QDialog::Accepted)
//        {
//            m_strAccessToken = m_googleoauth->accessToken();
//            settings.setValue("access_token", m_strAccessToken);
//            emit loginDone();
//        }
    }
    else
    {
        //m_strAccessToken = str;
        emit loginDone();
    }
}

