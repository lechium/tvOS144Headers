/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CDPDAuthListener.h>
#import <libobjc.A.dylib/CDPDCircleListener.h>

@protocol CDPDCircleProxy;
@class NSString;

@interface CDPManateeStateController : NSObject <CDPDAuthListener, CDPDCircleListener> {

	id<CDPDCircleProxy> _circleProxy;

}

@property (nonatomic,retain) id<CDPDCircleProxy> circleProxy;              //@synthesize circleProxy=_circleProxy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isManateeAvailable:(id*)arg1 ;
-(BOOL)isPrimaryAccountHSA2;
-(BOOL)_checkSecurityEligibility:(id*)arg1 ;
-(void)_didCreateCircleProxy;
-(void)reportManateeAvailable;
-(void)reportManateeUnavailable;
-(void)_sendNotification:(const char*)arg1 withValue:(unsigned long long)arg2 ;
-(void)securityLevelChanged:(BOOL)arg1 ;
-(void)circleStatusChanged;
-(void)circleViewStatusChanged;
-(id<CDPDCircleProxy>)circleProxy;
-(void)setCircleProxy:(id<CDPDCircleProxy>)arg1 ;
@end

