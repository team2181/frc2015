// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
SpeedController* RobotMap::driveTrainspeedcontrollerFR = NULL;
SpeedController* RobotMap::driveTrainspeedcontrollerFL = NULL;
SpeedController* RobotMap::driveTrainspeedcontrollerBR = NULL;
SpeedController* RobotMap::driveTrainspeedcontrollerBL = NULL;
RobotDrive* RobotMap::driveTrainomnidrive = NULL;
Solenoid* RobotMap::boxDraggersolenoidRU = NULL;
Solenoid* RobotMap::boxDraggersolenoidRD = NULL;
Solenoid* RobotMap::boxDraggersolenoidLU = NULL;
Solenoid* RobotMap::boxDraggersolenoidLD = NULL;
Compressor* RobotMap::pneumaticcomp = NULL;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
CANTalon* RobotMap::forkliftSpeedController = NULL;

void RobotMap::init() {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	LiveWindow* lw = LiveWindow::GetInstance();

	driveTrainspeedcontrollerFR = new Talon(0);
	lw->AddActuator("DriveTrain", "speedcontrollerFR", (Talon*) driveTrainspeedcontrollerFR);
	
	driveTrainspeedcontrollerFL = new Talon(1);
	lw->AddActuator("DriveTrain", "speedcontrollerFL", (Talon*) driveTrainspeedcontrollerFL);
	
	driveTrainspeedcontrollerBR = new Talon(2);
	lw->AddActuator("DriveTrain", "speedcontrollerBR", (Talon*) driveTrainspeedcontrollerBR);
	
	driveTrainspeedcontrollerBL = new Talon(3);
	lw->AddActuator("DriveTrain", "speedcontrollerBL", (Talon*) driveTrainspeedcontrollerBL);
	
	driveTrainomnidrive = new RobotDrive(driveTrainspeedcontrollerFL, driveTrainspeedcontrollerBL,
              driveTrainspeedcontrollerFR, driveTrainspeedcontrollerBR);
	
	driveTrainomnidrive->SetSafetyEnabled(true);
        driveTrainomnidrive->SetExpiration(0.1);
        driveTrainomnidrive->SetSensitivity(0.5);
        driveTrainomnidrive->SetMaxOutput(1.0);

	boxDraggersolenoidRU = new Solenoid(1, 0);
	lw->AddActuator("BoxDragger", "solenoidRU", boxDraggersolenoidRU);
	
	boxDraggersolenoidRD = new Solenoid(1, 1);
	lw->AddActuator("BoxDragger", "solenoidRD", boxDraggersolenoidRD);
	
	boxDraggersolenoidLU = new Solenoid(1, 2);
	lw->AddActuator("BoxDragger", "solenoidLU", boxDraggersolenoidLU);
	
	boxDraggersolenoidLD = new Solenoid(1, 3);
	lw->AddActuator("BoxDragger", "solenoidLD", boxDraggersolenoidLD);
	
	pneumaticcomp = new Compressor(1);
	
	


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS

	forkliftSpeedController = new CANTalon(2);
}
