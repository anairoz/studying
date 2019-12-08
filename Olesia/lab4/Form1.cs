using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace lab4
{
    public partial class Form1 : Form
    {
        List<Tabel> listTabels = new List<Tabel>();

        public Form1()
        {
            InitializeComponent();
        }

        private void Button1_Click(object sender, EventArgs e)
        {
            Tabel newWorker = new Tabel();
            newWorker.firstName = textBox1.Text;
            newWorker.secondName = textBox2.Text;
            newWorker.tableNumber = Convert.ToInt32(textBox3.Text);
            newWorker.codeOfPosition = Convert.ToInt32(textBox4.Text);
            newWorker.countOfHours = Convert.ToInt32(textBox5.Text);

            listTabels.Add(newWorker);

            textBox1.Clear();
            textBox2.Clear();
            textBox3.Clear();
            textBox4.Clear();
            textBox5.Clear();
        }

        private void Button2_Click(object sender, EventArgs e)
        {
            Normativ norm = new Normativ();

            for (int i = 0; i < listTabels.Count; i++)
            {
                textBox6.Text += "Ім'я: " + listTabels[i].firstName + Environment.NewLine;
                textBox6.Text += "Прізвище: " + listTabels[i].secondName + Environment.NewLine;
                textBox6.Text += "Табельний номер: " + listTabels[i].tableNumber + Environment.NewLine;
                textBox6.Text += "Код посади: " + listTabels[i].codeOfPosition + Environment.NewLine;

                switch (listTabels[i].codeOfPosition)
                {
                    case 1:
                        textBox6.Text += "Зарплата: " + (listTabels[i].countOfHours * norm.firstPosition);
                        break;

                    case 2:
                        textBox6.Text += "Зарплата: " + (listTabels[i].countOfHours * norm.secondPosition);
                        break;

                    case 3:
                        textBox6.Text += "Зарплата: " + (listTabels[i].countOfHours * norm.thirdPosition);
                        break;

                    case 4:
                        textBox6.Text += "Зарплата: " + (listTabels[i].countOfHours * norm.fourthPosition);
                        break;

                    case 5:
                        textBox6.Text += "Зарплата: " + (listTabels[i].countOfHours * norm.fifthPosition);
                        break;
                }

                textBox6.Text += Environment.NewLine + Environment.NewLine;
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
         
            Normativ norm = new Normativ();

            int n1 = Convert.ToInt32(textBox7.Text);
            int n2 = Convert.ToInt32(textBox8.Text);

            int sum = 0;
            for (int i = 0; i < listTabels.Count; i++)
            {
                if (listTabels[i].tableNumber >= n1 && listTabels[i].tableNumber <= n2)
                {
                    switch (listTabels[i].codeOfPosition)
                    {
                        case 1:
                            sum += listTabels[i].countOfHours * norm.firstPosition;
                            break;

                        case 2:
                            sum += listTabels[i].countOfHours * norm.secondPosition;
                            break;

                        case 3:
                            sum += listTabels[i].countOfHours * norm.thirdPosition;
                            break;

                        case 4:
                            sum += listTabels[i].countOfHours * norm.fourthPosition;
                            break;

                        case 5:
                            sum += listTabels[i].countOfHours * norm.fifthPosition;
                            break;
                    }
                }
            }
            textBox6.Text += Environment.NewLine + "*****************************" + Environment.NewLine;
            textBox6.Text += "Сума зарплат працівників по табельному номеру в заданих границях: " + sum + Environment.NewLine;
            textBox6.Text += "*****************************" + Environment.NewLine;
        } }
    
}
