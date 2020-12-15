//
//  Menu.cpp
//  Projet POO ISEN
//
//  Created by Valette Guillaume and Fantin Anthony on 13/12/2020.
//  Copyright © 2020 Valette Guillaume and Fantin Anthony . All rights reserved.
//
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<iostream>
#include<vector>
#include"Menu.h"
#include "Figure.h"
#include "Croix.h"
#include "Point.h"
#include "Rectangle.h"
#include "Carre.h"
#include "Segment.h"
using namespace std;

void Menu::run(void)
{
Drawing draw(100,100);
int n=0;
int m=0;
int vh=0;
int largeur=0;
int longueur=0;
int centrex=0;
int centrey=0;
int edit=0;
int boucle=0;
bool vide;
system("clear");
cout<<"**********************************************************************"<<endl;
sleep(1);
cout<<"                       BIENVENUE"<<endl;
cout<<"                 dans l'editeur d'images"<<endl;
sleep(1);
cout<<"**********************************************************************"<<endl;
sleep(1);
do{
  m=Menu1();


switch (m) 
    {
    case 1:{
        do{
        system("clear");
        cout<<"Choisissez la figure a dessiner"<<endl;
        sleep(1);
        cout<<"1. Carre"<<endl;
        cout<<"2. Rectangle"<<endl;
        cout<<"3. Croix"<<endl;
        cout<<"4. Segment"<<endl;
        cout<<"5. quitter"<<endl;
        cin>>n;
        

        switch (n) 
        {
        case 1:{
        cout<<"Quelle largeur souhaitez vous ?"<<endl;
        cin>>largeur;
        cout<<"choisir l abcisse du coin haut gauche"<<endl;
        cin>>centrex;
        cout<<"choisir l ordonnee du coin haut gauche"<<endl;
        cin>>centrey;
        if(centrex+largeur>100)
        {cout<<"Impossible de placer la figure elle dépasserait"<<endl;}
        else{
        Point p(centrex,centrey);
        Carre *carre= new Carre(largeur,p);
        draw.Tabx.push_back(largeur);
        draw.Taby.push_back(largeur);
        draw.TabFigure.push_back(carre);
        }
        }break;
        
        case 2:{
        cout<<"Quelle largeur souhaitez vous ?"<<endl;
        cin>>largeur;
        cout<<"Quelle longueur souhaitez vous ?"<<endl;
        cin>>longueur;
        cout<<"choisir l abcisse du coin haut gauche"<<endl;
        cin>>centrex;
        cout<<"choisir l ordonnee du coin haut gauche"<<endl;
        cin>>centrey;
        if((centrex+largeur>100)||(centrey+longueur>100))
        {cout<<"Impossible de placer la figure elle dépasserait"<<endl;}
        else{
        Point p(centrex,centrey);
        Rectangle *rectangle= new Rectangle(largeur,longueur,p);
        draw.Tabx.push_back(largeur);
        draw.Taby.push_back(longueur);
        draw.TabFigure.push_back(rectangle);
        
        }
        }break;
 
        case 3:{
        cout<<"Quelle largeur souhaitez vous (valeur impair)?"<<endl;
        cin>>largeur;
        cout<<"choisir l abcisse du coin haut gauche"<<endl;
        cin>>centrex;
        cout<<"choisir l ordonnee du coin haut gauche"<<endl;
        cin>>centrey;
        if((centrex+largeur>100)||(centrey+largeur>100)||(largeur %2==0))
        {cout<<"Impossible de placer la figure elle dépasserait"<<endl;}
        else{
        Point p(centrex,centrey);
        Croix *croix= new Croix(largeur,largeur,p);
        draw.Tabx.push_back(largeur);
        draw.Taby.push_back(largeur);
        draw.TabFigure.push_back(croix);
        
        }
        }break;  
        case 4:{
        cout<<"Quelle longueur souhaitez vous ?"<<endl;
        cin>>largeur;
        cout<<"choisir 1.Vertical 2.Horizontal"<<endl;
        cin>>vh;
        cout<<"choisir l abcisse du coin haut gauche"<<endl;
        cin>>centrex;
        cout<<"choisir l ordonnee du coin haut gauche"<<endl;
        cin>>centrey;
        if((centrex+largeur>100)||(centrey+largeur>100))
        {cout<<"Impossible de placer la figure elle dépasserait"<<endl;}
        else{
        Point p(centrex,centrey);
        if(vh==1){
        Segment *segment= new Segment(largeur,2,p);
        draw.Tabx.push_back(largeur);
        draw.Taby.push_back(2);
        draw.TabFigure.push_back(segment);
        }else{
        Segment *segment= new Segment(largeur,2,p);
        draw.Tabx.push_back(2);
        draw.Taby.push_back(largeur);
        draw.TabFigure.push_back(segment);       
        }}
        }break;
        case 5:{
        cout<<"vous quittez l'édition"<<endl;
        edit=1;
        }break;    
        default:{
        cout<<"Erreur"<<endl;}
        }
        draw.save(std::string("test_image.bmp"));
        }while(edit==0);
        }break;
    case 2:
        vide=draw.TabFigure.empty();
        if(vide)
        {cout<<"Il n'y a pas de figures a afficher"<<endl;}
        else{
        draw.draw();
        draw.save(std::string("test_image.bmp"));
        cout<<"Image cree sous le nom test_image.bmp"<<endl;
        }break;
    case 3:
        cout<<"Aller Tchao "<<endl;
        boucle=1;
        m= 1;
        break;
    default:
        cout<<"Erreur: Rentrer un nombre valide"<<endl;
    }
}while( (m != 1 && m != 2 && m != 3) || (boucle==0));
}

int Menu::Menu1()
{
int choix;

cout<<"1. Editeur de Figures"<<endl;
cout<<"2. sauvegarde de l'image"<<endl;
cout<<"3. Quitter"<<endl;
cin>>choix;
return choix;
}
