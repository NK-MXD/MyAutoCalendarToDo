#ifndef GOOGLEAUTH_H
#define GOOGLEAUTH_H

#include <QObject>
#include <QOAuth2AuthorizationCodeFlow>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QUrl>
#include <QUrlQuery>
#include <QOAuthHttpServerReplyHandler>
#include <QDesktopServices>

class GoogleAuth : public QObject
{
    Q_OBJECT
public:
    QString accessToken();
    void onGoogleAuthorizeWithBrowser(const QUrl &url);
    explicit GoogleAuth(QObject *parent = nullptr);
    Q_INVOKABLE void click();
signals:
    void gotToken(const QString& token);

private:
    QOAuth2AuthorizationCodeFlow * google;
    QString m_strAccessToken;
};

#endif // GOOGLEAUTH_H
