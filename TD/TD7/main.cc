///////////////////////////////////////////////////////////////////////////////
// main.cc
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cstdlib>
#include <string>
#include "Pile.h"
#include "token.h"
#include "main.h"

using namespace std;

// ----------------------------------------------------------------------------
// Quelques fonctions utiles.


//- Affiche le message [msg] sur la sortie standard et force l'arret du programme.
//- @param msg le message a afficher.
void erreur( const string & msg )
{
  cout << msg << endl;
  exit(1);
}

//- @return 'true' si l'expression [expr] est un operateur: /+-*
bool estUnOperateur( const string & expr )
{
  bool op = false;
  switch ( expr[ 0 ] ) // teste juste le premier caractere.
    {
    case '*': 
    case '/':
    case '+':
    case '-':
      op = true;
    }
  return op;
}

//- @return 'true' si l'expression [expr] est un nombre flottant.
bool estUnNombre( const string & expr )
{
  return isdigit( expr[ 0 ] ); // teste juste le premier caractere.
}

//- @return la valeur de l'expression numerique [expr_num].
//- NB: vous devez verifier avant avec la fonction 'estUnNombre' si vous
//- manipulez bien une expression numerique.
float valeur( const string & expr_num )
{
  return atof( expr_num.c_str() );
}

//- Retourne la priorite d'un operateur. Plus le nombre retourne est grand, 
//- plus l'operateur est prioritaire.
//- @param op un operateur.
//- @return la priorite de l'operateur [op].
int priorite( char op )
{
  int prio = 0;
  switch ( op )
    {
    case '*': 
    case '/':
      prio = 2;
      break;
    case '+':
    case '-':
      prio = 1;
    }
  return prio;
}

// ----------------------------------------------------------------------------
//- Exemple.
//- Decompose l'expression [expr_complete] en nombres, operateurs, et autres
//- (genre parentheses).
//- @param expr_complete une expression arithmetique.
void analyseExpr( string expr_complete )
{
  int indice = 0;
  string expr;
  
  // Prend la premiere expression.
  // NB: indice est incremente dans 'nextArg'.
  expr = nextArg( expr_complete, indice );
  while ( expr != "" )
  {
    if ( estUnNombre( expr ) )
      cout << "nombre : " << valeur( expr ) << endl;
    else if ( estUnOperateur( expr ) )
      cout << "operateur : " << expr << endl;
    else
      cout << "autres : " << expr << endl;

    // Prend l'expression suivante.
    // NB: indice est incremente dans 'nextArg'.
    expr = nextArg( expr_complete, indice );
  }
}


// ----------------------------------------------------------------------------
//- Exercice 1.
//- Objectif: Evaluer l'expression postfixee [expression].
//- @param expression une expression postfixee.
//- @return la valeur de l'expression [expression].
float evalExprPost( string expression )
{
  /*
  Pile <float> p;
  int indice = 0;
  string expr;
  expr = nextArg(expression,indice);
  while (expr != "")
    {
      if (estUnNombre(expr))
	p.empiler(valeur(expr));
      else if (estUnOperateur(expr))
	{
	  float vald = p.valeurSommet();p.depiler();
	  float valg = p.valeurSommet();p.depiler();
	  p.empiler(oper2(valg,expr[0],vald));
	}
`}
  */
  int a=0,b=0;
  char c;
  int indice = 0;
  string expr;
  
  // Prend la premiere expression.
  // NB: indice est incremente dans 'nextArg'.
  expr = nextArg( expression, indice );
  a=valeur(expr);
  while ( expr != "" )
  {
    expr = nextArg( expression, indice );
    if ( estUnNombre( expr ) )
      b = valeur(expr);
    else if ( estUnOperateur( expr ) )
      {
	c = expr[0];
	cout << "valeur de c: " << c << endl;
	switch (c) 
	  {
	  case '+': a = a + b;break;
	  case '-': a = a - b;break;
	  }
      }
    else
      cout << "autres : " << expr << endl;
  }
  cout << "la valeur de l'expression  = " << a << endl;
  
}
  */
//- Effectue l'operation [op] avec comme operande gauche [valg] et operande
//- droite [vald], puis retourne le resultat.
//- @param valg l'operande gauche.
//- @param op l'operateur ( '+', '-', '*', ou '/' ).
//- @param vald l'operande droite.
float oper2( float valg, char op, float vald )
{
  float val;
  switch (op)
    {
    case '*': val = valg*vald;
      break;
    case '/':
      assert(vald != 0.0);
      val = valg/vald;
      break;
    case '+': val = valg + vald;
      break;
    case '-': val = valg - vald;
      break;
    }
  return val;
}

// ----------------------------------------------------------------------------
//- Exercice 2.
//- Objectif: identique a l'exercice 1, sauf qu'il est demande de verifier 
//- l'integrite de l'expression [expression] donnee en entree.
//- Vous testerez entre autres que l'expression contient le bon nombre d'operateurs
//- pour le nombre d'operandes (et vice-versa). Vous pourrez aussi tester que
//- l'expression ne contient pas de symboles inconnus.
//- @param expression une expression postfixee.
//- @return la valeur de l'expression [expression].
float evalSecuriseeExprPost( string expression )
{

}

// ----------------------------------------------------------------------------
//- Exercice 3.
//- Objectif: transformer l'expression infixee [expression] en une expression 
//- postfixee. Dans cet exercice, [expression] ne contient pas de parentheses.
//- @param expression une expression infixee.
//- @return l'expression postfixee correspondante.
string exprInfVersExprPost( string expression )
{
  int a=0,b=0,d=0,prio=0;
  char c;
  int indice = 0;
  string expr;
  
  // Prend la premiere expression.
  // NB: indice est incremente dans 'nextArg'.
  expr = nextArg( expression, indice );
  a=valeur(expr);
  while ( expr != "" )
    {
      expr = nextArg( expression, indice );
      if ( estUnNombre( expr ) )
	b = valeur(expr);
      else if ( estUnOperateur( expr ) )
	{
	  if (priorite(expr[0]) == 1 && prio == 0)
	    {
	      c = expr[0];
	      prio++;
	      continue;
	    }
	  else if (priorite(expr[0]) == 1)
	    {
	      switch (c) 
		{
		case '+': a = a + b;break;
		case '-': a = a - b;break;
		}
	    }
	  else if (priorite(expr[0]) == 2 && prio ==1)
	    {
	      d = nextArg( expression, indice );
	      switch (expr[0])
		{
		case '*': b = d * b;break;
		case '/': d = d / b;
		  b = d;
		  break;
		} 
	    }
	   else if (priorite(expr[0]) == 2 && prio ==0)
	     {
	       

}
    else
      cout << "autres : " << expr << endl;
    }
  cout << "la valeur de l'expression  = " << a << endl;
  
}
 


// ----------------------------------------------------------------------------
//- Exercice 4.
//- Objectif: transformer l'expression infixee [expression] en une expression 
//- postfixee. Dans cet exercice, [expression] peut contenir des parentheses.
//- @param expression une expression infixee.
//- @return l'expression postfixee correspondante.
string exprInfVersExprPost2( string expression )
{
  // TO DO. 
}

//- Programme principal.
int main()
{
  string expression;
  
  // Demande a l'utilisateur d'entrer une expression sur une ligne.
  getline( cin, expression );
  
  cout << "expression : " << expression << endl;
 
 // Decompose l'expression.
  analyseExpr( expression );

  // Evaluation, ... => A faire.
  evalExprPost(expression);
  return 0;
}
