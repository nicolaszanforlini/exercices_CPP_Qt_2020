#include "fenetre.h"


fenetre::fenetre()
{

    setFixedSize(300,600);

    btn = new QPushButton("clicker sur ok",this);

    bool ok = false;
    QFont police = QFontDialog::getFont(&ok,btn->font(),this,"choisir police");
    if(ok){
        btn->setFont(police);
    }


    QColor color = QColorDialog::getColor(Qt::red,this);
    QPalette palette;
    palette.setColor(QPalette::ButtonText,color);

    btn->setPalette(palette);


    QString fichier = QFileDialog::getOpenFileName(this, "Ouvrir un fichier", QString(), "Images (*.png *.gif *.jpg *.jpeg)");
    QMessageBox::information(this, "Fichier", "Vous avez sélectionné :\n" + fichier);







    btn->show();
}
