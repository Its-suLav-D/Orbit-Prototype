#include "velocity.h"
#include "physics.h"
#include "acceleration.h"
#include <cassert>
#include <iostream>

using namespace std;

/*******************************
 * TEST Velocity
 * The unit test for the Velocity class
 ********************************/

class TestValocity
{
public:
	void run()
	{
		startAtZeroAccelerateX();
		startAtTenTenAccelerateX();
		startAtZeroAccelerateXAndY();
		startAtZeroXDecceleration();
		startAtTenTenXDecceleration();
		decelerateXAndY();
	}


private:
	void startAtZeroAccelerateX()
	{
		//setup
		Velocity vel;
		vel.setDx(0.0);
		vel.setDy(0.0);
		Acceleration acc;
		Physics phy;
		acc.setDdx(1.0);

		//exercise
		phy.HorizontalVelocity(vel, acc.getDdx());
		//verify
		assert(vel.Dx == 1.0);
		assert(vel.Dy == 0.0);
	} //teardown

	void startAtTenTenAccelerateX()
	{
		//setup
		Velocity vel;
		vel.setDx(10.0);
		vel.setDy(10.0);

		//exercise
		// ?
		//verify
		assert(vel.getDx() == 20.0);
		assert(vel.getDy() == 10.0);
	} //teardown

	void startAtZeroAccelerateXAndY()
	{
		//setup
		Velocity vel;
		vel.setDx(0.0);
		vel.setDy(0.0);

		//exercise
		// ?
		//verify
		assert(vel.getDx() == 10.0);
		assert(vel.getDy() == 10.0);
	} //teardown

	void startAtZeroXDecceleration()
	{
		//setup
		Velocity vel;
		vel.setDx(0.0);
		vel.setDy(0.0);

		//exercise
		// ?
		//verify
		assert(vel.getDx() == -1.0);
		assert(vel.getDy() == 0.0);
	} //teardown

	void startAtTenTenXDecceleration()
	{
		//setup
		Velocity vel;
		vel.setDx(10.0);
		vel.setDy(10.0);

		//exercise
		// ?
		//verify
		assert(vel.getDx() == 0.0);
		assert(vel.getDy() == 10.0);
	} //teardown

	void decelerateXAndY()
	{
		//setup
		Velocity vel;
		vel.setDx(0.0);
		vel.setDy(0.0);

		//exercise
		// ?
		//verify
		assert(vel.getDx() == -10.0);
		assert(vel.getDy() == -10.0);
	} //teardown

};