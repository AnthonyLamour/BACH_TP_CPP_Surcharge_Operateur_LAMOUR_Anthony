//********************************************************************************************************************************************************************************
//
// fichier : CVect2D.h
//
// description : Gestion de vecteur 2D
//
// attributs : float fltX, float fltY
//
// class : CVect2D
//
//********************************************************************************************************************************************************************************
//25-01-2019 LAMOUR Anthony
//29-01-2019 LAMOUR Anthony
//********************************************************************************************************************************************************************************

#pragma once
#include <math.h>
#include "CPoint2D.h"

class CVect2D {

	//donnee membre
private:
	float fltX;
	float fltY;

	//focntion membre
public:

	//mutateur et assesseur
	float getVectX()const;
	void setVectX(float const& fltX);
	float getVectY()const;
	void setVectY(float const& fltY);

	//constructeur sans paramètre
	CVect2D();
	//constructeur avec paramètre par défaut
		//CVect2D(float fltX, float fltY = 15.0f);
	//constructeur  avec paramètre
	CVect2D(float fltX, float fltY);

	//destructeur
	~CVect2D();

	//addition de vecteur
	CVect2D operator +(CVect2D const& CVect);
	//soustraction de vecteur
	CVect2D operator -(CVect2D const& CVect);
	//porduit scalaire Reel
	CVect2D operator *(float const& fltAlpha);
	//porduit scalaire Vecteur
	float operator *(CVect2D const& CVect);
	//égalité
	bool operator ==(CVect2D const& CVect);
	//norme
	float norme(CPoint2D const& CPtDebut, CPoint2D const& CPtFin);
};
