/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface GKReporter : NSObject {

	double _authenticateResponseTimestamp;
	double _inviteeUILaunchTimestamp;
	double _connectingDevicesTimestamp;
	double _programaticInviteTimestamp;
	double _appLaunchTimestamp;
	double _totalInviteReceivedTimestamp;
	double _messageInviteProcessingTimestamp;

}

@property (assign,nonatomic) double authenticateResponseTimestamp;                 //@synthesize authenticateResponseTimestamp=_authenticateResponseTimestamp - In the implementation block
@property (assign,nonatomic) double inviteeUILaunchTimestamp;                      //@synthesize inviteeUILaunchTimestamp=_inviteeUILaunchTimestamp - In the implementation block
@property (assign,nonatomic) double connectingDevicesTimestamp;                    //@synthesize connectingDevicesTimestamp=_connectingDevicesTimestamp - In the implementation block
@property (assign,nonatomic) double programaticInviteTimestamp;                    //@synthesize programaticInviteTimestamp=_programaticInviteTimestamp - In the implementation block
@property (assign,nonatomic) double appLaunchTimestamp;                            //@synthesize appLaunchTimestamp=_appLaunchTimestamp - In the implementation block
@property (assign,nonatomic) double totalInviteReceivedTimestamp;                  //@synthesize totalInviteReceivedTimestamp=_totalInviteReceivedTimestamp - In the implementation block
@property (assign,nonatomic) double messageInviteProcessingTimestamp;              //@synthesize messageInviteProcessingTimestamp=_messageInviteProcessingTimestamp - In the implementation block
+(id)reporter;
-(void)reportEvent:(id)arg1 payload:(id)arg2 ;
-(void)reportTournamentAnalyticsWithDomain:(id)arg1 type:(id)arg2 tournamentType:(id)arg3 replayCount:(id)arg4 friendCount:(id)arg5 tournamentID:(id)arg6 bundleID:(id)arg7 inviteeCount:(id)arg8 ;
-(void)reportAppLaunchDuration;
-(void)recordAuthenticateResponseTimestamp;
-(void)reportEvent:(id)arg1 type:(id)arg2 startTime:(id)arg3 ;
-(void)reportEvent:(id)arg1 type:(id)arg2 ;
-(void)recordConnectingDevicesTimestamp;
-(void)reportEvent:(id)arg1 type:(id)arg2 count:(id)arg3 ;
-(void)reportConnectingDevicesDuration;
-(void)reportProgramaticInviteDuration;
-(void)reportAuthenticateResponseDuration;
-(void)recordProgramaticInviteTimestamp;
-(void)reportEvent:(id)arg1 type:(id)arg2 bundleID:(id)arg3 ;
-(BOOL)isTimeSpanValid:(double)arg1 maxDuration:(double)arg2 ;
-(void)reportEvent:(id)arg1 type:(id)arg2 payload:(id)arg3 ;
-(void)setAuthenticateResponseTimestamp:(double)arg1 ;
-(double)authenticateResponseTimestamp;
-(void)reportDurationForEventType:(id)arg1 withStartTimestamp:(double)arg2 ;
-(void)setInviteeUILaunchTimestamp:(double)arg1 ;
-(double)inviteeUILaunchTimestamp;
-(void)setMessageInviteProcessingTimestamp:(double)arg1 ;
-(double)messageInviteProcessingTimestamp;
-(void)setConnectingDevicesTimestamp:(double)arg1 ;
-(double)connectingDevicesTimestamp;
-(void)setProgramaticInviteTimestamp:(double)arg1 ;
-(double)programaticInviteTimestamp;
-(void)setAppLaunchTimestamp:(double)arg1 ;
-(void)setTotalInviteReceivedTimestamp:(double)arg1 ;
-(double)appLaunchTimestamp;
-(double)totalInviteReceivedTimestamp;
-(void)reportEvent:(id)arg1 type:(id)arg2 friendsPlayedThisGame:(id)arg3 ;
-(void)reportEvent:(id)arg1 type:(id)arg2 scoreRank:(id)arg3 ;
-(void)recordInviteeUILaunchTimestamp;
-(void)reportInviteeUILaunchDuration;
-(void)recordMessageInviteProcessingTimestamp;
-(void)reportMessageInviteProcessingDuration;
-(void)recordAppLaunchAndTotalTimestamp;
-(void)reportTotalInviteReceivedDuration;
-(void)reportScreenTimeEventForType:(id)arg1 withStartTimestamp:(double)arg2 ;
-(void)reportOnboardingEventForType:(id)arg1 withStartTimestamp:(double)arg2 ;
@end

