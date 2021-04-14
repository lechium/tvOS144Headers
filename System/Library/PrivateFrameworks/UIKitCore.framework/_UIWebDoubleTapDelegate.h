/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UIWebDoubleTapDelegate
@optional
-(void)willZoomToMinimumScale;
-(BOOL)shouldSelectionAssistantReceiveDoubleTapAtPoint:(CGPoint)arg1 forScale:(double)arg2;
-(void)willZoomToLocation:(CGPoint)arg1 atScale:(double)arg2 forDuration:(double)arg3;

@required
-(id)contentView;
-(CGRect*)visibleContentRect;
-(double)zoomedDocumentScale;
-(BOOL)considerHeightForDoubleTap;
-(id)enclosingScrollView;
-(double)currentDocumentScale;
-(double)minimumScaleForSize:(CGSize)arg1;
-(CGRect*)rectOfInterestForPoint:(CGPoint)arg1;
-(SCD_Struct_UI51*)doubleTapScalesForSize:(CGSize)arg1;

@end
