//********************************************************************************************************************************************************************************
//
// fichier : CPt2D.cpp
//
// class : CPt2D
//
//********************************************************************************************************************************************************************************
//25-01-2019 LAMOUR Anthony
//29-01-2019 LAMOUR Anthony
//********************************************************************************************************************************************************************************

#include "CPoint2D.h"

//mutatuer et assesseur
float CPoint2D::getPtX() const
{
	return this->fltX;
}

void CPoint2D::setPtX(float const& fltX)
{
	this->fltX = fltX;
}

float CPoint2D::getPtY() const
{
	return this->fltY;
}

void CPoint2D::setPtY(float const& fltY)
{
	this->fltY = fltY;
}

//constructeur
CPoint2D::CPoint2D()
{
	this->fltX = 0.0;
	this->fltY = 0.0;
}

//destructeur
CPoint2D::~CPoint2D()
{
}