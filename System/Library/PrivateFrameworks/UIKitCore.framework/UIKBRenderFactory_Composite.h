/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBRenderFactoryiPhone.h>

@class UIKBRenderFactory;

@interface UIKBRenderFactory_Composite : UIKBRenderFactoryiPhone {

	UIKBRenderFactory* _overlayFactory;

}
-(void)dealloc;
-(id)initWithRenderingContext:(id)arg1 skipLayoutSegments:(BOOL)arg2 ;
-(UIEdgeInsets)wideShadowPaddleInsets;
-(double)popupFontSize;
-(CGPoint)popupSymbolTextOffset;
-(UIEdgeInsets)wideShadowPopupMenuInsets;
-(CGPoint)variantSymbolTextOffset;
-(CGPoint)variantAnnotationTextOffset;
-(UIEdgeInsets)variantSymbolFrameInsets;
-(UIEdgeInsets)variantPaddedFrameInsets;
-(BOOL)isTallPopup;
-(Class)_overlayFactoryClass;
@end

