/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@class NSString;

@interface AMSUIWebSubscriptionAction : NSObject <AMSUIWebActionRunnable> {

	BOOL _extendedCarrierCheck;
	long long _cachePolicy;
	long long _mediaType;

}

@property (assign,nonatomic) long long cachePolicy;                  //@synthesize cachePolicy=_cachePolicy - In the implementation block
@property (assign,nonatomic) BOOL extendedCarrierCheck;              //@synthesize extendedCarrierCheck=_extendedCarrierCheck - In the implementation block
@property (assign,nonatomic) long long mediaType;                    //@synthesize mediaType=_mediaType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCachePolicy:(long long)arg1 ;
-(long long)cachePolicy;
-(long long)mediaType;
-(void)setMediaType:(long long)arg1 ;
-(BOOL)extendedCarrierCheck;
-(void)setExtendedCarrierCheck:(BOOL)arg1 ;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
@end

