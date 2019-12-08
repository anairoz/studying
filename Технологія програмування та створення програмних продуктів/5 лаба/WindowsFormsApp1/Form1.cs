using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.IO;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();

        }


        

        private void button1_Click_1(object sender, EventArgs e)
        {
            Strichka A = new Strichka(richTextBox1.Text, textBox1.Text, textBox2.Text);
            A.Zamina();
            richTextBox2.Text = A.Get();
        }
    }
    public class Strichka
    {
        private string rjadok;
        private string slovo1;
        private string slovo2;

        public Strichka(string r,string sl1,string sl2)
        {
            rjadok = r;
            slovo1 = sl1;
            slovo2 = sl2;
        }
        public void Zamina()
        {
           rjadok= rjadok.Replace(slovo1, slovo2);
        }
        public string Get() { return rjadok; }
    }

    
}
