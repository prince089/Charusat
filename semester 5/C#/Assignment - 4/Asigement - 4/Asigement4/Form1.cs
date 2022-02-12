using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Asigement4
{
    public partial class cbhockey : Form
    {
        public cbhockey()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {
            cbcity.Items.Add("tokyo");
            cbcity.Items.Add("barlin");
            cbcity.Items.Add("moskow");
            cbcity.Items.Add("niroby");

        }

        private void btSave_Click(object sender, EventArgs e)
        {
            if (tbfname.Text == "" && tblname.Text == "" && tbmname.Text == "" && tbdob.Text == "" && tbs1.Text == "" && tbs2.Text == "" && tbs3.Text == "")
            {
                MessageBox.Show("Enter details first");



            }

            else {
               
                double sum = 0,s1=0,s2=0,s3=0;
                try
                {
                    s1 = int.Parse(tbs1.Text);
                    s2 = int.Parse(tbs2.Text);
                    s3 = int.Parse(tbs3.Text);


                }
                catch
                {
                    MessageBox.Show("pls insert only numeric value");
                }
                sum = s1 + s2 + s3;

                double per = sum / 3;
                lbper.Text = Convert.ToString( per);
                if (per > 90) {
                    lbclass.Text = "distinction";
                    lbresult.Text = "pass";
                }
                else if (per > 80) {
                    lbclass.Text = "first";
                    lbresult.Text = "pass";

                }
                else if (per > 70)
                {
                    lbclass.Text = "second";
                    lbresult.Text = "pass";
                }
                else if (per > 60)
                {
                    lbclass.Text = "pass";
                    lbresult.Text = "pass";
                }
                else
                {
                    lbclass.Text = "fail";
                    lbresult.Text = "fail";
                }





                DateTime d2 = Convert.ToDateTime(tbdob.Text);
                if (d2 > DateTime.Today) {
                    MessageBox.Show("please enetr valid date");

                }




            }
        }

        private void cbcity_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void btExit_Click(object sender, EventArgs e)
        {
            System.Environment.Exit(0);
        }

        private void btReset_Click(object sender, EventArgs e)
        {
            for (int i = 0; i < this.Controls.Count; i++)
            {
                this.Controls[i].ResetText();
            }
        }
    }
    }

