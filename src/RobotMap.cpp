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
Solenoid* RobotMap::boxDraggersolenoidR = NULL;
Solenoid* RobotMap::boxDraggersolenoidL = NULL;
Compressor* RobotMap::pneumaticcomp = NULL;
SpeedController* RobotMap::forkliftspeedControllerHorizontal = NULL;
Encoder* RobotMap::forkliftencoder = NULL;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
CANTalon* RobotMap::forkliftspeedControllerVertical = NULL;
PowerDistributionPanel* RobotMap::forkliftPDP = NULL;
PIDController* RobotMap::forkliftPID = NULL;

bool RobotMap::isTeleop = false;

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

        driveTrainomnidrive->SetInvertedMotor(RobotDrive::kFrontRightMotor, true);
        driveTrainomnidrive->SetInvertedMotor(RobotDrive::kRearRightMotor, true);
	boxDraggersolenoidR = new Solenoid(1, 5);
	lw->AddActuator("BoxDragger", "solenoidR", boxDraggersolenoidR);
	
	boxDraggersolenoidL = new Solenoid(1, 4);
	lw->AddActuator("BoxDragger", "solenoidL", boxDraggersolenoidL);
	
	pneumaticcomp = new Compressor(1);
	
	
	forkliftspeedControllerHorizontal = new Talon(5);
	lw->AddActuator("Forklift", "speedControllerHorizontal", (Talon*) forkliftspeedControllerHorizontal);
	
	forkliftencoder = new Encoder(0, 1, true, Encoder::k2X);
	lw->AddSensor("Forklift", "encoder", forkliftencoder);
	forkliftencoder->SetDistancePerPulse(0.3515625);
        forkliftencoder->SetPIDSourceParameter(Encoder::kDistance);


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	forkliftspeedControllerVertical = new CANTalon(2);
	forkliftPDP = new PowerDistributionPanel();
}
