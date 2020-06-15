#ifndef TAFLA_HH
#define TAFLA_HH

#include "Plaszczyzna.hh"
/*!
 * \brief implementacja klasy Tafla dziedziczacej z Plaszczyzny
 */
class Tafla: public Plaszczyzna {

public:
    /*!
     * \brief Rysuje i tworzy tafle
     * \param api  api sceny
     * \param z punkt na osi z
     */
    void rysuj(shared_ptr<drawNS::Draw3DAPI> api, const double & z) override;
};

#endif