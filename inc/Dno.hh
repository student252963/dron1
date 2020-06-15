#ifndef DNO_HH
#define DNO_HH

#include "Plaszczyzna.hh"
/*!
 * \brief implementacja klasy Dno dziedziczacej z Plaszczyzny
 */
class Dno: public Plaszczyzna {

public:
    /*!
     * \brief Rysuje i tworzy dno
     * \param api  api sceny
     * \param z punkt na osi z
     */
    void rysuj(shared_ptr<drawNS::Draw3DAPI> api, const double & z) override;
};

#endif