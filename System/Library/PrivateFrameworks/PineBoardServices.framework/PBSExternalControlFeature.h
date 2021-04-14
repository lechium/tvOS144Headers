/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PBSExternalControlFeature : NSObject {

	BOOL _isReadyForUse;
	BOOL _isConfiguredForUse;
	BOOL _isAutomaticallyConfigured;
	BOOL _isEnabled;
	BOOL _updatePending;
	long long _featureType;
	long long _transport;

}

@property (assign,nonatomic) long long featureType;                       //@synthesize featureType=_featureType - In the implementation block
@property (assign,nonatomic) BOOL isReadyForUse;                          //@synthesize isReadyForUse=_isReadyForUse - In the implementation block
@property (assign,nonatomic) BOOL isConfiguredForUse;                     //@synthesize isConfiguredForUse=_isConfiguredForUse - In the implementation block
@property (assign,nonatomic) BOOL isAutomaticallyConfigured;              //@synthesize isAutomaticallyConfigured=_isAutomaticallyConfigured - In the implementation block
@property (assign,nonatomic) BOOL isEnabled;                              //@synthesize isEnabled=_isEnabled - In the implementation block
@property (assign,nonatomic) long long transport;                         //@synthesize transport=_transport - In the implementation block
@property (assign,nonatomic) BOOL updatePending;                          //@synthesize updatePending=_updatePending - In the implementation block
+(id)featureForType:(long long)arg1 ;
-(id)debugDescription;
-(id)init;
-(void)dealloc;
-(BOOL)isEnabled;
-(long long)transport;
-(void)setTransport:(long long)arg1 ;
-(void)setIsEnabled:(BOOL)arg1 ;
-(void)setFeatureType:(long long)arg1 ;
-(long long)featureType;
-(void)_updateState;
-(BOOL)updatePending;
-(void)setUpdatePending:(BOOL)arg1 ;
-(id)_initForType:(long long)arg1 ;
-(void)_updateStateWithReady:(BOOL)arg1 configured:(BOOL)arg2 autoConfigured:(BOOL)arg3 enabled:(BOOL)arg4 transport:(long long)arg5 ;
-(void)setIsReadyForUse:(BOOL)arg1 ;
-(void)setIsConfiguredForUse:(BOOL)arg1 ;
-(void)setIsAutomaticallyConfigured:(BOOL)arg1 ;
-(id)debugDescriptionShort;
-(BOOL)isReadyForUse;
-(BOOL)isConfiguredForUse;
-(BOOL)isAutomaticallyConfigured;
@end

