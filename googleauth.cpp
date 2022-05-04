#include "googleauth.h"

GoogleAuth::GoogleAuth(QObject *parent) : QObject(parent)
{
    this->google = new QOAuth2AuthorizationCodeFlow(this);

    // Set Scope or Permissions required from Google
    // List can be obtained from https://developers.google.com/identity/protocols/oauth2/scopes

    this->google->setScope("email https://www.googleapis.com/auth/drive.readonly");

    connect(this->google, &QOAuth2AuthorizationCodeFlow::authorizeWithBrowser, [=](QUrl url) {
        QUrlQuery query(url);

        query.addQueryItem("prompt", "consent");      // Param required to get data everytime
        query.addQueryItem("access_type", "offline"); // Needed for Refresh Token (as AccessToken expires shortly)
        url.setQuery(query);
        QDesktopServices::openUrl(url);
    });

    // Here the parameters from Google JSON are filled up
    // Attached screenshot of JSON file and Google Console

    this->google->setAuthorizationUrl(QUrl("https://accounts.google.com/o/oauth2/auth"));
    this->google->setAccessTokenUrl(QUrl("https://oauth2.googleapis.com/token"));
    this->google->setClientIdentifier("771316829106-67att75gkbno2rar05pt38d2h5de20vb.apps.googleusercontent.com");
    this->google->setClientIdentifierSharedKey("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");

    // In my case, I have hardcoded 5476
    // This is set in Redirect URI in Google Developers Console of the app
    // Same can be seen in the downloaded JSON file

    auto replyHandler = new QOAuthHttpServerReplyHandler(8000, this);
    this->google->setReplyHandler(replyHandler);

    //connect(this->google, &QOAuth2AuthorizationCodeFlow::granted, [=]() {
        //qDebug() << __FUNCTION__ << __LINE__ << "Access Granted!";
    connect(this->google, &QOAuth2AuthorizationCodeFlow::granted, [=](){
        const QString token = this->google->token();
        m_strAccessToken=token;
        emit gotToken(token);

        //qDebug() << token;
//        auto reply = this->google->get(QUrl("https://www.googleapis.com/drive/v3/files"));
//        connect(reply, &QNetworkReply::finished, [reply]() {
//            qDebug() << "REQUEST FINISHED. Error? " << (reply->error() != QNetworkReply::NoError);
//            qDebug() << reply->readAll();
//        });----------------------这是替代
    });
}

// Call this function to prompt authentication
// and receive data from Google

void GoogleAuth::click()
{
    this->google->grant();
}

QString GoogleAuth::accessToken()
{
    return m_strAccessToken;
}

void GoogleAuth::onGoogleAuthorizeWithBrowser(const QUrl &url)
{
    QDesktopServices::openUrl(url);
}
