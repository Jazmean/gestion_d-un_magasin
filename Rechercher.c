Produit* rechercherNom(Produit *debut, char *nom) {
    Produit *temp = debut;
    while (temp != NULL) {
        if (strcmp(temp->nom, nom) == 0)
            return temp;
        temp = temp->suivant;
    }
    return NULL;
}

void rechercherPartiel(Produit *debut, char *nom) {
    Produit *temp = debut;
    int trouve = 0;
   
    printf("\n=== RECHERCHE: %s ===\n", nom);
    while (temp != NULL) {
        if (strstr(temp->nom, nom) != NULL) {
            printf("%s - %.2f EUR - Stock: %d\n",
                   temp->nom, prixVente(temp->prixAchat, temp->margeGain),
                   temp->quantite);
            trouve = 1;
        }
        temp = temp->suivant;
    }
    if (!trouve) printf("Aucun produit trouve\n");
}

void rechercherCategorie(Produit *debut, char *categorie) {
    Produit *temp = debut;
    int trouve = 0;
   
    printf("\n=== CATEGORIE: %s ===\n", categorie);
    while (temp != NULL) {
        if (strcmp(temp->categorie, categorie) == 0) {
            printf("%s - %.2f EUR - Stock: %d\n",
                   temp->nom, prixVente(temp->prixAchat, temp->margeGain),
                   temp->quantite);
            trouve = 1;
        }
        temp = temp->suivant;
    }
    if (!trouve) printf("Aucun produit dans cette categorie\n");
}
