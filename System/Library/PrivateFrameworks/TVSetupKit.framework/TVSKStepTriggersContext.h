/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVSetupKit.framework/TVSetupKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TVSKSetupSession;

@interface TVSKStepTriggersContext : NSObject {

	BOOL _shouldReset;
	long long __expressTapToSetupEnabledOverride;

}

@property (assign,setter=_setExpressTapToSetupEnabledOverride:,nonatomic) long long _expressTapToSetupEnabledOverride;              //@synthesize _expressTapToSetupEnabledOverride=__expressTapToSetupEnabledOverride - In the implementation block
@property (assign,nonatomic) BOOL shouldReset;                                                                                      //@synthesize shouldReset=_shouldReset - In the implementation block
@property (nonatomic,readonly) TVSKSetupSession * setupSession; 
@property (getter=isExpressTapToSetupEnabled,nonatomic,readonly) BOOL expressTapToSetupEnabled; 
+(void)_registerSetupSession:(id)arg1 ;
-(id)description;
-(id)init;
-(TVSKSetupSession *)setupSession;
-(long long)_expressTapToSetupEnabledOverride;
-(BOOL)isExpressTapToSetupEnabled;
-(BOOL)shouldReset;
-(void)setShouldReset:(BOOL)arg1 ;
-(void)_setExpressTapToSetupEnabledOverride:(long long)arg1 ;
@end
