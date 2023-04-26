#include "AppEntryPoint.h"
#include "Core/Application.h"
#include "DYEditorApplication.h"

namespace DYE
{
	Application * CreateApplication()
	{
		// Change the project name here.
		char const* projectName = "DYEditor Template Project";
		return new DYE::DYEditor::DYEditorApplication { projectName, 60 };
	}
}
