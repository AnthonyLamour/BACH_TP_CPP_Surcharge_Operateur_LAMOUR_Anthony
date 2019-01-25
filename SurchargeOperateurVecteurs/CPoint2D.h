//********************************************************************************************************************************************************************************
//
// fichier : CPt2D.h
//
// description : Gestion de point 2D
//
// attributs : float fltX, float fltY
//
// class : CPt2D
//
//********************************************************************************************************************************************************************************
//25-01-2019 LAMOUR Anthony
//25-01-2019 LAMOUR Anthony
//********************************************************************************************************************************************************************************

#pragma once

class CPoint2D {

	//donnee membre
private:
	float fltX;
	float fltY;

	//focntion membre
public:

	//mutateur et assesseur
	float getPtX()const;
	void setPtX(float fltX);
	float getPtY()const;
	void setPtY(float fltY);

	//constructeur
	CPoint2D();

	//destructeur
	~CPoint2D();
};
