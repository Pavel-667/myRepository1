using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.SqlClient;

namespace MyWork2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button2_Click(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            string connect = "data source=vc-stud-mssql1;initial catalog=user94_db;persist security info=True;user id=user94_db;password=user94;MultipleActiveResultSets=True;App=EntityFramework";

            SqlConnection myConnection = new SqlConnection(@connect);

            myConnection.Open();

      
            string command = "Select * from Priyt where Klichka='" + textBox1.Text + "' and Paroda='" + textBox2.Text + "' and Age='" + textBox3.Text + "' and Ves='" + textBox4.Text + "' and Rost='" + textBox5.Text + "'";




      
            string sInsSql = "Insert into Priyt(Klichka, Paroda, Age, Ves, Rost) Values('{0}', '{1}', '{2}')";

    
            string Klichka = textBox1.Text;
            string Paroda = textBox2.Text;
            string Age = textBox3.Text;
            string Ves = textBox4.Text;
            string Rost = textBox5.Text;
       
            string sInsSotr = string.Format(sInsSql, Klichka, Paroda, Age, Ves, Rost);

         
            SqlCommand cmdIns = new SqlCommand(sInsSotr, myConnection);

          
            cmdIns.ExecuteNonQuery();

        
            MessageBox.Show(string.Format("[Поле] {0} успешно добавлено", Klichka), "Сообщение");

 
        }
    }
}
