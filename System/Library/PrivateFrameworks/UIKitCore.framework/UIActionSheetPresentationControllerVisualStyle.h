/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIColor;


@protocol UIActionSheetPresentationControllerVisualStyle <NSObject>
@property (readonly) double dismissToContentSpacing; 
@property (readonly) UIColor * dimmingViewColor; 
@property (readonly) double cornerRadius; 
@property (readonly) UIView*<UIActionSheetPresentationControllerDismissActionView> dismissActionView; 
@required
-(double)cornerRadius;
-(UIEdgeInsets*)contentInsetsForContainerView:(id)arg1;
-(UIView*<UIActionSheetPresentationControllerDismissActionView>)dismissActionView;
-(UIColor *)dimmingViewColor;
-(double)dismissToContentSpacing;

@end

