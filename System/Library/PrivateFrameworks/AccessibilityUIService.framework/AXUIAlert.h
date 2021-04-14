/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUIService.framework/AccessibilityUIService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class AXUIAlertContext, NSDictionary;

@interface AXUIAlert : UIView {

	AXUIAlertContext* _context;
	NSDictionary* _userInfo;

}

@property (assign,nonatomic,__weak) AXUIAlertContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                        //@synthesize userInfo=_userInfo - In the implementation block
+(id)alertWithType:(unsigned long long)arg1 text:(id)arg2 subtitleText:(id)arg3 iconImage:(id)arg4 styleProvider:(id)arg5 userInfo:(id)arg6 ;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(AXUIAlertContext *)context;
-(void)setContext:(AXUIAlertContext *)arg1 ;
-(void)addToContainerView:(id)arg1 ;
@end

