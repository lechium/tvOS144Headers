/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SASActivationRequest, SASSystemState, SASSiriPocketStateManager, AFPreferences, NSDictionary;

@interface SASActivationCondition : NSObject {

	BOOL _buttonTriggerStateActive;
	SASActivationRequest* _request;
	SASSystemState* _systemState;
	SASSiriPocketStateManager* _pocketStateManager;
	AFPreferences* _preferences;
	NSDictionary* _analyticsContext;
	long long _requestState;

}

@property (nonatomic,retain) SASActivationRequest * request;                              //@synthesize request=_request - In the implementation block
@property (assign,nonatomic) BOOL buttonTriggerStateActive;                               //@synthesize buttonTriggerStateActive=_buttonTriggerStateActive - In the implementation block
@property (nonatomic,retain) SASSystemState * systemState;                                //@synthesize systemState=_systemState - In the implementation block
@property (nonatomic,retain) SASSiriPocketStateManager * pocketStateManager;              //@synthesize pocketStateManager=_pocketStateManager - In the implementation block
@property (nonatomic,retain) AFPreferences * preferences;                                 //@synthesize preferences=_preferences - In the implementation block
@property (nonatomic,retain) NSDictionary * analyticsContext;                             //@synthesize analyticsContext=_analyticsContext - In the implementation block
@property (assign,nonatomic) long long requestState;                                      //@synthesize requestState=_requestState - In the implementation block
-(SASActivationRequest *)request;
-(void)setRequest:(SASActivationRequest *)arg1 ;
-(AFPreferences *)preferences;
-(void)setPreferences:(AFPreferences *)arg1 ;
-(void)setRequestState:(long long)arg1 ;
-(long long)requestState;
-(NSDictionary *)analyticsContext;
-(SASSystemState *)systemState;
-(void)setSystemState:(SASSystemState *)arg1 ;
-(void)setButtonTriggerStateActive:(BOOL)arg1 ;
-(void)setPocketStateManager:(SASSiriPocketStateManager *)arg1 ;
-(BOOL)buttonTriggerStateActive;
-(SASSiriPocketStateManager *)pocketStateManager;
-(void)setAnalyticsContext:(NSDictionary *)arg1 ;
@end

