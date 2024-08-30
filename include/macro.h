/*
** Colimaters PROJECT, 2018
** macro.h
** File description:
** Usefull macro
*/

/**
 * \file macro.h
 * \brief File containing all project macros and constants
 * \author Colimaters
 */

#ifndef MACRO_H_
#define MACRO_H_

#define SUCCESS 0 /*!< In case of success */
#define FAILURE 84 /*!< In case of error */

// Conditions
#define si if                   /*!< Pour coder en français */
#define sinon else              /*!< Pour coder en français */
#define tantque while           /*!< Pour coder en français */
#define pour for                /*!< Pour coder en français */
#define faire do                /*!< Pour coder en français */
#define cas case                /*!< Pour coder en français */
#define commutateur switch      /*!< Pour coder en français */

// Mots-clés
#define retour return       /*!< Pour coder en français */
#define casser break        /*!< Pour coder en français */
#define continuer continue  /*!< Pour coder en français */
#define allera goto  /*!< Pour coder en français */
#define taillede sizeof     /*!< Pour coder en français */
#define définitiontype typedef /*!< Pour coder en français */
#define nomdutype typename  /*!< Pour coder en français */
#define structure struct    /*!< Pour coder en français */
#define statique static     /*!< Pour coder en français */
#define constant const      /*!< Pour coder en français */
#define enumeration enum      /*!< Pour coder en français */
#define registre register      /*!< Pour coder en français */

// Valeurs
#define vrai true  /*!< Pour coder en français */
#define faux false /*!< Pour coder en français */
#define nulle NULL /*!< Pour coder en français */

// Variables
#define vide void /*!< Pour coder en français */
#define booléen bool /*!< Pour coder en français*/
#define character char /*!< Pour coder en français*/
#define court short /*!< Pour coder en français*/
#define intégral int /*!< Pour coder en français*/
#define flottant float /*!< Pour coder en français*/
#define signer signed /*!< Pour coder en français*/
#define nonssigner unsigned /*!< Pour coder en français*/


// Opérateurs
#define additionne +        /*!< Pour coder en français */
#define soustrait -        /*!< Pour coder en français */
#define multiplie *        /*!< Pour coder en français */
#define divise /        /*!< Pour coder en français */
#define égale =        /*!< Pour coder en français */
#define estégaleà ==        /*!< Pour coder en français */
#define et &&        /*!< Pour coder en français */
#define ou ||        /*!< Pour coder en français */
#define non !        /*!< Pour coder en français */
#define différent != /*!< Pour coder en français */

// Utils
#define pourtoujours for (;;)   /*!< Pour coder en français */
#define boucleinfinie while (1) /*!< Pour coder en français */

#endif /* MACRO_H_ */
