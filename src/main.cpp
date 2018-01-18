#include <windows.h>

int main() {
	INPUT inputEvent;

	// Set up a generic keyboard event.
	inputEvent.type = INPUT_KEYBOARD;
	while (true) {
		// Sleeping for 500 milliseconds
		Sleep(500);
		// Press key
		inputEvent.ki.wVk = VK_UP; // virtual-key code for the "a" key
		inputEvent.ki.dwFlags = 0; // 0 for key press
		SendInput(1, &inputEvent, sizeof(INPUT));

		// Release key
		inputEvent.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
		SendInput(1, &inputEvent, sizeof(INPUT));

	}

	return EXIT_SUCCESS;
}
