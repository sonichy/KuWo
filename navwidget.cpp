#include "navwidget.h"
#include <QVBoxLayout>

#include <QDebug>

NavWidget::NavWidget(QWidget *parent) : QWidget(parent)
{    
    setStyleSheet("QListWidget { border:none; } "
                  "QListWidget::item { color:#cccccc; padding:3px;} "
                  "QListWidget::item:selected { background-color:#333333; }");
    setFixedWidth(200);
    setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Expanding);
    QVBoxLayout *vbox = new QVBoxLayout;    
    listWidget = new QListWidget;
    listWidget->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Expanding);
    QListWidgetItem *LWI;
    LWI = new QListWidgetItem(QIcon(":/music1.svg"), "推荐");
    listWidget->insertItem(0, LWI);
    LWI = new QListWidgetItem(QIcon(":/radio1.svg"), "电台");
    listWidget->insertItem(1, LWI);
    LWI = new QListWidgetItem(QIcon(":/rank.svg"), "排行榜");
    listWidget->insertItem(2, LWI);
    LWI = new QListWidgetItem(QIcon(":/mic.svg"), "直播");
    listWidget->insertItem(3, LWI);
    LWI = new QListWidgetItem(QIcon(":/hifi.svg"), "HIFI发烧音乐");
    listWidget->insertItem(4, LWI);
    LWI = new QListWidgetItem("我的音乐");
    LWI->setFlags(Qt::NoItemFlags);
    listWidget->insertItem(5, LWI);
    LWI = new QListWidgetItem(QIcon(":/radio.svg"), "我的电台");
    listWidget->insertItem(6, LWI);
    LWI = new QListWidgetItem(QIcon(":/download.svg"), "下载管理");
    listWidget->insertItem(7, LWI);
    LWI = new QListWidgetItem(QIcon(":/computer.svg"), "本地音乐");
    listWidget->insertItem(8, LWI);
    LWI = new QListWidgetItem(QIcon(":/cloud.svg"), "我的云盘");
    listWidget->insertItem(9, LWI);
    LWI = new QListWidgetItem(QIcon(":/time.svg"), "最近播放");
    listWidget->insertItem(10, LWI);
    LWI = new QListWidgetItem("自建歌单");
    LWI->setFlags(Qt::NoItemFlags);
    listWidget->insertItem(11, LWI);
    LWI = new QListWidgetItem(QIcon(":/menu.svg"), "默认列表");
    listWidget->insertItem(12, LWI);
    vbox->addWidget(listWidget);

    QHBoxLayout *hbox = new QHBoxLayout;
    pushButton_albumPic = new QPushButton;
    pushButton_albumPic->setFixedSize(74,74);    
    pushButton_albumPic->setIconSize(QSize(70,70));
    pushButton_albumPic->setFocusPolicy(Qt::NoFocus);
    pushButton_albumPic->setFlat(true);
    pushButton_albumPic->setCursor(Qt::PointingHandCursor);
    hbox->addWidget(pushButton_albumPic);
    label_songname = new QLabel;
    label_songname->setStyleSheet("font-size:13px;");
    hbox->addWidget(label_songname);
    hbox->addStretch();

    vbox->addLayout(hbox);

    setLayout(vbox);
}
