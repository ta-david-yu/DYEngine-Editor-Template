#pragma once

#include "Core/EditorComponent.h"

namespace DYE::DYEditor::Template
{
	DYE_COMPONENT("Example Component", DYE::DYEditor::Template::ExampleComponent)
	struct ExampleComponent
	{
		DYE_PROPERTY()
		DYE::Int32 IntegerVariable;
	};
}