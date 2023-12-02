#pragma once

ref class articles{
    private: 
        int Id_Article;
        System::String^ art_designation;
        int art_quantiteStock;
        int ar_seuilReapprovis;
        float art_prix;
        float art_tva;
    public:
        //get
        int get_Id_Article(void);
        System::String^ get_art_designation(void);
        int get_art_quantiteStock(void);
        int get_ar_seuilReapprovis(void);
        float get_art_prix(void);
        float get_art_tva(void);
        //set
        void Id_Article(int);
        void art_designation(System::String^);
        void art_quantiteStock(int);
        void ar_seuilReapprovis(int);
        void art_prix(float);
        void art_tva(float);
};