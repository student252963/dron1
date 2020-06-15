#ifndef WEKTOR3D_HH
#define WEKTOR3D_HH 

#include "Dr3D_gnuplot_api.hh"
#include "Wektor.hh"
#include <iostream>

/*!
 * \brief implementacja klasy Wektor3D dziedziczacej z szablonu Wektor<double,3>
 */
class Wektor3D: public Wektor<double,3> {

public:
    /*!
     * \brief konstruktor bezparametryczny z wektora<double,3>
     */
    Wektor3D(): Wektor<double,3>() {};
    /*!
     * \brief konstruktor parametryczny wektora3d z 3 liczb typu double
     * \param X wspolzedna na osi x
     * \param Y na osi y
     * \param Z na osi z
     */
    Wektor3D(double X, double Y, double Z) {
        tab[0]=X;
        tab[1]=Y;
        tab[2]=Z;
    }
    /*!
     * \brief operator przypisania wektora3d do wektora3d
     * \param W2 wektor3d
     * \return wektor3d po przerpisaniu z innego wketora3d
     */
    Wektor3D & operator = (Wektor3D W2) {
        for(int i = 0 ; i < 3 ; i++){ 
            tab[i]=W2[i];
        }
        return *this;
    }
    /*!
     * \brief operator przypisania wektora<double,3> do wektora3d
     * \param W2 wektor<double,3>
     * \return wektor3d po przerpisaniu z wektora<double,3>
     */
    Wektor3D & operator = (Wektor<double,3> W2) { 
        for(int i = 0 ; i < 3 ; ++i){ 
            tab[i]=W2[i];
        }
        return *this;
    }

    /*
     * \brief Konwertuje Wektor3D na Point3D
     * \return Point3D z danymi z Wektor3D
     */
    drawNS::Point3D Wek2Pt() {
        return drawNS::Point3D(tab[0] , tab[1] , tab[2]);
    }






};

#endif