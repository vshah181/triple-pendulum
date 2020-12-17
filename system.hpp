#ifndef TRIPLE_PENDULUM_SYSTEM_HPP
#define TRIPLE_PENDULUM_SYSTEM_HPP

namespace SystemParams {
	double m_1, m_2, m_3;
	double l_1, l_2, l_3;	
}

namespace SolutionParams {
	double duration;
	double dt;
}

class State {
	public:

		// State in polars
		double theta_1, theta_2, theta_3;
		double theta_dot_1, theta_dot_2, theta_dot_3;
		// State in cartesians
		double x_1, x_2, x_3, y_1, y_2, y_3;
		double x_dot_1, x_dot_2, x_dot_3, y_dot_1, y_dot_2, y_dot_3;

		// Constructor
		void State() {
			theta_1 = theta_2 = theta_3 =Constants::pi/2;
			theta_dot_1 = theta_dot_2 = theta_dot_3 = 0;
		}
		void State(double temp_theta_1) {
			theta_1 = temp_theta_1;
		}
		void polarToCartesian() {

		}
};

/*
state operator+(const state& s1, const state& s2) noexcept {
	state s;
	s.theta1 = s1.theta1 + s2.theta1;
    s.theta2 = s1.theta2 + s2.theta2;
    s.theta3 = s1.theta3 + s2.theta3;
	s.dtheta1 = s1.dtheta1 + s2.dtheta1;
    s.dtheta2 = s1.dtheta2 + s2.dtheta2;
    s.dtheta3 = s1.dtheta3 + s2.dtheta3;
    return s;
}
*/

class Pendulum {
	private:

		State initial_state;
		State current_state;

	public:

		void Pendulum() {
			initial_state = State();
			current_state = initial_state;
		}

		void Pendulum(theta1) {
			initial_state = State(asdasd);
			current_state = initial_state;
		}
		void Update() {
			current_state = current_state + calculation;
		}

};

#endif