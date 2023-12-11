using System;
using System.Data.SqlClient;
using NS_Comp_MappageUtilisateur;
using System.Data;
using System.Transactions;
namespace Test_POO
{
 

    public class Tests
    {
        private utilisateur MesUtilisateur;

        public Tests()
        {
            MesUtilisateur = new utilisateur();
            MesUtilisateur.set_Id_Client(1);
            MesUtilisateur.set_adr_num("1");
            MesUtilisateur.set_adr_rue("rue");
            MesUtilisateur.set_adr_postalcode("76000");
            MesUtilisateur.set_cit_nom("ville");
            MesUtilisateur.set_reg_nom("region");
            MesUtilisateur.set_pay_nom("pays");
            MesUtilisateur.set_uti_nom("nom");
            MesUtilisateur.set_uti_prenom("prenom");
            MesUtilisateur.set_uti_dateNaissance("date");

        }
        [Test]
        public void TestSelect()
        {
            string sqlQuery = MesUtilisateur.SelectHumain();
            Assert.AreEqual("exec SelectHumain;", sqlQuery);

        }


        [Test]
        public void TestInsert()
        {
            // Arrange

            // Act
            string sqlQuery = MesUtilisateur.Insert();

            // Assert
            Assert.AreEqual("EXEC InsertClient @adr_num = '1',@adr_rue = 'rue', @adr_postalcode = '76000', @cit_nom = 'ville', @reg_nom = 'region', @pay_nom = 'pays', @uti_nom = 'nom', @uti_prenom = 'prenom', @uti_dateNaissance = 'date';", sqlQuery);
        }
        [Test]
        public void TestSuprimer()
        {
            string sqlQuery = MesUtilisateur.Delete();
            Assert.AreEqual("DECLARE @Id_ClientToDelete INT = ' 1' ;DELETE FROM CONTENIR WHERE Id_Commande IN(SELECT Id_Commande FROM COMMANDES WHERE Id_Client = @Id_ClientToDelete);DELETE FROM COMMANDES WHERE Id_Client = @Id_ClientToDelete;DELETE FROM CLIENTS WHERE Id_Client = @Id_ClientToDelete;", sqlQuery);
            
        }
        [Test]
        public void TestModifier()
        {
            string sqlQuery = MesUtilisateur.Update();
            Assert.AreEqual("EXEC UpdateClient @ClientId = '1', @adr_num = '1', @adr_rue = 'rue', @adr_postalcode = '76000', @cit_nom = 'ville', @reg_nom = 'region', @pay_nom = 'pays', @uti_nom = 'nom', @uti_prenom = 'prenom', @uti_dateNaissance = 'date';", sqlQuery);
        }
    }
}



