//********************************************************************************************************************************************************************************
//
// fichier : CVect2D.cpp
//
// class : CVect2D
//
//********************************************************************************************************************************************************************************
//25-01-2019 LAMOUR Anthony
//29-01-2019 LAMOUR Anthony
//********************************************************************************************************************************************************************************

#include "CVect2D.h"

//mutateur et assesseur
float CVect2D::getVectX() const
{
	return this->fltX;
}
void CVect2D::setVectX(float const& fltX)
{
	this->fltX = fltX;
}
float CVect2D::getVectY() const
{
	return this->fltY;
}
void CVect2D::setVectY(float const& fltY)
{
	this->fltY = fltY;
}

//constructeur sans paramètres
CVect2D::CVect2D()
{
	this->fltX = 5.0f;
	this->fltY = 5.0f;
}

//constructeur avec paramètres
CVect2D::CVect2D(float fltX, float fltY)
{
	this->fltX = fltX;
	this->fltY = fltY;
}

//constructeur avec paramètres par défaut
	/*CVect2D::CVect2D(float fltX, float fltY= 15.0f)
	{
		this->fltX = fltX;
		this->fltY = fltY;
	}*/

//destructeur
CVect2D::~CVect2D()
{



}

//addition
CVect2D CVect2D::operator+(CVect2D const& CVect)
{
	CVect2D CVectRes;
	CVectRes.fltX = this->fltX + CVect.getVectX();
	CVectRes.fltY = this->fltY + CVect.getVectY();
	return CVectRes;
}

//soustraction
CVect2D CVect2D::operator-(CVect2D const& CVect)
{
	CVect2D CVectRes;
	CVectRes.fltX = this->fltX - CVect.getVectX();
	CVectRes.fltY = this->fltY - CVect.getVectY();
	return CVectRes;
}

//scalaire Reel
CVect2D CVect2D::operator*(float const& fltAlpha)
{
	CVect2D CVectRes;
	CVectRes.fltX = fltAlpha * this->fltX;
	CVectRes.fltY = fltAlpha * this->fltY;
	return CVectRes;
}

//scalaire Vect
float CVect2D::operator*(CVect2D const& CVect)
{
	float fltRes;
	fltRes = (this->fltX * CVect.getVectX() + this->fltY * CVect.getVectY());
	return fltRes;
}

//égalité
bool CVect2D::operator==(CVect2D const& CVect)
{
	bool res = false;
	if (this->fltX == CVect.fltX && this->fltY == CVect.fltY) {
		res = true;
	}
	return res;
}

//norme
float CVect2D::norme(CPoint2D const& CPtDebut, CPoint2D const& CPtFin)
{
	float fltRes;
	fltRes = sqrt(pow((CPtFin.getPtX() - CPtDebut.getPtX()), 2) + pow((CPtFin.getPtY() - CPtDebut.getPtY()), 2));
	return fltRes;
}