#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //Initialize slope value
    m_constants.changeSlope(ui->slopeComboBox->currentIndex());

    //Initialize the member with values from the ui
    m_person.setWeight(ui->weightSpinBox->value());
    m_time = ui->timeSpinBox->value();
    m_speed = ui->speedSpinBox->value();

    //Connect to the spinboxes
    connect(ui->weightSpinBox,  &QDoubleSpinBox::valueChanged,
            this,               &Widget::weight_changed);
    connect(ui->timeSpinBox,    &QDoubleSpinBox::valueChanged,
            this,               &Widget::time_changed);
    connect(ui->speedSpinBox,   &QDoubleSpinBox::valueChanged,
            this,               &Widget::speed_changed);
    connect(ui->slopeComboBox,  &QComboBox::currentIndexChanged,
            this,               &Widget::slope_changed);


    //Update the calory count when necessary
    connect(this, &Widget::calory_count_changed, [=]() {
        ui->caloryCountLabel->setText(QString::number(m_calory_count));
    });

    calculate_calories();

}

Widget::~Widget()
{
    delete ui;
}

void Widget::calculate_calories()
{
    //CB = [0.0215 x KPH^3 - 0.1765 x KPH^2 + 0.8710 x KPH + 1.4577] x WKG x T
    m_calory_count = ( (m_constants.A() * (m_speed * m_speed * m_speed) - m_constants.B() * (m_speed * m_speed))
                      + (m_constants.C() * m_speed) + m_constants.D()) * m_person.weight() * m_time;
    emit calory_count_changed();

}

void Widget::weight_changed(double weight)
{
    m_person.setWeight(weight);
    calculate_calories();
}

void Widget::time_changed(double time)
{
    m_time = time;
    calculate_calories();
}

void Widget::speed_changed(double speed)
{
    m_speed = speed;
    calculate_calories();
}

void Widget::slope_changed(int index)
{
    m_constants.changeSlope(index);
    calculate_calories();
}


