/*
 * JasperReports - Free Java Reporting Library.
 * Copyright (C) 2001 - 2011 Jaspersoft Corporation. All rights reserved.
 * http://www.jaspersoft.com
 *
 * Unless you have purchased a commercial license agreement from Jaspersoft,
 * the following license terms apply:
 *
 * This program is part of JasperReports.
 *
 * JasperReports is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * JasperReports is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with JasperReports. If not, see <http://www.gnu.org/licenses/>.
 */
package org.oss.pdfreporter.engine.design;

import org.oss.pdfreporter.engine.JRCloneable;
import org.oss.pdfreporter.engine.JRComponentElement;
import org.oss.pdfreporter.engine.JRConstants;
import org.oss.pdfreporter.engine.JRDefaultStyleProvider;
import org.oss.pdfreporter.engine.JRExpressionCollector;
import org.oss.pdfreporter.engine.JRVisitor;
import org.oss.pdfreporter.engine.component.BaseComponentContext;
import org.oss.pdfreporter.engine.component.Component;
import org.oss.pdfreporter.engine.component.ComponentKey;
import org.oss.pdfreporter.engine.component.ContextAwareComponent;
import org.oss.pdfreporter.engine.design.events.JRPropertyChangeSupport;

/**
 * A {@link JRComponentElement} implementation which is to be used at report
 * design time.
 * 
 * @author Lucian Chirita (lucianc@users.sourceforge.net)
 * @version $Id: JRDesignComponentElement.java 4595 2011-09-08 15:55:10Z teodord $
 */
public class JRDesignComponentElement extends JRDesignElement implements JRComponentElement
{

	private static final long serialVersionUID = JRConstants.SERIAL_VERSION_UID;

	public static final String PROPERTY_COMPONENT = "component";
	public static final String PROPERTY_COMPONENT_KEY = "componentKey";
	
	private ComponentKey componentKey;
	private Component component;
	
	private transient JRPropertyChangeSupport eventSupport;

	/**
	 * Creates an empty component element.
	 */
	public JRDesignComponentElement()
	{
		super(null);
	}

	/**
	 * Creates an empty component element.
	 * 
	 * @param defaultStyleProvider the default style provide to use for this
	 * element
	 */
	public JRDesignComponentElement(JRDefaultStyleProvider defaultStyleProvider)
	{
		super(defaultStyleProvider);
	}
	
	public JRPropertyChangeSupport getEventSupport()
	{
		synchronized (this)
		{
			if (eventSupport == null)
			{
				eventSupport = new JRPropertyChangeSupport(this);
			}
		}
		
		return eventSupport;
	}
	
	public void collectExpressions(JRExpressionCollector collector)
	{
		collector.collect(this);
	}

	public void visit(JRVisitor visitor)
	{
		visitor.visitComponentElement(this);
	}

	public Component getComponent()
	{
		return component;
	}

	/**
	 * Sets the component instance wrapped by this element.
	 * 
	 * @param component the component instance
	 * @see #getComponent()
	 */
	public void setComponent(Component component)
	{
		ContextAwareComponent contextAwareComponent = component instanceof ContextAwareComponent ? (ContextAwareComponent)component : null;
		if (contextAwareComponent != null)
		{
			BaseComponentContext context = new BaseComponentContext();
			context.setComponentElement(this);
			contextAwareComponent.setContext(context);
		}
		
		Object old = this.component;
		this.component = component;
		getEventSupport().firePropertyChange(PROPERTY_COMPONENT, old, this.component);
	}

	public ComponentKey getComponentKey()
	{
		return componentKey;
	}

	/**
	 * Sets the component type key that corresponds to the component instance.
	 * 
	 * @param componentKey the component type key
	 * @see #getComponentKey()
	 */
	public void setComponentKey(ComponentKey componentKey)
	{
		Object old = this.componentKey;
		this.componentKey = componentKey;
		getEventSupport().firePropertyChange(PROPERTY_COMPONENT_KEY, old, this.componentKey);
	}

	public Object clone()
	{
		JRDesignComponentElement clone = (JRDesignComponentElement) super.clone();
		
		if (component instanceof JRCloneable)
		{
			clone.component = (Component) ((JRCloneable) component).clone();
		}
		else if (component != null)
		{
		}
		
		clone.eventSupport = null;

		return clone;
	}

}
