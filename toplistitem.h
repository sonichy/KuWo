#ifndef TOPLISTITEM_H
#define TOPLISTITEM_H

#include <QWidget>
#include <QPushButton>
#include <QNetworkReply>

class ToplistItem : public QWidget
{
    Q_OBJECT
public:
    explicit ToplistItem(QWidget *parent = nullptr);
    void setImage(QString surl);
    QString id, name;

private:
    QPushButton *pushButton;

signals:
    void send(QString id, QString name);

private slots:
    void replyImage(QNetworkReply *reply);
    void itemPressed();
};

#endif // TOPLISTITEM_H
