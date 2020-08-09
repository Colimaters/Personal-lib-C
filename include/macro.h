/*
** EPITECH PROJECT, 2018
** macro.h
** File description:
** Usefull macro
*/

/**
 * \file macro.h
 * \brief File containing all project macros and constants
 * \author Darius.M
 */

#ifndef MACRO_H_
#define MACRO_H_

/**
 * \brief In case of success
 */
#define SUCCESS 0

/**
 * \brief In case of error
 */
#define FAILURE 84

//Conditions
#define si if                   /*!< To code in French */
#define sinon else              /*!< To code in French */
#define tantque while           /*!< To code in French */
#define pour for                /*!< To code in French */
#define faire do                /*!< To code in French */
#define cas case                /*!< To code in French */
#define commutateur switch      /*!< To code in French */

//Mots-clés
#define retour return           /*!< To code in French */
#define casser break            /*!< To code in French */
#define continuer continue      /*!< To code in French */
#define taillede sizeof         /*!< To code in French */
#define statique static         /*!< To code in French */
#define constant const          /*!< To code in French */

//Valeurs
#define vrai true               /*!< To code in French */
#define faux false              /*!< To code in French */

//Variables
#define vide void               /*!< To code in French */

//Opérateurs
#define et &&                   /*!< To code in French */
#define ou ||                   /*!< To code in French */

//Utils
#define pourtoujours for (;;)   /*!< To code in French */
#define boucleinfinie while (1) /*!< To code in French */

#endif /* MACRO_H_ */
