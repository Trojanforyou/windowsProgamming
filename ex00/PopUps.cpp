#include <string>
#include <windows.h>

int main()
{
	int status = MessageBox(0, "Gimme all of your data", "Account Details", MB_OKCANCEL |  MB_ICONASTERISK);
	switch (status)
	{
		case IDCANCEL:
		while (true)
		{
			MessageBox(0, "Nope! Maybe you wanna try again?", "Account Details", MB_RETRYCANCEL | MB_ICONHAND);
			case TRY_AGAIN:
				MessageBox(0, "Did you really believed that this will be that easy?", "Nope", MB_YESNO | MB_ICONQUESTION);
				case (IDYES):
					MessageBox(0, "Pathetic", "LOL", MB_HELP | MB_ICONQUESTION);
		}
	}
}