﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/Notifications/SProgressBar.h"

/**
 * 
 */
class SHADOWRUNNER_API SHealthBarWidget: public SCompoundWidget
{
	public:
		SLATE_BEGIN_ARGS(SHealthBarWidget)
		{
		}

		SLATE_END_ARGS()
	
		/** Constructs this widget with InArgs */
		void Construct (const FArguments& InArgs);

		void UpdateHealth(float health, float defaultHealth);

	private:
		TSharedPtr<SProgressBar> healthProgressBar;

	protected:
	virtual int32 OnPaint(
		const FPaintArgs& Args,
		const FGeometry& AllottedGeometry,
		const FSlateRect& MyCullingRect,
		FSlateWindowElementList& OutDrawElements,
		int32 LayerId,
		const FWidgetStyle& InWidgetStyle,
		bool bParentEnabled
	) const override;
};
