#ifndef PROJECTION_H
#define PROJECTION_H
#include"QString"
#include"QVector"
#include"QSqlQuery"
#include"QSqlQueryModel"

class projection
{
private:
    QString ID , id_film , id_cine , id_salle , time  ;



public:
    projection();
    projection(QString id , QString id_film , QString id_cine , QString id_salle , QString time );
    QVector<QString> search_films() ;
    QVector<QString> search_cine() ;
    QString extract_cine(QString x) ;
    QVector<QString> search_salle(QString cine_id ) ;
    bool ajout_projection() ;
    QVector<QString> get_projection() ;
    QString extract_salle(QString id) ;
    QVector<QString> extract_chaise(QString id_salle) ;
    bool update_proj(QString id , QString new_horaire) ;
    bool delete_projec(QString id);



};

#endif // PROJECTION_H
