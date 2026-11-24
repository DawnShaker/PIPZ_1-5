#pragma once

#using <System.dll>
#using <System.Drawing.dll>
#using <System.Windows.Forms.dll>
#using <System.Data.dll>
#using <System.Windows.Forms.DataVisualization.dll>

namespace LAB3
{
    using namespace System;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Windows::Forms;
    using namespace System::Windows::Forms::DataVisualization::Charting;

    public ref class MyForm : public Form
    {
    private:
        Label^ labelTitle;

        Label^ labelXn;
        Label^ labelXk;
        Label^ labelDx;
        Label^ labelZ;
        Label^ labelK;
        Label^ labelQ;

        TextBox^ textBoxXn;
        TextBox^ textBoxXk;
        TextBox^ textBoxDx;
        TextBox^ textBoxZ;
        TextBox^ textBoxK;
        TextBox^ textBoxQ;

        Button^ buttonCalculate;
        Button^ buttonClear;
        Button^ buttonExit;

        DataGridView^ dataGridView1;
        Chart^ chart1;
        PictureBox^ pictureBox1;

    public:
        MyForm()
        {
            InitializeComponent();
            DrawFormula();
        }

    protected:
        ~MyForm()
        {
        }

    private:
        void InitializeComponent()
        {

            this->Text = "Кукіль Данило іпз-25";

            this->Size = System::Drawing::Size(1100, 720);

            this->StartPosition =
                System::Windows::Forms::FormStartPosition::CenterScreen;

            this->MinimumSize = System::Drawing::Size(1000, 650);

            this->BackColor = Color::WhiteSmoke;

            this->labelTitle = gcnew Label();

            this->labelTitle->Text =
                "Обчислення значень функції. Варіант 13";

            this->labelTitle->Font =
                gcnew System::Drawing::Font(
                    "Segoe UI",
                    16,
                    FontStyle::Bold
                );

            this->labelTitle->AutoSize = true;
            this->labelTitle->Location = Point(25, 20);

            this->Controls->Add(this->labelTitle);

            this->labelXn = gcnew Label();
            this->labelXn->Text = "Xn:";
            this->labelXn->AutoSize = true;
            this->labelXn->Location = Point(30, 80);

            this->Controls->Add(this->labelXn);

            this->textBoxXn = gcnew TextBox();
            this->textBoxXn->Location = Point(100, 76);
            this->textBoxXn->Size = System::Drawing::Size(100, 25);
            this->textBoxXn->Text = "-2";

            this->Controls->Add(this->textBoxXn);

            this->labelXk = gcnew Label();
            this->labelXk->Text = "Xк:";
            this->labelXk->AutoSize = true;
            this->labelXk->Location = Point(30, 120);

            this->Controls->Add(this->labelXk);

            this->textBoxXk = gcnew TextBox();
            this->textBoxXk->Location = Point(100, 116);
            this->textBoxXk->Size = System::Drawing::Size(100, 25);
            this->textBoxXk->Text = "2";

            this->Controls->Add(this->textBoxXk);

            this->labelDx = gcnew Label();
            this->labelDx->Text = "dX:";
            this->labelDx->AutoSize = true;
            this->labelDx->Location = Point(30, 160);

            this->Controls->Add(this->labelDx);

            this->textBoxDx = gcnew TextBox();
            this->textBoxDx->Location = Point(100, 156);
            this->textBoxDx->Size = System::Drawing::Size(100, 25);
            this->textBoxDx->Text = "1";

            this->Controls->Add(this->textBoxDx);

            this->labelZ = gcnew Label();
            this->labelZ->Text = "z:";
            this->labelZ->AutoSize = true;
            this->labelZ->Location = Point(230, 80);

            this->Controls->Add(this->labelZ);

            this->textBoxZ = gcnew TextBox();
            this->textBoxZ->Location = Point(280, 76);
            this->textBoxZ->Size = System::Drawing::Size(100, 25);
            this->textBoxZ->Text = "1";

            this->Controls->Add(this->textBoxZ);

            this->labelK = gcnew Label();
            this->labelK->Text = "k:";
            this->labelK->AutoSize = true;
            this->labelK->Location = Point(230, 120);

            this->Controls->Add(this->labelK);

            this->textBoxK = gcnew TextBox();
            this->textBoxK->Location = Point(280, 116);
            this->textBoxK->Size = System::Drawing::Size(100, 25);
            this->textBoxK->Text = "0,5";

            this->Controls->Add(this->textBoxK);

            this->labelQ = gcnew Label();
            this->labelQ->Text = "Q:";
            this->labelQ->AutoSize = true;
            this->labelQ->Location = Point(230, 160);

            this->Controls->Add(this->labelQ);

            this->textBoxQ = gcnew TextBox();
            this->textBoxQ->Location = Point(280, 156);
            this->textBoxQ->Size = System::Drawing::Size(100, 25);
            this->textBoxQ->Text = "0";

            this->Controls->Add(this->textBoxQ);

            this->buttonCalculate = gcnew Button();

            this->buttonCalculate->Text = "Розрахувати";

            this->buttonCalculate->Location = Point(420, 75);

            this->buttonCalculate->Size =
                System::Drawing::Size(130, 35);

            this->buttonCalculate->Click +=
                gcnew EventHandler(
                    this,
                    &MyForm::buttonCalculate_Click
                );

            this->Controls->Add(this->buttonCalculate);

            this->buttonClear = gcnew Button();

            this->buttonClear->Text = "Очистити";

            this->buttonClear->Location = Point(420, 120);

            this->buttonClear->Size =
                System::Drawing::Size(130, 35);

            this->buttonClear->Click +=
                gcnew EventHandler(
                    this,
                    &MyForm::buttonClear_Click
                );

            this->Controls->Add(this->buttonClear);

            this->buttonExit = gcnew Button();

            this->buttonExit->Text = "Вихід";

            this->buttonExit->Location = Point(420, 165);

            this->buttonExit->Size =
                System::Drawing::Size(130, 35);

            this->buttonExit->Click +=
                gcnew EventHandler(
                    this,
                    &MyForm::buttonExit_Click
                );

            this->Controls->Add(this->buttonExit);

            this->pictureBox1 = gcnew PictureBox();

            this->pictureBox1->Location = Point(580, 70);

            this->pictureBox1->Size =
                System::Drawing::Size(470, 130);

            this->pictureBox1->BorderStyle =
                BorderStyle::FixedSingle;

            this->pictureBox1->BackColor = Color::White;

            this->pictureBox1->SizeMode =
                PictureBoxSizeMode::CenterImage;

            this->Controls->Add(this->pictureBox1);





            this->dataGridView1 = gcnew DataGridView();

            this->dataGridView1->Location = Point(30, 230);

            this->dataGridView1->Size =
                System::Drawing::Size(420, 400);

            this->dataGridView1->AllowUserToAddRows = false;

            this->dataGridView1->AllowUserToDeleteRows = false;

            this->dataGridView1->ReadOnly = true;

            this->dataGridView1->AutoSizeColumnsMode =
                DataGridViewAutoSizeColumnsMode::Fill;

            this->dataGridView1->RowHeadersVisible = false;

            this->Controls->Add(this->dataGridView1);


            this->chart1 = gcnew Chart();

            this->chart1->Location = Point(480, 230);

            this->chart1->Size =
                System::Drawing::Size(570, 400);

            ChartArea^ chartArea = gcnew ChartArea("ChartArea1");

            chartArea->AxisX->Title = "x";
            chartArea->AxisY->Title = "y";

            chartArea->AxisX->MajorGrid->LineColor =
                Color::LightGray;

            chartArea->AxisY->MajorGrid->LineColor =
                Color::LightGray;

            chartArea->AxisX->Crossing = 0;
            chartArea->AxisY->Crossing = 0;

            this->chart1->ChartAreas->Add(chartArea);


            Series^ series = gcnew Series("y(x)");

            series->ChartType =
                SeriesChartType::Line;

            series->BorderWidth = 2;

            series->XValueType =
                ChartValueType::Double;

            series->YValueType =
                ChartValueType::Double;

            this->chart1->Series->Add(series);


            Title^ chartTitle =
                gcnew Title("Графік функції y(x)");

            chartTitle->Font =
                gcnew System::Drawing::Font(
                    "Segoe UI",
                    12,
                    FontStyle::Bold
                );

            this->chart1->Titles->Add(chartTitle);

            this->Controls->Add(this->chart1);
        }


        void DrawFormula()
        {
            Bitmap^ bmp =
                gcnew Bitmap(
                    pictureBox1->Width,
                    pictureBox1->Height
                );

            Graphics^ g = Graphics::FromImage(bmp);

            g->Clear(Color::White);

            Brush^ brush = Brushes::Black;

            g->DrawString(
                "y =",
                gcnew System::Drawing::Font("Cambria Math", 16, FontStyle::Italic),
                brush,
                20.0F,
                45.0F
            );

            g->DrawString(
                "{",
                gcnew System::Drawing::Font("Cambria Math", 42, FontStyle::Regular),
                brush,
                55.0F,
                17.0F
            );

            g->DrawString(
                "5 * arctg(z),                 x > Q",
                gcnew System::Drawing::Font("Cambria Math", 15, FontStyle::Regular),
                brush,
                100.0F,
                25.0F
            );

            g->DrawString(
                "3 * (x - k) / (z^2 + x^2),   x <= Q",
                gcnew System::Drawing::Font("Cambria Math", 15, FontStyle::Regular),
                brush,
                100.0F,
                68.0F
            );

            pictureBox1->Image = bmp;
        }

        bool ReadDouble(TextBox^ textBox, double% value)
        {
            String^ text = textBox->Text->Trim();

            if (Double::TryParse(text, value))
            {
                return true;
            }

            text = text->Replace(',', '.');

            System::Globalization::CultureInfo^ culture =
                System::Globalization::CultureInfo::InvariantCulture;

            if (Double::TryParse(
                text,
                System::Globalization::NumberStyles::Float,
                culture,
                value))
            {
                return true;
            }

            return false;
        }

        void buttonCalculate_Click(
            System::Object^ sender,
            System::EventArgs^ e)
        {
            double Xn;
            double Xk;
            double dX;
            double z;
            double k;
            double Q;


            if (!ReadDouble(textBoxXn, Xn) ||
                !ReadDouble(textBoxXk, Xk) ||
                !ReadDouble(textBoxDx, dX) ||
                !ReadDouble(textBoxZ, z) ||
                !ReadDouble(textBoxK, k) ||
                !ReadDouble(textBoxQ, Q))
            {
                MessageBox::Show(
                    "Введіть коректні числові значення у всі поля.",
                    "Помилка введення",
                    MessageBoxButtons::OK,
                    MessageBoxIcon::Error
                );

                return;
            }

            if (dX == 0)
            {
                MessageBox::Show(
                    "Крок dX не може дорівнювати нулю.",
                    "Помилка",
                    MessageBoxButtons::OK,
                    MessageBoxIcon::Error
                );

                return;
            }


            if (Xn < Xk && dX < 0)
            {
                MessageBox::Show(
                    "Для Xн < Xк значення dX повинно бути додатним.",
                    "Помилка",
                    MessageBoxButtons::OK,
                    MessageBoxIcon::Error
                );

                return;
            }

            if (Xn > Xk && dX > 0)
            {
                MessageBox::Show(
                    "Для Xн > Xк значення dX повинно бути від'ємним.",
                    "Помилка",
                    MessageBoxButtons::OK,
                    MessageBoxIcon::Error
                );

                return;
            }

            DataTable^ table = gcnew DataTable();

            table->Columns->Add(
                "№",
                Int32::typeid
            );

            table->Columns->Add(
                "x",
                Double::typeid
            );

            table->Columns->Add(
                "y",
                Double::typeid
            );

            table->Columns->Add(
                "Умова",
                String::typeid
            );



            chart1->Series["y(x)"]->Points->Clear();


            int number = 1;
            int maxIterations = 100000;
            int iteration = 0;

            double epsilon = Math::Abs(dX) * 0.000001 + 1e-12;

            double x = Xn;

            while (
                (dX > 0 && x <= Xk + epsilon) ||
                (dX < 0 && x >= Xk - epsilon)
                )
            {
                if (iteration >= maxIterations)
                {
                    MessageBox::Show(
                        "Перевищено максимально допустиму кількість "
                        "ітерацій. Збільште крок dX.",
                        "Помилка",
                        MessageBoxButtons::OK,
                        MessageBoxIcon::Error
                    );

                    return;
                }

                double y;
                String^ condition;

                if (x > Q)
                {

                    y = 5.0 * Math::Atan(z);

                    condition = "x > Q";
                }
                else
                {

                    double denominator =
                        z * z + x * x;

                    if (Math::Abs(denominator) < 1e-12)
                    {
                        MessageBox::Show(
                            "При x = " +
                            x.ToString("F6") +
                            " знаменник z^2 + x^2 дорівнює нулю.\n"
                            "Обчислення неможливе.",
                            "Ділення на нуль",
                            MessageBoxButtons::OK,
                            MessageBoxIcon::Error
                        );

                        return;
                    }


                    y =
                        3.0 *
                        (x - k) /
                        denominator;

                    condition = "x <= Q";
                }


                DataRow^ row = table->NewRow();

                row["№"] = number;
                row["x"] = Math::Round(x, 6);
                row["y"] = Math::Round(y, 6);
                row["Умова"] = condition;

                table->Rows->Add(row);

                chart1
                    ->Series["y(x)"]
                    ->Points
                    ->AddXY(x, y);


                number++;
                iteration++;

                x = Xn + iteration * dX;
            }

            dataGridView1->DataSource = table;


            dataGridView1->Columns["x"]
                ->DefaultCellStyle->Format = "F4";

            dataGridView1->Columns["y"]
                ->DefaultCellStyle->Format = "F6";
            chart1->ChartAreas["ChartArea1"]->RecalculateAxesScale();
        }

        void buttonClear_Click(
            System::Object^ sender,
            System::EventArgs^ e)
        {
            textBoxXn->Clear();
            textBoxXk->Clear();
            textBoxDx->Clear();
            textBoxZ->Clear();
            textBoxK->Clear();
            textBoxQ->Clear();

            dataGridView1->DataSource = nullptr;

            chart1->Series["y(x)"]->Points->Clear();

            textBoxXn->Focus();
        }


        void buttonExit_Click(
            System::Object^ sender,
            System::EventArgs^ e)
        {
            System::Windows::Forms::DialogResult result =
                MessageBox::Show(
                    "Закрити програму?",
                    "Вихід",
                    MessageBoxButtons::YesNo,
                    MessageBoxIcon::Question
                );

            if (result ==
                System::Windows::Forms::DialogResult::Yes)
            {
                Application::Exit();
            }
        }
    };
}