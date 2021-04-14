/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BKSDisplayRenderOverlayDismissAction.h>

@class BKSDisplayRenderOverlayDescriptor, NSString;

@interface BKSDisplayInterstitialRenderOverlayDismissAction : NSObject <BSDescriptionProviding, BKSDisplayRenderOverlayDismissAction> {

	BKSDisplayRenderOverlayDescriptor* _overlayDescriptor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BKSDisplayRenderOverlayDescriptor * overlayDescriptor; 
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(void)dismiss;
-(void)dismissWithAnimation:(id)arg1 ;
-(BKSDisplayRenderOverlayDescriptor *)overlayDescriptor;
-(id)initWithDescriptor:(id)arg1 ;
@end

