# Réalisation du projet

Pour gérer les abonnements et les comptes, j'ai implémenté quelques structures
telles que: subscription_t qui va enregistrer les differents types d'abonnement,
le nombre de crédit maximum, le prix mensuel.

Pour chaque abonnement d'un utilisateur on aura une structure member_activity_t
qui va quant à elle enregistrer l'activité de l'utlisateur les trois mois vu
qu'ils sont un engagement. Chaque mois contiendra le nombre de crédit utilisé
et le nombre maximum de crédit autorisé ce qui permet de transférer les credits
non utilisés au mois suivant.

Au lancement des programmes, on créé les collections, les membres, les vetements
et toutes les données nécessaires à l'exécution correcte des scenarios.
