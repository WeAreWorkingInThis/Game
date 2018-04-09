////////////////////////////////////////////////////////////////////////////////////////////////////
// NoesisGUI - http://www.noesisengine.com
// Copyright (c) 2013 Noesis Technologies S.L. All Rights Reserved.
// [CR #938]
////////////////////////////////////////////////////////////////////////////////////////////////////


#ifndef __GUI_TEMPLATEBINDINGEXTENSION_H__
#define __GUI_TEMPLATEBINDINGEXTENSION_H__


#include <NsCore/Noesis.h>
#include <NsCore/ReflectionDeclare.h>
#include <NsCore/BaseComponent.h>
#include <NsGui/CoreApi.h>
#include <NsGui/IMarkupExtension.h>


namespace Noesis
{

class DependencyProperty;

NS_WARNING_PUSH
NS_MSVC_WARNING_DISABLE(4251 4275)

////////////////////////////////////////////////////////////////////////////////////////////////////
/// Implements a markup extension that supports the binding between the value of a property in a
/// template and the value of some other exposed property on the templated control. Using a
/// TemplateBinding is equivalent to using a Binding with the Source property set to
/// RelativeSource.TemplatedParent.
///
/// The method ProvideValue returns a TemplateBindingExpression.
///
/// Example:
///
/// .. code-block:: xml
///
///     <ControlTemplate Key="buttonTemplate" TargetType="{x:Type Button}">
///       <Border Background="{TemplateBinding Background}"/>
///     </ControlTemplate>
///
/// http://msdn.microsoft.com/en-us/library/system.windows.templatebindingextension.aspx
////////////////////////////////////////////////////////////////////////////////////////////////////
class NS_GUI_CORE_API TemplateBindingExtension: public BaseComponent, public IMarkupExtension
{
public:
    /// Default constructor
    TemplateBindingExtension();
    
    /// Constructor
    TemplateBindingExtension(const DependencyProperty* dp);

    /// Gets or sets property
    //@{
    const DependencyProperty* GetProperty() const;
    void SetProperty(const DependencyProperty* property);
    //@}

    /// From IMarkupExtension
    //@{
    Ptr<BaseComponent> ProvideValue(const void* context) override;
    //@}

    NS_IMPLEMENT_INTERFACE_FIXUP

private:
    /// Gets or sets the source property being bound to
    const DependencyProperty* mProperty;
    
    NS_DECLARE_REFLECTION(TemplateBindingExtension, BaseComponent)
};

NS_WARNING_POP

}

#endif
