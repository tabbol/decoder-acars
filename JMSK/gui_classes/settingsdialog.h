#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include <QDialog>
#include "../audiomskmodulator.h"

namespace Ui {
class SettingsDialog;
}

class SettingsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SettingsDialog(QWidget *parent = 0);
    ~SettingsDialog();
    void populatesettings();

    QString Preamble;
    QString Preamble1;
    QString Preamble2;
    QString Postamble;
    AudioMskModulator::Settings audiomskmodulatorsettings;

private:
    Ui::SettingsDialog *ui;    
    void poulatepublicvars();
protected:
    void accept();

private slots:

};

#endif // SETTINGSDIALOG_H
