////////////////////////////////////////////////////////////////////////////////////////////////////
// NoesisGUI - http://www.noesisengine.com
// Copyright (c) Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////


#ifndef __GUI_ITALIC_H__
#define __GUI_ITALIC_H__


#include <NsCore/Noesis.h>
#include <NsGui/Span.h>
#include <NsCore/ReflectionDeclare.h>


namespace Noesis
{

////////////////////////////////////////////////////////////////////////////////////////////////////
/// An inline-level flow content element that causes content to render with an italic font style.
////////////////////////////////////////////////////////////////////////////////////////////////////
class NS_GUI_CORE_API Italic: public Span
{
public:
    Italic();
    Italic(Inline* childInline);

    NS_DECLARE_REFLECTION(Italic, Span)
};

}

#endif